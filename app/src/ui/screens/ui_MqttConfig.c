// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: Thermostat

#include "../ui.h"

void ui_MqttConfig_screen_init(void)
{
ui_MqttConfig = lv_obj_create(NULL);
lv_obj_clear_flag( ui_MqttConfig, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM );    /// Flags
lv_obj_set_scrollbar_mode(ui_MqttConfig, LV_SCROLLBAR_MODE_OFF);
lv_obj_set_style_bg_color(ui_MqttConfig, lv_color_hex(0xB787E2), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_MqttConfig, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_MqttConfig, lv_color_hex(0xBE5757), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_grad_dir(ui_MqttConfig, LV_GRAD_DIR_HOR, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_MqttKeyboard = lv_keyboard_create(ui_MqttConfig);
lv_obj_set_width( ui_MqttKeyboard, 320);
lv_obj_set_height( ui_MqttKeyboard, 105);
lv_obj_set_x( ui_MqttKeyboard, 0 );
lv_obj_set_y( ui_MqttKeyboard, 67 );
lv_obj_set_align( ui_MqttKeyboard, LV_ALIGN_LEFT_MID );
lv_obj_set_style_bg_color(ui_MqttKeyboard, lv_color_hex(0xBD6994), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_MqttKeyboard, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_MqttHostname = lv_textarea_create(ui_MqttConfig);
lv_obj_set_width( ui_MqttHostname, 205);
lv_obj_set_height( ui_MqttHostname, LV_SIZE_CONTENT);   /// 20
lv_obj_set_x( ui_MqttHostname, -50 );
lv_obj_set_y( ui_MqttHostname, -97 );
lv_obj_set_align( ui_MqttHostname, LV_ALIGN_CENTER );
lv_textarea_set_placeholder_text(ui_MqttHostname,"MQTT Broker");
lv_textarea_set_one_line(ui_MqttHostname,true);
lv_obj_set_style_text_font(ui_MqttHostname, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);



ui_MqttUsername = lv_textarea_create(ui_MqttConfig);
lv_obj_set_width( ui_MqttUsername, 205);
lv_obj_set_height( ui_MqttUsername, LV_SIZE_CONTENT);   /// 33
lv_obj_set_x( ui_MqttUsername, -50 );
lv_obj_set_y( ui_MqttUsername, -52 );
lv_obj_set_align( ui_MqttUsername, LV_ALIGN_CENTER );
lv_textarea_set_placeholder_text(ui_MqttUsername,"MQTT Username");
lv_textarea_set_one_line(ui_MqttUsername,true);
lv_obj_set_style_text_font(ui_MqttUsername, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);



ui_MqttPassword = lv_textarea_create(ui_MqttConfig);
lv_obj_set_width( ui_MqttPassword, 205);
lv_obj_set_height( ui_MqttPassword, LV_SIZE_CONTENT);   /// 33
lv_obj_set_x( ui_MqttPassword, -50 );
lv_obj_set_y( ui_MqttPassword, -7 );
lv_obj_set_align( ui_MqttPassword, LV_ALIGN_CENTER );
lv_textarea_set_placeholder_text(ui_MqttPassword,"MQTT Password");
lv_textarea_set_one_line(ui_MqttPassword,true);
lv_obj_set_style_text_font(ui_MqttPassword, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);



ui_MqttSaveBtn = lv_btn_create(ui_MqttConfig);
lv_obj_set_width( ui_MqttSaveBtn, 100);
lv_obj_set_height( ui_MqttSaveBtn, 36);
lv_obj_set_x( ui_MqttSaveBtn, -1 );
lv_obj_set_y( ui_MqttSaveBtn, -56 );
lv_obj_set_align( ui_MqttSaveBtn, LV_ALIGN_RIGHT_MID );
lv_obj_add_flag( ui_MqttSaveBtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_MqttSaveBtn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_MqttSaveBtn, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_MqttSaveBtn, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_MqttSaveBtn, lv_color_hex(0x2620F6), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_grad_dir(ui_MqttSaveBtn, LV_GRAD_DIR_VER, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_MqttSaveLabel = lv_label_create(ui_MqttConfig);
lv_obj_set_width( ui_MqttSaveLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_MqttSaveLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_MqttSaveLabel, 109 );
lv_obj_set_y( ui_MqttSaveLabel, -56 );
lv_obj_set_align( ui_MqttSaveLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_MqttSaveLabel,"Save");
lv_obj_set_style_text_color(ui_MqttSaveLabel, lv_color_hex(0xFFE300), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_MqttSaveLabel, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_MqttCancelBtn = lv_btn_create(ui_MqttConfig);
lv_obj_set_width( ui_MqttCancelBtn, 100);
lv_obj_set_height( ui_MqttCancelBtn, 36);
lv_obj_set_x( ui_MqttCancelBtn, -1 );
lv_obj_set_y( ui_MqttCancelBtn, -96 );
lv_obj_set_align( ui_MqttCancelBtn, LV_ALIGN_RIGHT_MID );
lv_obj_add_flag( ui_MqttCancelBtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_MqttCancelBtn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_MqttCancelBtn, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_MqttCancelBtn, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_MqttCancelBtn, lv_color_hex(0x2620F6), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_grad_dir(ui_MqttCancelBtn, LV_GRAD_DIR_VER, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_MqttCancelLabel = lv_label_create(ui_MqttConfig);
lv_obj_set_width( ui_MqttCancelLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_MqttCancelLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_MqttCancelLabel, 109 );
lv_obj_set_y( ui_MqttCancelLabel, -96 );
lv_obj_set_align( ui_MqttCancelLabel, LV_ALIGN_CENTER );
lv_label_set_text(ui_MqttCancelLabel,"Cancel");
lv_obj_set_style_text_color(ui_MqttCancelLabel, lv_color_hex(0xFFE300), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_MqttCancelLabel, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_keyboard_set_textarea(ui_MqttKeyboard,ui_MqttHostname);
lv_obj_add_event_cb(ui_MqttHostname, ui_event_MqttHostname, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_MqttUsername, ui_event_MqttUsername, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_MqttPassword, ui_event_MqttPassword, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_MqttSaveBtn, ui_event_MqttSaveBtn, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_MqttCancelBtn, ui_event_MqttCancelBtn, LV_EVENT_ALL, NULL);

}
