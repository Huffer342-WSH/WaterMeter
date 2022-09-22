// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

#include "Task_Exti.h"
///////////////////// DEFINE ////////////////////

///////////////////// CONST ////////////////////
const char lb_text_speed_c[] = "耗水速率";
const char lb_text_total_c[] = "用水总量";
const char lb_text_Cancel_c[] = "Cancel";
const char lb_text_Select_c[] = "Select";
const char lb_text_More_c[] = "More";
const char lb_text_Return_c[] = "< Return";
const char lb_text_UserName_c[] = "用户名";
const char lb_text_RestWater_c[] = "水余量";
const char lb_text_PhoneNumber_c[] = "手机号码";
const char lb_text_ClearHis_c[] = "清除记录";

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_Screen1;
lv_obj_t *ui_PanelUserInfo;
UserBlock_t uiList_UserBlock[4];  //主页的四个用户面板

lv_obj_t *ui_PanelSelectPage;
void ui_event_Slider1(lv_event_t *e);
lv_obj_t *ui_Slider1;
void ui_event_RollerSelectPage(lv_event_t *e);
lv_obj_t *ui_RollerSelectPage;
void ui_event_ButtonSelectPageCancel(lv_event_t *e);
lv_obj_t *ui_ButtonSelectPageCancel;
lv_obj_t *ui_Label2;
void ui_event_ButtonSelectPageSure(lv_event_t *e);
lv_obj_t *ui_ButtonSelectPageSure;
lv_obj_t *ui_Label1;
lv_obj_t *ui_Panel1;
void ui_event_LabelPage(lv_event_t *e);
lv_obj_t *ui_LabelPage;
void ui_event_LabelMore(lv_event_t *e);
lv_obj_t *ui_LabelMore;
lv_obj_t *ui_Screen2;
void ui_event_Keyboard(lv_event_t *e);
lv_obj_t *ui_Keyboard;
void ui_event_LabelReturn(lv_event_t *e);
lv_obj_t *ui_LabelReturn;
void ui_event_TextAreaUserName(lv_event_t *e);
lv_obj_t *ui_TextAreaUserName;
lv_obj_t *ui_LabelUserName;
lv_obj_t *ui_LabelRest;
void ui_event_TextAreaRest(lv_event_t *e);
lv_obj_t *ui_TextAreaRest;
lv_obj_t *ui_Label3;
void ui_event_TextAreaNumber(lv_event_t *e);
lv_obj_t *ui_TextAreaNumber;
void ui_event_ButtonClearHis(lv_event_t *e);
lv_obj_t *ui_ButtonClearHis;
lv_obj_t *ui_Label4;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 1
#error "#error LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

// ui_EloAnimation0
// FUNCTION HEADER
void animeKeyBoardup_Animation(lv_obj_t *TargetObject, int delay);

// FUNCTION
void animeKeyBoardup_Animation(lv_obj_t *TargetObject, int delay) {
    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 100);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -40);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_in_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);
}

// ui_EloAnimation0
// FUNCTION HEADER
void animeKeyBoarddown_Animation(lv_obj_t *TargetObject, int delay);

// FUNCTION
void animeKeyBoarddown_Animation(lv_obj_t *TargetObject, int delay) {
    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, 40);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_in_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);
}

