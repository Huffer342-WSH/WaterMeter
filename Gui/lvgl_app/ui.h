// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if __has_include("lvgl.h")
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

typedef struct {
    lv_obj_t* panel;
    lv_obj_t* name;
    lv_obj_t* bar_speed;
    lv_obj_t* bar_total;
    lv_obj_t* lb_speed_st;
    lv_obj_t* lb_total_st;
    lv_obj_t* lb_speed;
    lv_obj_t* lb_total;
    uint8_t wmIndex;
} UserBlock_t;

extern lv_obj_t* ui_Screen1;
extern lv_obj_t* ui_PanelUserInfo;
void ui_event_PanelUser(lv_event_t* e);
extern UserBlock_t uiList_UserBlock[4];

extern lv_obj_t* ui_PanelSelectPage;
void ui_event_Slider1(lv_event_t* e);
extern lv_obj_t* ui_Slider1;
void ui_event_RollerSelectPage(lv_event_t* e);
extern lv_obj_t* ui_RollerSelectPage;
void ui_event_ButtonSelectPageCancel(lv_event_t* e);
extern lv_obj_t* ui_ButtonSelectPageCancel;
extern lv_obj_t* ui_Label2;
void ui_event_ButtonSelectPageSure(lv_event_t* e);
extern lv_obj_t* ui_ButtonSelectPageSure;
extern lv_obj_t* ui_Label1;
extern lv_obj_t* ui_Panel1;
void ui_event_LabelPage(lv_event_t* e);
extern lv_obj_t* ui_LabelPage;
void ui_event_LabelMore(lv_event_t* e);
extern lv_obj_t* ui_LabelMore;
extern lv_obj_t* ui_Screen2;
void ui_event_Keyboard(lv_event_t* e);
extern lv_obj_t* ui_Keyboard;
void ui_event_LabelReturn(lv_event_t* e);
extern lv_obj_t* ui_LabelReturn;
void ui_event_TextAreaUserName(lv_event_t* e);
extern lv_obj_t* ui_TextAreaUserName;
extern lv_obj_t* ui_LabelUserName;
extern lv_obj_t* ui_LabelRest;
void ui_event_TextAreaRest(lv_event_t* e);
extern lv_obj_t* ui_TextAreaRest;
extern lv_obj_t* ui_Label3;
void ui_event_TextAreaNumber(lv_event_t* e);
extern lv_obj_t* ui_TextAreaNumber;
void ui_event_ButtonClearHis(lv_event_t* e);
extern lv_obj_t* ui_ButtonClearHis;
extern lv_obj_t* ui_Label4;

void SetSelectedUser(lv_event_t* e);
void SetBrightness(lv_event_t* e);
void SetLablePage(lv_event_t* e);
void LoadPrevPage(lv_event_t* e);
void SetNewBlockList(lv_event_t* e);
void SavePrevPage(lv_event_t* e);
void SetMorePage(lv_event_t* e);
void KeyboardClicked(lv_event_t* e);
void Change_Keyboard_targerTextarea(lv_event_t* e);
void ClearHistory(lv_event_t* e);

void refreshUserBlock(UserBlock_t* ub);
void redirectUserBlock(UserBlock_t* ub, uint8_t wmIndex);

LV_FONT_DECLARE(ui_font_Font1);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
