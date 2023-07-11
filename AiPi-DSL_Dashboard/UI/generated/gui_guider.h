/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "guider_fonts.h"

	typedef struct
	{
		lv_obj_t* src_home;
		bool src_home_del;
		lv_obj_t* src_home_cont_img;
		lv_obj_t* src_home_img_13;
		lv_obj_t* src_home_img_7;
		lv_obj_t* src_home_img_6;
		lv_obj_t* src_home_img_5;
		lv_obj_t* src_home_img_4;
		lv_obj_t* src_home_img_3;
		lv_obj_t* src_home_img_2;
		lv_obj_t* src_home_img_12;
		lv_obj_t* src_home_img_8;
		lv_obj_t* src_home_img_14;
		lv_obj_t* src_home_img_11;
		lv_obj_t* src_home_img_10;
		lv_obj_t* src_home_img_9;
		lv_obj_t* src_home_img_20;
		lv_obj_t* src_home_img_19;
		lv_obj_t* src_home_img_18;
		lv_obj_t* src_home_img_15;
		lv_obj_t* src_home_img_16;
		lv_obj_t* src_home_img_17;
		lv_obj_t* src_home_img_21;
		lv_obj_t* src_home_label_5;
		lv_obj_t* src_home_label_6;
		lv_obj_t* src_home_tabview_1;
		lv_obj_t* src_home_tabview_1_Home;
		lv_obj_t* src_home_tileview;
		lv_obj_t* home;
		lv_obj_t* src_home_img_1;
		lv_obj_t* src_home_label_temp;
		lv_obj_t* src_home_digital_clock_1;
		lv_obj_t* src_home_img_wifi;
		lv_obj_t* src_home_label_dizhi;
		lv_obj_t* src_home_label_waether;
		lv_obj_t* src_home_cont_1;
		lv_obj_t* src_home_img_day1;
		lv_obj_t* src_home_label_day2;
		lv_obj_t* src_home_label_day3;
		lv_obj_t* src_home_label_day1;
		lv_obj_t* src_home_img_day2;
		lv_obj_t* src_home_img_day3;
		lv_obj_t* src_home_day1_temp;
		lv_obj_t* src_home_day2_temp;
		lv_obj_t* src_home_day3_temp;
		lv_obj_t* src_home_cont_2;
		lv_obj_t* src_home_label_wday;
		lv_obj_t* src_home_label_date;
		lv_obj_t* config;
		lv_obj_t* src_home_ta_1;
		lv_obj_t* src_home_label_ip;
		lv_obj_t* src_home_ddlist_1;
		lv_obj_t* src_home_label_ssid;
		lv_obj_t* src_home_label_pass;
		lv_obj_t* src_home_btn_connect;
		lv_obj_t* src_home_btn_connect_label;
		lv_obj_t* src_home_tabview_1_Shortcuts;
		lv_obj_t* src_home_label_BLEConter;
		lv_obj_t* src_home_img_BLE;
		lv_obj_t* src_home_cont_BLE_TEXT;
		lv_obj_t* src_home_label_4;
		lv_obj_t* src_home_label_2;
		lv_obj_t* src_home_label_teas;
		lv_obj_t* src_home_cont_dis;
		lv_obj_t* src_home_imgbtn_1;
		lv_obj_t* src_home_imgbtn_1_label;
		lv_obj_t* src_home_imgbtn_2;
		lv_obj_t* src_home_imgbtn_2_label;
		lv_obj_t* src_home_imgbtn_3;
		lv_obj_t* src_home_imgbtn_3_label;
		lv_obj_t* src_home_imgbtn_4;
		lv_obj_t* src_home_imgbtn_4_label;
		lv_obj_t* src_home_imgbtn_5;
		lv_obj_t* src_home_imgbtn_5_label;
		lv_obj_t* src_home_imgbtn_6;
		lv_obj_t* src_home_imgbtn_6_label;
		lv_obj_t* src_home_label_7;
		lv_obj_t* src_home_label_8;
		lv_obj_t* src_home_label_9;
		lv_obj_t* src_home_label_10;
		lv_obj_t* src_home_label_11;
		lv_obj_t* src_home_label_12;
		lv_obj_t* src_home_cont_music_ctrl;
		lv_obj_t* src_home_imgbtn_stop;
		lv_obj_t* src_home_imgbtn_stop_label;
		lv_obj_t* src_home_imgbtn_7;
		lv_obj_t* src_home_imgbtn_7_label;
		lv_obj_t* src_home_imgbtn_satrt;
		lv_obj_t* src_home_imgbtn_satrt_label;
		lv_obj_t* src_home_imgbtn_8;
		lv_obj_t* src_home_imgbtn_8_label;
		lv_obj_t* src_home_slider_voicse;
		lv_obj_t* src_home_imgbtn_voice;
		lv_obj_t* src_home_imgbtn_voice_label;
		lv_obj_t* src_home_imgbtn_novoice;
		lv_obj_t* src_home_imgbtn_novoice_label;
		lv_obj_t* src_home_tabview_1_SmartCtrl;
		lv_obj_t* src_home_imgbtn_openL;
		lv_obj_t* src_home_imgbtn_openL_label;
		lv_obj_t* src_home_imgbtn_confiL;
		lv_obj_t* src_home_imgbtn_confiL_label;
		lv_obj_t* src_home_label_18;
		lv_obj_t* src_home_imgbtn_closeL;
		lv_obj_t* src_home_imgbtn_closeL_label;
		lv_obj_t* src_home_label_14;
		lv_obj_t* src_home_imgbtn_user;
		lv_obj_t* src_home_imgbtn_user_label;
		lv_obj_t* src_home_cont_3;
		lv_obj_t* src_home_cont_4;
		lv_obj_t* src_home_imgbtn_10;
		lv_obj_t* src_home_imgbtn_10_label;
		lv_obj_t* src_home_label_13;
		lv_obj_t* src_home_label_host;
		lv_obj_t* src_home_label_username;
		lv_obj_t* src_home_label_port;
		lv_obj_t* src_home_label_passworld;
		lv_obj_t* src_home_ta_mqHost;
		lv_obj_t* src_home_ta_mqPort;
		lv_obj_t* src_home_ta_mqUsername;
		lv_obj_t* src_home_ta_mqtt_pass;
		lv_obj_t* src_home_btn_connect_mqtt;
		lv_obj_t* src_home_btn_connect_mqtt_label;
		lv_obj_t* src_home_cont_6;
		lv_obj_t* src_home_label_15;
		lv_obj_t* src_home_label_16;
		lv_obj_t* src_home_ta_topic;
		lv_obj_t* src_home_ta_msg_close;
		lv_obj_t* src_home_btn_topicOK;
		lv_obj_t* src_home_btn_topicOK_label;
		lv_obj_t* src_home_label_17;
		lv_obj_t* src_home_label_19;
		lv_obj_t* src_home_ta_msg_open;
		lv_obj_t* src_home_cont_5;
		lv_obj_t* src_home_img_loding;
		char ssid[32];
		char password[64];
		bool wifi_stayus;
		bool screen_type;
	}lv_ui;


	extern int src_home_digital_clock_1_hour_value;
	extern int src_home_digital_clock_1_min_value;
	extern int src_home_digital_clock_1_sec_value;
	extern int src_home_digital_date_yesr_value;
	extern int src_home_digital_date_mont_value;
	extern int src_home_digital_date_day_value;
	extern int src_home_digital_date_wday_value;
	void ui_init_style(lv_style_t* style);
	void init_scr_del_flag(lv_ui* ui);
	void setup_ui(lv_ui* ui);
	extern lv_ui guider_ui;
	void setup_scr_src_home(lv_ui* ui);
	LV_IMG_DECLARE(_novoiceclose_alpha_20x20);
	LV_IMG_DECLARE(_jlcclose_alpha_45x45);
	LV_IMG_DECLARE(_VSclose_alpha_45x45);
	LV_IMG_DECLARE(_tianqiqing_i_leiyu_alpha_20x20);
	LV_IMG_DECLARE(_baiduopen_alpha_45x45);
	LV_IMG_DECLARE(_loding_alpha_100x100);
	LV_IMG_DECLARE(_tianqiduoyun_alpha_100x100);
	LV_IMG_DECLARE(_tianqiyeleiyu_alpha_100x100);
	LV_IMG_DECLARE(_tianqixiaoyu_alpha_100x100);
	LV_IMG_DECLARE(_tianqidabaoyu_alpha_100x100);
	LV_IMG_DECLARE(_windopen_alpha_45x45);
	LV_IMG_DECLARE(_staopclose_alpha_30x30);
	LV_IMG_DECLARE(_gooleopen_alpha_45x45);
	LV_IMG_DECLARE(_bofangopen_alpha_30x30);
	LV_IMG_DECLARE(_userclose_alpha_20x20);
	LV_IMG_DECLARE(_tianqidayu_alpha_100x100);
	LV_IMG_DECLARE(_tianqiqing_i_xiaoyuzhuanqing_alpha_20x20);
	LV_IMG_DECLARE(_tianqiqing_i_duoyun_alpha_20x20);
	LV_IMG_DECLARE(_diaodeng_alpha_80x110);
	LV_IMG_DECLARE(_closeopen1_alpha_20x20);
	LV_IMG_DECLARE(_tianqiqing_alpha_100x100);
	LV_IMG_DECLARE(_tianqiwumaiyintian_alpha_100x100);
	LV_IMG_DECLARE(_closeopen_alpha_20x20);
	LV_IMG_DECLARE(_tianqizhongyu_alpha_100x100);
	LV_IMG_DECLARE(_tianqiwumai_alpha_100x100);
	LV_IMG_DECLARE(_dindclose_alpha_45x45);
	LV_IMG_DECLARE(_no_internet_alpha_20x20);
	LV_IMG_DECLARE(_nextclose_alpha_20x20);
	LV_IMG_DECLARE(_VSopen_alpha_45x45);
	LV_IMG_DECLARE(_OBScloes_alpha_45x45);
	LV_IMG_DECLARE(_tianqiduoyunxiaoyuzhuanqing_alpha_100x100);
	LV_IMG_DECLARE(_tianqiqing_i_baoyu_alpha_20x20);
	LV_IMG_DECLARE(_tianqiqing_i_alpha_20x20);
	LV_IMG_DECLARE(_OBSopen_alpha_45x45);
	LV_IMG_DECLARE(_voice_alpha_20x20);
	LV_IMG_DECLARE(_tianqiqing_i_yintian_alpha_20x20);
	LV_IMG_DECLARE(_jlcopen_alpha_45x45);
	LV_IMG_DECLARE(_next0cloes_alpha_20x20);
	LV_IMG_DECLARE(_BLE_ok_alpha_20x20);
	LV_IMG_DECLARE(_diaodengopen_alpha_80x110);
	LV_IMG_DECLARE(_gooleclose_alpha_45x45);
	LV_IMG_DECLARE(_tianqiqingyeduoyun_alpha_100x100);
	LV_IMG_DECLARE(_staopopen_alpha_30x30);
	LV_IMG_DECLARE(_tianqiye_alpha_100x100);
	LV_IMG_DECLARE(_configset_alpha_25x25);
	LV_IMG_DECLARE(_configL_alpha_25x25);
	LV_IMG_DECLARE(_tianqiqing_i_xiaoyu_alpha_20x20);
	LV_IMG_DECLARE(_novoiceopen_alpha_20x20);
	LV_IMG_DECLARE(_useropen_alpha_20x20);
	LV_IMG_DECLARE(_nextopen_alpha_20x20);
	LV_IMG_DECLARE(_diaodengopen_s_alpha_80x110);
	LV_IMG_DECLARE(_tianqiqing_i_zhongyu_alpha_20x20);
	LV_IMG_DECLARE(_baiduclose_alpha_45x45);
	LV_IMG_DECLARE(_voiceclose_alpha_20x20);
	LV_IMG_DECLARE(_bofangclose_alpha_30x30);
	LV_IMG_DECLARE(_BLE_no_alpha_20x20);
	LV_IMG_DECLARE(_next0open_alpha_20x20);
	LV_IMG_DECLARE(_tianqiqing_i_dayu_alpha_20x20);
	LV_IMG_DECLARE(_diaodeng_s_alpha_80x110);

#ifdef __cplusplus
}
#endif
#endif