[Metadata]
 Name                                     = SimpleCred
 Version                                  = 1.0.0
 Author                                   = deflore08 (deflore08@gmail.com) | https://www.deviantart.com/deflore08
 License                                  = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                              = Little tool for easy access to most usable credentials

[Variables]

 DEFAULT_Pad_Top                          = 0

 DEFAULT_Last_Zpos                        = 
 DEFAULT_Skin_Zpos                        = 2

; --- DIMENSIONS

 DEFAULT_Button_Height                    =40
 DEFAULT_Button_Text_Pad                  =(#Button_Height#/2 - 6)
 DEFAULT_Button_Text_Pad_Input            =(#Button_Height#/2 - #Button_Height#)

; --- COLORS

; - 160,255,190

 DEFAULT_Opacity_Main                     = 255
 DEFAULT_Color_RGB                        = 160,255,240
 DEFAULT_Color_Main                       = #Color_RGB#, #Opacity_Main#
 DEFAULT_Shapes_Color                     = 0,0,0,1
 DEFAULT_Shapes_Color_Raw                 = 15,15,15

; --- FONTS

 DEFAULT_Font_Main_Face                   = QORE
 DEFAULT_Font_Main_Size                   = 10
 DEFAULT_Font_Main_Color                  = #Color_Main#

 DEFAULT_Font_Secondary_Face              =
 DEFAULT_Font_Secondary_Size              =
 DEFAULT_Font_Secondary_Color             = 

; --- INPUT STATES (DO NOT CHANGE)

 DEFAULT_Button_Input_BG_1_State          = 1
 DEFAULT_Button_Input_BG_2_State          = 1
 DEFAULT_Button_Input_BG_2_State          = 1

; --- Var to open this fucking file

 DEFAULT_Set_Cred                         = #@#config\creds.inc

; --- CREDENTIALS

 DEFAULT_Button_1_Name                    = -1-
 DEFAULT_Button_2_Name                    = -2-
 DEFAULT_Button_3_Name                    = -3-

 DEFAULT_Login_1                          = Login_1
 DEFAULT_Password_1                       = Password_1

 DEFAULT_Login_2                          = Login_2
 DEFAULT_Password_2                       = Password_3

 DEFAULT_Login_3                          = Login_3
 DEFAULT_Password_3                       = Password_3