///////////////////// FUNCTIONS ////////////////////
void ui_event_PanelUser(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_FOCUSED) {
        SetSelectedUser(e);
    }
}
void ui_event_Slider1(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_VALUE_CHANGED) {
        SetBrightness(e);
    }
}
void ui_event_RollerSelectPage(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_VALUE_CHANGED) {
        SetLablePage(e);
    }
}
void ui_event_ButtonSelectPageCancel(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_PanelUserInfo, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_PanelSelectPage, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        LoadPrevPage(e);
    }
}
void ui_event_ButtonSelectPageSure(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_PanelSelectPage, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_PanelUserInfo, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        SetNewBlockList(e);
    }
}
void ui_event_LabelPage(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_PanelSelectPage, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_PanelUserInfo, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        SavePrevPage(e);
    }
}
void ui_event_LabelMore(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
        SetMorePage(e);
    }
}
void ui_event_Keyboard(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        KeyboardClicked(e);
    }
}
void ui_event_LabelReturn(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
void ui_event_TextAreaUserName(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_FOCUSED) {
        Change_Keyboard_targerTextarea(e);
    }
}
void ui_event_TextAreaRest(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_FOCUSED) {
        Change_Keyboard_targerTextarea(e);
    }
}
void ui_event_TextAreaNumber(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_FOCUSED) {
        Change_Keyboard_targerTextarea(e);
    }
}
void ui_event_ButtonClearHis(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_CLICKED) {
        ClearHistory(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void) {
    // ui_Screen1

    ui_Screen1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK |
                                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                                      LV_OBJ_FLAG_SCROLL_MOMENTUM);

    lv_obj_set_scrollbar_mode(ui_Screen1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_Screen1, LV_DIR_VER);

    // ui_PanelUserInfo

    ui_PanelUserInfo = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_PanelUserInfo, lv_pct(100));
    lv_obj_set_height(ui_PanelUserInfo, lv_pct(100));

    lv_obj_set_x(ui_PanelUserInfo, -2);
    lv_obj_set_y(ui_PanelUserInfo, 1);

    lv_obj_set_align(ui_PanelUserInfo, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_PanelUserInfo, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_PRESS_LOCK |
                                            LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                                            LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                                            LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);

    lv_obj_set_scrollbar_mode(ui_PanelUserInfo, LV_SCROLLBAR_MODE_ON);
    lv_obj_set_scroll_dir(ui_PanelUserInfo, LV_DIR_VER);

    lv_obj_set_style_radius(ui_PanelUserInfo, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    /* 初始化主页的四个用户面板 */
    for (uint8_t i = 0; i < 4; i++) {
        /* 设置默认指向的信息 */
        uiList_UserBlock[i].wmIndex = i;
        // uiList_UserBlock[i].panel
        /* 初始化面板 */
        uiList_UserBlock[i].panel = lv_obj_create(ui_PanelUserInfo);

        lv_obj_set_height(uiList_UserBlock[i].panel, 80);
        lv_obj_set_width(uiList_UserBlock[i].panel, lv_pct(100));

        lv_obj_set_x(uiList_UserBlock[i].panel, lv_pct(0));
        lv_obj_set_y(uiList_UserBlock[i].panel, lv_pct(-35 + 25 * i));

        lv_obj_set_align(uiList_UserBlock[i].panel, LV_ALIGN_CENTER);

        lv_obj_clear_flag(uiList_UserBlock[i].panel,
                          LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_GESTURE_BUBBLE |
                              LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE |
                              LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                              LV_OBJ_FLAG_SCROLL_CHAIN);

        lv_obj_set_scrollbar_mode(uiList_UserBlock[i].panel, LV_SCROLLBAR_MODE_OFF);

        lv_obj_add_event_cb(uiList_UserBlock[i].panel, ui_event_PanelUser, LV_EVENT_ALL, NULL);
        lv_obj_set_style_radius(uiList_UserBlock[i].panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_outline_color(uiList_UserBlock[i].panel, lv_color_hex(0x2095F6),
                                       LV_PART_MAIN | LV_STATE_FOCUSED);
        lv_obj_set_style_outline_opa(uiList_UserBlock[i].panel, 255,
                                     LV_PART_MAIN | LV_STATE_FOCUSED);
        lv_obj_set_style_outline_width(uiList_UserBlock[i].panel, 1,
                                       LV_PART_MAIN | LV_STATE_FOCUSED);
        lv_obj_set_style_outline_pad(uiList_UserBlock[i].panel, 1, LV_PART_MAIN | LV_STATE_FOCUSED);

        // uiList_UserBlock[i].name
        /* 初始化‘用户姓名’标签 */
        uiList_UserBlock[i].name = lv_label_create(uiList_UserBlock[i].panel);

        lv_obj_set_width(uiList_UserBlock[i].name, lv_pct(100));
        lv_obj_set_height(uiList_UserBlock[i].name, LV_SIZE_CONTENT);

        lv_obj_set_x(uiList_UserBlock[i].name, 5);
        lv_obj_set_y(uiList_UserBlock[i].name, lv_pct(-45));

        lv_obj_set_align(uiList_UserBlock[i].name, LV_ALIGN_LEFT_MID);

        // lv_label_set_text(uiList_UserBlock[i].name, WaterMeterList[i].userName);
        lv_label_set_text_static(uiList_UserBlock[i].name, WaterMeterList[i].userName);

        // uiList_UserBlock[i].bar_speed
        /* 初始化动态条 */
        uiList_UserBlock[i].bar_speed = lv_bar_create(uiList_UserBlock[i].panel);
        lv_bar_set_range(uiList_UserBlock[i].bar_speed, 0, 1000);
        lv_bar_set_value(uiList_UserBlock[i].bar_speed, 0, LV_ANIM_OFF);
        lv_obj_set_height(uiList_UserBlock[i].bar_speed, 18);
        lv_obj_set_width(uiList_UserBlock[i].bar_speed, lv_pct(100));
        lv_obj_set_align(uiList_UserBlock[i].bar_speed, LV_ALIGN_RIGHT_MID);
        lv_obj_add_flag(uiList_UserBlock[i].bar_speed, LV_OBJ_FLAG_EVENT_BUBBLE);  /// Flags
        lv_obj_clear_flag(uiList_UserBlock[i].bar_speed, LV_OBJ_FLAG_PRESS_LOCK |
                                                             LV_OBJ_FLAG_GESTURE_BUBBLE |
                                                             LV_OBJ_FLAG_SNAPPABLE);  /// Flags

        lv_obj_set_style_radius(uiList_UserBlock[i].bar_speed, 0,
                                LV_PART_INDICATOR | LV_STATE_DEFAULT);

        // uiList_UserBlock[i].bar_total

        uiList_UserBlock[i].bar_total = lv_bar_create(uiList_UserBlock[i].panel);
        lv_bar_set_range(uiList_UserBlock[i].bar_total, 0, 1000);
        lv_bar_set_value(uiList_UserBlock[i].bar_total, 1000, LV_ANIM_OFF);
        lv_obj_set_height(uiList_UserBlock[i].bar_total, 18);
        lv_obj_set_width(uiList_UserBlock[i].bar_total, lv_pct(100));
        lv_obj_set_x(uiList_UserBlock[i].bar_total, 0);
        lv_obj_set_y(uiList_UserBlock[i].bar_total, lv_pct(45));
        lv_obj_set_align(uiList_UserBlock[i].bar_total, LV_ALIGN_RIGHT_MID);
        lv_obj_add_flag(uiList_UserBlock[i].bar_total, LV_OBJ_FLAG_EVENT_BUBBLE);  /// Flags
        lv_obj_clear_flag(uiList_UserBlock[i].bar_total, LV_OBJ_FLAG_PRESS_LOCK |
                                                             LV_OBJ_FLAG_GESTURE_BUBBLE |
                                                             LV_OBJ_FLAG_SNAPPABLE);  /// Flags

        lv_obj_set_style_radius(uiList_UserBlock[i].bar_total, 0,
                                LV_PART_INDICATOR | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_color(uiList_UserBlock[i].bar_total, lv_color_hex(0x2095F6),
                                  LV_PART_INDICATOR | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_opa(uiList_UserBlock[i].bar_total, 255,
                                LV_PART_INDICATOR | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_grad_color(uiList_UserBlock[i].bar_total, lv_color_hex(0xFF0000),
                                       LV_PART_INDICATOR | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_main_stop(uiList_UserBlock[i].bar_total, 150,
                                      LV_PART_INDICATOR | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_grad_stop(uiList_UserBlock[i].bar_total, 255,
                                      LV_PART_INDICATOR | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_grad_dir(uiList_UserBlock[i].bar_total, LV_GRAD_DIR_HOR,
                                     LV_PART_INDICATOR | LV_STATE_DEFAULT);

        // uiList_UserBlock[i].lb_speed
        uiList_UserBlock[i].lb_speed = lv_label_create(uiList_UserBlock[i].bar_speed);

        lv_obj_set_width(uiList_UserBlock[i].lb_speed, LV_SIZE_CONTENT);
        lv_obj_set_height(uiList_UserBlock[i].lb_speed, LV_SIZE_CONTENT);

        lv_obj_set_x(uiList_UserBlock[i].lb_speed, -5);
        lv_obj_set_y(uiList_UserBlock[i].lb_speed, lv_pct(0));

        lv_obj_set_align(uiList_UserBlock[i].lb_speed, LV_ALIGN_RIGHT_MID);

        lv_obj_clear_flag(uiList_UserBlock[i].lb_speed,
                          LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                              LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                              LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                              LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);

        lv_obj_set_style_text_color(uiList_UserBlock[i].lb_speed, lv_color_hex(0x06345B),
                                    LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(uiList_UserBlock[i].lb_speed, 255,
                                  LV_PART_MAIN | LV_STATE_DEFAULT);

        // uiList_UserBlock[i].lb_total

        uiList_UserBlock[i].lb_total = lv_label_create(uiList_UserBlock[i].bar_total);

        lv_obj_set_width(uiList_UserBlock[i].lb_total, LV_SIZE_CONTENT);
        lv_obj_set_height(uiList_UserBlock[i].lb_total, LV_SIZE_CONTENT);

        lv_obj_set_x(uiList_UserBlock[i].lb_total, -5);
        lv_obj_set_y(uiList_UserBlock[i].lb_total, lv_pct(0));

        lv_obj_set_align(uiList_UserBlock[i].lb_total, LV_ALIGN_RIGHT_MID);

        lv_obj_clear_flag(uiList_UserBlock[i].lb_total,
                          LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                              LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                              LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                              LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);

        lv_obj_set_style_text_color(uiList_UserBlock[i].lb_total, lv_color_hex(0x06345B),
                                    LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(uiList_UserBlock[i].lb_total, 255,
                                  LV_PART_MAIN | LV_STATE_DEFAULT);

        // uiList_UserBlock[i].lb_speed_st
        /* 初始化耗水速率标签 */
        uiList_UserBlock[i].lb_speed_st = lv_label_create(uiList_UserBlock[i].bar_speed);

        lv_obj_set_width(uiList_UserBlock[i].lb_speed_st, LV_SIZE_CONTENT);
        lv_obj_set_height(uiList_UserBlock[i].lb_speed_st, LV_SIZE_CONTENT);

        lv_obj_set_x(uiList_UserBlock[i].lb_speed_st, 5);
        lv_obj_set_y(uiList_UserBlock[i].lb_speed_st, lv_pct(0));

        lv_obj_set_align(uiList_UserBlock[i].lb_speed_st, LV_ALIGN_LEFT_MID);

        lv_label_set_text_static(uiList_UserBlock[i].lb_speed_st, lb_text_speed_c);

        lv_obj_clear_flag(uiList_UserBlock[i].lb_speed_st,
                          LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                              LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                              LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                              LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);

        lv_obj_set_style_text_color(uiList_UserBlock[i].lb_speed_st, lv_color_hex(0x06345B),
                                    LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(uiList_UserBlock[i].lb_speed_st, 255,
                                  LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(uiList_UserBlock[i].lb_speed_st, &ui_font_Font1,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);

        // uiList_UserBlock[i].lb_total_st
        /* 初始化‘用水总量’标签 */
        uiList_UserBlock[i].lb_total_st = lv_label_create(uiList_UserBlock[i].bar_total);

        lv_obj_set_width(uiList_UserBlock[i].lb_total_st, LV_SIZE_CONTENT);
        lv_obj_set_height(uiList_UserBlock[i].lb_total_st, LV_SIZE_CONTENT);

        lv_obj_set_x(uiList_UserBlock[i].lb_total_st, 5);
        lv_obj_set_y(uiList_UserBlock[i].lb_total_st, lv_pct(0));

        lv_obj_set_align(uiList_UserBlock[i].lb_total_st, LV_ALIGN_LEFT_MID);

        lv_label_set_text_static(uiList_UserBlock[i].lb_total_st, lb_text_total_c);

        lv_obj_clear_flag(uiList_UserBlock[i].lb_total_st,
                          LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                              LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                              LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                              LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);

        lv_obj_set_style_text_color(uiList_UserBlock[i].lb_total_st, lv_color_hex(0x06345B),
                                    LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(uiList_UserBlock[i].lb_total_st, 255,
                                  LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(uiList_UserBlock[i].lb_total_st, &ui_font_Font1,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);
    }

    // ui_PanelSelectPage

    ui_PanelSelectPage = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_PanelSelectPage, lv_pct(100));
    lv_obj_set_height(ui_PanelSelectPage, lv_pct(100));

    lv_obj_set_x(ui_PanelSelectPage, lv_pct(0));
    lv_obj_set_y(ui_PanelSelectPage, lv_pct(0));

    lv_obj_set_align(ui_PanelSelectPage, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_PanelSelectPage, LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag(ui_PanelSelectPage, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_PanelSelectPage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Slider1 = lv_slider_create(ui_PanelSelectPage);
    lv_slider_set_range(ui_Slider1, 800, 2048);
    lv_slider_set_value(ui_Slider1, 4096, LV_ANIM_OFF);
    if (lv_slider_get_mode(ui_Slider1) == LV_SLIDER_MODE_RANGE)
        lv_slider_set_left_value(ui_Slider1, 0, LV_ANIM_OFF);
    lv_obj_set_height(ui_Slider1, 16);
    lv_obj_set_width(ui_Slider1, lv_pct(90));
    lv_obj_set_x(ui_Slider1, -1);
    lv_obj_set_y(ui_Slider1, lv_pct(-40));
    lv_obj_set_align(ui_Slider1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Slider1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                                      LV_OBJ_FLAG_GESTURE_BUBBLE |
                                      LV_OBJ_FLAG_SNAPPABLE);  /// Flags

    // ui_RollerSelectPage

    ui_RollerSelectPage = lv_roller_create(ui_PanelSelectPage);
    lv_roller_set_options(ui_RollerSelectPage,
                          "0\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n11\n12\n13\n14\n15",
                          LV_ROLLER_MODE_INFINITE);
    lv_obj_set_width(ui_RollerSelectPage, lv_pct(100));
    lv_obj_set_height(ui_RollerSelectPage, lv_pct(60));
    lv_obj_set_x(ui_RollerSelectPage, lv_pct(0));
    lv_obj_set_y(ui_RollerSelectPage, lv_pct(17));
    lv_obj_set_align(ui_RollerSelectPage, LV_ALIGN_TOP_MID);

    // ui_ButtonSelectPageCancel

    ui_ButtonSelectPageCancel = lv_btn_create(ui_PanelSelectPage);

    lv_obj_set_width(ui_ButtonSelectPageCancel, lv_pct(30));
    lv_obj_set_height(ui_ButtonSelectPageCancel, lv_pct(10));

    lv_obj_set_x(ui_ButtonSelectPageCancel, lv_pct(-30));
    lv_obj_set_y(ui_ButtonSelectPageCancel, lv_pct(45));

    lv_obj_set_align(ui_ButtonSelectPageCancel, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_ButtonSelectPageCancel, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_ButtonSelectPageCancel, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Label2

    ui_Label2 = lv_label_create(ui_ButtonSelectPageCancel);

    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, 0);

    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);

    lv_label_set_text_static(ui_Label2, lb_text_Cancel_c);

    // ui_ButtonSelectPageSure

    ui_ButtonSelectPageSure = lv_btn_create(ui_PanelSelectPage);

    lv_obj_set_width(ui_ButtonSelectPageSure, lv_pct(30));
    lv_obj_set_height(ui_ButtonSelectPageSure, lv_pct(10));

    lv_obj_set_x(ui_ButtonSelectPageSure, lv_pct(30));
    lv_obj_set_y(ui_ButtonSelectPageSure, lv_pct(45));

    lv_obj_set_align(ui_ButtonSelectPageSure, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_ButtonSelectPageSure, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_ButtonSelectPageSure, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Label1

    ui_Label1 = lv_label_create(ui_ButtonSelectPageSure);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, 0);

    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);

    lv_label_set_text_static(ui_Label1, lb_text_Select_c);

    // ui_Panel1

    ui_Panel1 = lv_obj_create(ui_Screen1);

    lv_obj_set_height(ui_Panel1, 20);
    lv_obj_set_width(ui_Panel1, lv_pct(100));

    lv_obj_set_x(ui_Panel1, 0);
    lv_obj_set_y(ui_Panel1, 0);

    lv_obj_set_align(ui_Panel1, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_LabelPage

    ui_LabelPage = lv_label_create(ui_Panel1);

    lv_obj_set_width(ui_LabelPage, lv_pct(30));
    lv_obj_set_height(ui_LabelPage, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_LabelPage, 0);
    lv_obj_set_y(ui_LabelPage, 0);

    lv_obj_set_align(ui_LabelPage, LV_ALIGN_CENTER);

    lv_label_set_text(ui_LabelPage, "0/16");

    lv_obj_add_flag(ui_LabelPage, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_clear_flag(ui_LabelPage, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                                        LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                                        LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                                        LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);

    lv_obj_set_scrollbar_mode(ui_LabelPage, LV_SCROLLBAR_MODE_OFF);

    lv_obj_set_style_text_align(ui_LabelPage, LV_TEXT_ALIGN_CENTER,
                                LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_LabelMore

    ui_LabelMore = lv_label_create(ui_Panel1);

    lv_obj_set_width(ui_LabelMore, lv_pct(30));
    lv_obj_set_height(ui_LabelMore, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_LabelMore, lv_pct(40));
    lv_obj_set_y(ui_LabelMore, lv_pct(0));

    lv_obj_set_align(ui_LabelMore, LV_ALIGN_CENTER);

    lv_label_set_text_static(ui_LabelMore, lb_text_More_c);

    lv_obj_add_flag(ui_LabelMore, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_clear_flag(ui_LabelMore, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                                        LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                                        LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                                        LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);

    lv_obj_set_style_text_color(ui_LabelMore, lv_color_hex(0x2095F6),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelMore, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LabelMore, LV_TEXT_ALIGN_CENTER,
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_LabelMore, lv_color_hex(0x003CAC),
                                LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui_LabelMore, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    lv_obj_add_event_cb(ui_Slider1, ui_event_Slider1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RollerSelectPage, ui_event_RollerSelectPage, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonSelectPageCancel, ui_event_ButtonSelectPageCancel, LV_EVENT_ALL,
                        NULL);
    lv_obj_add_event_cb(ui_ButtonSelectPageSure, ui_event_ButtonSelectPageSure, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_LabelPage, ui_event_LabelPage, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_LabelMore, ui_event_LabelMore, LV_EVENT_ALL, NULL);
}

void ui_Screen2_screen_init(void) {
    // ui_Screen2

    ui_Screen2 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Keyboard

    ui_Keyboard = lv_keyboard_create(ui_Screen2);

    lv_keyboard_set_mode(ui_Keyboard, LV_KEYBOARD_MODE_NUMBER);

    lv_obj_set_width(ui_Keyboard, lv_pct(100));
    lv_obj_set_height(ui_Keyboard, lv_pct(40));

    lv_obj_set_x(ui_Keyboard, lv_pct(0));
    lv_obj_set_y(ui_Keyboard, lv_pct(0));

    lv_obj_set_align(ui_Keyboard, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Keyboard, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE);

    lv_obj_add_event_cb(ui_Keyboard, ui_event_Keyboard, LV_EVENT_ALL, NULL);

    // ui_LabelReturn

    ui_LabelReturn = lv_label_create(ui_Screen2);

    lv_obj_set_height(ui_LabelReturn, 30);
    lv_obj_set_width(ui_LabelReturn, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_LabelReturn, 3);
    lv_obj_set_y(ui_LabelReturn, 3);

    lv_label_set_text_static(ui_LabelReturn, lb_text_Return_c);

    lv_obj_add_flag(ui_LabelReturn, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_clear_flag(ui_LabelReturn, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                                          LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                                          LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                                          LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);

    lv_obj_add_event_cb(ui_LabelReturn, ui_event_LabelReturn, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_color(ui_LabelReturn, lv_color_hex(0x2095F6),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelReturn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_LabelReturn, lv_color_hex(0x003CAC),
                                LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui_LabelReturn, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_TextAreaUserName

    ui_TextAreaUserName = lv_textarea_create(ui_Screen2);

    lv_obj_set_width(ui_TextAreaUserName, lv_pct(56));
    lv_obj_set_height(ui_TextAreaUserName, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_TextAreaUserName, lv_pct(10));
    lv_obj_set_y(ui_TextAreaUserName, lv_pct(-30));

    lv_obj_set_align(ui_TextAreaUserName, LV_ALIGN_CENTER);

    lv_textarea_set_accepted_chars(ui_TextAreaUserName, NULL);

    lv_textarea_set_max_length(ui_TextAreaUserName, 16);
    lv_textarea_set_text(ui_TextAreaUserName, "");
    lv_textarea_set_placeholder_text(ui_TextAreaUserName, "");
    lv_textarea_set_one_line(ui_TextAreaUserName, true);

    lv_obj_clear_flag(ui_TextAreaUserName,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                          LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                          LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);

    lv_obj_add_event_cb(ui_TextAreaUserName, ui_event_TextAreaUserName, LV_EVENT_ALL, NULL);
    lv_obj_set_style_outline_color(ui_TextAreaUserName, lv_color_hex(0x2095F6),
                                   LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_outline_opa(ui_TextAreaUserName, 255, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_outline_width(ui_TextAreaUserName, 1, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_outline_pad(ui_TextAreaUserName, 1, LV_PART_MAIN | LV_STATE_FOCUSED);

    // ui_LabelUserName

    ui_LabelUserName = lv_label_create(ui_Screen2);

    lv_obj_set_width(ui_LabelUserName, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_LabelUserName, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_LabelUserName, lv_pct(-35));
    lv_obj_set_y(ui_LabelUserName, lv_pct(-30));

    lv_obj_set_align(ui_LabelUserName, LV_ALIGN_CENTER);

    lv_label_set_text_static(ui_LabelUserName, lb_text_UserName_c);

    lv_obj_set_style_text_font(ui_LabelUserName, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_LabelRest

    ui_LabelRest = lv_label_create(ui_Screen2);

    lv_obj_set_width(ui_LabelRest, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_LabelRest, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_LabelRest, lv_pct(-35));
    lv_obj_set_y(ui_LabelRest, lv_pct(-20));

    lv_obj_set_align(ui_LabelRest, LV_ALIGN_CENTER);

    lv_label_set_text_static(ui_LabelRest, lb_text_RestWater_c);

    lv_obj_set_style_text_font(ui_LabelRest, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_TextAreaRest

    ui_TextAreaRest = lv_textarea_create(ui_Screen2);

    lv_obj_set_width(ui_TextAreaRest, lv_pct(56));
    lv_obj_set_height(ui_TextAreaRest, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_TextAreaRest, lv_pct(10));
    lv_obj_set_y(ui_TextAreaRest, lv_pct(-20));

    lv_obj_set_align(ui_TextAreaRest, LV_ALIGN_CENTER);

    lv_textarea_set_accepted_chars(ui_TextAreaRest, ".0123456789");

    lv_textarea_set_text(ui_TextAreaRest, "");
    lv_textarea_set_placeholder_text(ui_TextAreaRest, "");
    lv_textarea_set_one_line(ui_TextAreaRest, true);

    lv_obj_clear_flag(ui_TextAreaRest, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_GESTURE_BUBBLE |
                                           LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE |
                                           LV_OBJ_FLAG_SCROLL_ELASTIC |
                                           LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);

    lv_obj_set_scrollbar_mode(ui_TextAreaRest, LV_SCROLLBAR_MODE_OFF);

    lv_obj_add_event_cb(ui_TextAreaRest, ui_event_TextAreaRest, LV_EVENT_ALL, NULL);
    lv_obj_set_style_outline_color(ui_TextAreaRest, lv_color_hex(0x2095F6),
                                   LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_outline_opa(ui_TextAreaRest, 255, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_outline_width(ui_TextAreaRest, 1, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_outline_pad(ui_TextAreaRest, 1, LV_PART_MAIN | LV_STATE_FOCUSED);

    // ui_Label3

    ui_Label3 = lv_label_create(ui_Screen2);

    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label3, lv_pct(-35));
    lv_obj_set_y(ui_Label3, lv_pct(-10));

    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);

    lv_label_set_text_static(ui_Label3, lb_text_PhoneNumber_c);

    lv_obj_set_style_text_font(ui_Label3, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_TextAreaNumber

    ui_TextAreaNumber = lv_textarea_create(ui_Screen2);

    lv_obj_set_width(ui_TextAreaNumber, lv_pct(56));
    lv_obj_set_height(ui_TextAreaNumber, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_TextAreaNumber, lv_pct(10));
    lv_obj_set_y(ui_TextAreaNumber, lv_pct(-10));

    lv_obj_set_align(ui_TextAreaNumber, LV_ALIGN_CENTER);

    lv_textarea_set_accepted_chars(ui_TextAreaNumber, "0123456789");

    lv_textarea_set_max_length(ui_TextAreaNumber, 11);
    lv_textarea_set_text(ui_TextAreaNumber, "");
    lv_textarea_set_placeholder_text(ui_TextAreaNumber, "");
    lv_textarea_set_one_line(ui_TextAreaNumber, true);

    lv_obj_clear_flag(ui_TextAreaNumber,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                          LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                          LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);

    lv_obj_set_scrollbar_mode(ui_TextAreaNumber, LV_SCROLLBAR_MODE_OFF);

    lv_obj_add_event_cb(ui_TextAreaNumber, ui_event_TextAreaNumber, LV_EVENT_ALL, NULL);
    lv_obj_set_style_outline_color(ui_TextAreaNumber, lv_color_hex(0x2095F6),
                                   LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_outline_opa(ui_TextAreaNumber, 255, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_outline_width(ui_TextAreaNumber, 1, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_outline_pad(ui_TextAreaNumber, 1, LV_PART_MAIN | LV_STATE_FOCUSED);

    // ui_ButtonClearHis

    ui_ButtonClearHis = lv_btn_create(ui_Screen2);

    lv_obj_set_width(ui_ButtonClearHis, 101);
    lv_obj_set_height(ui_ButtonClearHis, 44);

    lv_obj_set_x(ui_ButtonClearHis, 104);
    lv_obj_set_y(ui_ButtonClearHis, -214);

    lv_obj_set_align(ui_ButtonClearHis, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_ButtonClearHis, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_ButtonClearHis, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_ButtonClearHis, ui_event_ButtonClearHis, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_ButtonClearHis, lv_color_hex(0xFF0000),
                              LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonClearHis, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label4

    ui_Label4 = lv_label_create(ui_ButtonClearHis);

    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label4, 0);
    lv_obj_set_y(ui_Label4, 0);

    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);

    lv_label_set_text_static(ui_Label4, lb_text_ClearHis_c);

    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &ui_font_Font1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // POST CALLS
    // lv_keyboard_set_textarea(ui_Keyboard, ui_TextAreaUserName);
}

void ui_init(void) {
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme =
        lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE),
                              lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
