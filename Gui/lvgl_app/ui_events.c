// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

#include "stdio.h"
#include "stdlib.h"

#include "Task_Exti.h"
#include "dac.h"

static char bufPrevPage[8];
static uint8_t SelectedUser = 0;

#define PULSEperL 354
#define LperPULSE 0.00281955f

void refreshUserBlock(UserBlock_t *ub) {
    lv_label_set_text_fmt(ub->name, "%hu:%s", ub->wmIndex, WaterMeterList[ub->wmIndex].userName);
    lv_label_set_text_fmt(ub->lb_speed, "%.2fL/Min",
                          WaterMeterList[ub->wmIndex].pulseFreq * LperPULSE);
    lv_label_set_text_fmt(ub->lb_total, "%.2fL", WaterMeterList[ub->wmIndex].pulseCnt * LperPULSE);
    lv_bar_set_value(ub->bar_speed, WaterMeterList[ub->wmIndex].pulseFreq, LV_ANIM_ON);
    lv_bar_set_value(
        ub->bar_total,
        (WaterMeterList[ub->wmIndex].pulseLimit > 0)
            ? (1000 * WaterMeterList[ub->wmIndex].pulseCnt / WaterMeterList[ub->wmIndex].pulseLimit)
            : 1000,
        LV_ANIM_ON);
}

void redirectUserBlock(UserBlock_t *ub, uint8_t wmIndex) {
    ub->wmIndex = wmIndex;
    refreshUserBlock(ub);
}

// callback
/**
 * @brief 选中用户块后
 * @param e
 */
void SetSelectedUser(lv_event_t *e) {
    // Your code here
    uint8_t index = 0;
    for (index = 0; index < 4; index++) {
        if (e->target == uiList_UserBlock[index].panel) {
            break;
        }
    }
    if (index < 4) {
        SelectedUser = uiList_UserBlock[index].wmIndex;
    }
}

/**
 * @brief 按下more后，修改more详情页
 * @param e
 */
void SetMorePage(lv_event_t *e) {
    // Your code here
    char buf[32];
    int64_t tmp;
    lv_textarea_set_text(ui_TextAreaUserName, "");
    lv_textarea_set_text(ui_TextAreaRest, "");
    lv_textarea_set_text(ui_TextAreaNumber, "");
    lv_textarea_set_placeholder_text(ui_TextAreaUserName, WaterMeterList[SelectedUser].userName);
    tmp = WaterMeterList[SelectedUser].pulseLimit;
    tmp -= WaterMeterList[SelectedUser].pulseCnt;
    sprintf(buf, "%.2f", LperPULSE * tmp);
    lv_textarea_set_placeholder_text(ui_TextAreaRest, buf);
    lv_textarea_set_placeholder_text(ui_TextAreaNumber, WaterMeterList[SelectedUser].phoneNumber);
}

/**
 * @brief 按下textarea后修改键盘的目标对象
 * @param e
 */
void Change_Keyboard_targerTextarea(lv_event_t *e) {
    // Your code here
    lv_keyboard_set_textarea(ui_Keyboard, e->target);
}

/**
 * @brief Roller的值发生改变
 * @param e
 */
void SetLablePage(lv_event_t *e) {
    // Your code here
    char buf[8];
    lv_roller_get_selected_str(ui_RollerSelectPage, buf, 8);
    lv_label_set_text_fmt(ui_LabelPage, "%s/16", buf);
}

/**
 * @brief 保存之前的page，以便cancel时恢复
 * @param e
 */
void SavePrevPage(lv_event_t *e) {
    // Your code here
    strcpy(bufPrevPage, lv_label_get_text(ui_LabelPage));
}
/**
 * @brief 点击cancel触发，恢复之前的page
 * @param e
 */
void LoadPrevPage(lv_event_t *e) {
    // Your code here
    lv_label_set_text(ui_LabelPage, bufPrevPage);
}

/**
 * @brief 点击Sure触发，设置列表
 * @param e
 */
void SetNewBlockList(lv_event_t *e) {
    // Your code heren
    char buf[8];
    int num;
    lv_roller_get_selected_str(ui_RollerSelectPage, buf, 8);
    lv_label_set_text_fmt(ui_LabelPage, "%s/16", buf);
    num = atoi(buf);
    uiList_UserBlock[0].wmIndex = num;
    for (uint8_t i = 0; i < 4; i++) {
        redirectUserBlock(&uiList_UserBlock[i], num);
        num = (num + 1) % 16;
    }
}

void KeyboardClicked(lv_event_t *e) {
    // Your code here
    uint8_t keyMode;
    uint16_t selected_btn;
    lv_obj_t *selected_textarea;
    selected_textarea = lv_keyboard_get_textarea(e->target);
    selected_btn = lv_keyboard_get_selected_btn(e->target);
    keyMode = lv_keyboard_get_mode(ui_Keyboard);

    // printf("selected_btn:%u\n", selected_btn);

    /* 按下键盘确认按钮  */
    if ((keyMode == LV_KEYBOARD_MODE_NUMBER && selected_btn == 7) || (selected_btn == 39) ||
        (selected_btn == 22)) {
        _ui_state_modify(selected_textarea, LV_STATE_FOCUSED, _UI_MODIFY_STATE_REMOVE);
        if (selected_textarea == ui_TextAreaUserName) {
            strcpy(WaterMeterList[SelectedUser].userName, lv_textarea_get_text(selected_textarea));
        } else if (selected_textarea == ui_TextAreaNumber) {
            strcpy(WaterMeterList[SelectedUser].phoneNumber,
                   lv_textarea_get_text(selected_textarea));
        } else if (selected_textarea == ui_TextAreaRest) {
            float tmp;
            tmp = atof(lv_textarea_get_text(selected_textarea));

            WaterMeterList[SelectedUser].pulseLimit =
                tmp * PULSEperL + WaterMeterList[SelectedUser].pulseCnt;

            strcpy(WaterMeterList[SelectedUser].phoneNumber,
                   lv_textarea_get_text(selected_textarea));
        }

    } else if (keyMode == LV_KEYBOARD_MODE_NUMBER && selected_btn == 3) {
        lv_keyboard_set_mode(ui_Keyboard, LV_KEYBOARD_MODE_TEXT_UPPER);
    } else if ((keyMode == LV_KEYBOARD_MODE_TEXT_UPPER || keyMode == LV_KEYBOARD_MODE_TEXT_LOWER) &&
               selected_btn == 35) {
        lv_keyboard_set_mode(ui_Keyboard, LV_KEYBOARD_MODE_NUMBER);
    }
}

void ClearHistory(lv_event_t *e) {
    // Your code here
    WaterMeterList[SelectedUser].pulseLimit -= WaterMeterList[SelectedUser].pulseCnt;
    WaterMeterList[SelectedUser].pulseCnt = 0;
    WaterMeterList[SelectedUser].pulseCnt_prev = 0;
}

void SetBrightness(lv_event_t *e) {
    // Your code here
    int32_t x;
    x = lv_slider_get_value(ui_Slider1);
    //	printf("%ld\n",x);
    HAL_DAC_SetValue(&hdac, DAC_CHANNEL_2, DAC_ALIGN_12B_R, x);
}
