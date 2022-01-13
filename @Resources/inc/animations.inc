[Metadata]
 Name                             = SimpleCred
 Version                          = 1.0.0
 Author                           = deflore08 (deflore08@gmail.com) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Little tool for easy access to most usable credentials

[Variables]

 Fade_Delay                       = 1

 1_Cred_Opacity                   = 155
 2_Cred_Opacity                   = 155
 3_Cred_Opacity                   = 155

 1_Login_Opacity                  = 155
 1_Password_Opacity               = 155

 2_Login_Opacity                  = 155
 2_Password_Opacity               = 155
 
 3_Login_Opacity                  = 155
 3_Password_Opacity               = 155

 1_Button_Opacity                 = 1
 2_Button_Opacity                 = 1
 3_Button_Opacity                 = 1

 1_Button_Input_BG_Opacity        = 0
 1_Button_Input_BG_Y              = 0
 2_Button_Input_BG_Opacity        = 0
 2_Button_Input_BG_Y              = 0
 3_Button_Input_BG_Opacity        = 0
 3_Button_Input_BG_Y              = 0

; --- HIDE UNNECESSARY BUTTON'S BG
 
 Hide_1_Button                    = [!SetVariable 1_Button_Opacity "(Clamp(#1_Button_Opacity#-15,1,150))"][!SetVariable 1_Button_Input_BG_Opacity "(Clamp(#1_Button_Input_BG_Opacity#-15,0,150))"]
 Hide_2_Button                    = [!SetVariable 2_Button_Opacity "(Clamp(#2_Button_Opacity#-15,1,150))"][!SetVariable 2_Button_Input_BG_Opacity "(Clamp(#2_Button_Input_BG_Opacity#-15,0,150))"]
 Hide_3_Button                    = [!SetVariable 3_Button_Opacity "(Clamp(#3_Button_Opacity#-15,1,150))"][!SetVariable 3_Button_Input_BG_Opacity "(Clamp(#3_Button_Input_BG_Opacity#-15,0,150))"]

 Hide_1_Input                     = [!SetOption text.LOGIN_1 FontColor "#*Color_RGB*#, #*1_Button_Input_BG_Opacity*#"][!SetOption text.PASSWORD_1 FontColor "#*Color_RGB*#, #*1_Button_Input_BG_Opacity*#"][!Update]
 Hide_2_Input                     = [!SetOption text.LOGIN_2 FontColor "#*Color_RGB*#, #*2_Button_Input_BG_Opacity*#"][!SetOption text.PASSWORD_2 FontColor "#*Color_RGB*#, #*2_Button_Input_BG_Opacity*#"][!Update]
 Hide_3_Input                     = [!SetOption text.LOGIN_3 FontColor "#*Color_RGB*#, #*3_Button_Input_BG_Opacity*#"][!SetOption text.PASSWORD_3 FontColor "#*Color_RGB*#, #*3_Button_Input_BG_Opacity*#"][!Update]

[animation.1_Cred_Fade]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
 ActionList1                      = Repeat Fade_In, #Fade_Delay#, 10
 Fade_In                          = [!SetVariable 1_Cred_Opacity "(Clamp(#1_Cred_Opacity#+10,155,255))"][!Update]
 ActionList2                      = Repeat Fade_Out, #Fade_Delay#, 10
 Fade_Out                         = [!SetVariable 1_Cred_Opacity "(Clamp(#1_Cred_Opacity#-10,155,255))"][!Update]

[animation.2_Cred_Fade]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
 ActionList1                      = Repeat Fade_In, #Fade_Delay#, 10
 Fade_In                          = [!SetVariable 2_Cred_Opacity "(Clamp(#2_Cred_Opacity#+10,155,255))"][!Update]
 ActionList2                      = Repeat Fade_Out, #Fade_Delay#, 10
 Fade_Out                         = [!SetVariable 2_Cred_Opacity "(Clamp(#2_Cred_Opacity#-10,155,255))"][!Update]

[animation.3_Cred_Fade]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
 ActionList1                      = Repeat Fade_In, #Fade_Delay#, 10
 Fade_In                          = [!SetVariable 3_Cred_Opacity "(Clamp(#3_Cred_Opacity#+10,155,255))"][!Update]
 ActionList2                      = Repeat Fade_Out, #Fade_Delay#, 10
 Fade_Out                         = [!SetVariable 3_Cred_Opacity "(Clamp(#3_Cred_Opacity#-10,155,255))"][!Update]

[animation.1_Login]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
 ActionList1                      = Repeat Fade_In, #Fade_Delay#, 10
 Fade_In                          = [!SetVariable 1_Login_Opacity "(Clamp(#1_Login_Opacity#+10,155,255))"][!Update]
 ActionList2                      = Repeat Fade_Out, #Fade_Delay#, 10
 Fade_Out                         = [!SetVariable 1_Login_Opacity "(Clamp(#1_Login_Opacity#-10,155,255))"][!Update]

[animation.1_Password]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
 ActionList1                      = Repeat Fade_In, #Fade_Delay#, 10
 Fade_In                          = [!SetVariable 1_Password_Opacity "(Clamp(#1_Password_Opacity#+10,155,255))"][!Update]
 ActionList2                      = Repeat Fade_Out, #Fade_Delay#, 10
 Fade_Out                         = [!SetVariable 1_Password_Opacity "(Clamp(#1_Password_Opacity#-10,155,255))"][!Update]

[animation.2_Login]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
 ActionList1                      = Repeat Fade_In, #Fade_Delay#, 10
 Fade_In                          = [!SetVariable 2_Login_Opacity "(Clamp(#2_Login_Opacity#+10,155,255))"][!Update]
 ActionList2                      = Repeat Fade_Out, #Fade_Delay#, 10
 Fade_Out                         = [!SetVariable 2_Login_Opacity "(Clamp(#2_Login_Opacity#-10,155,255))"][!Update]

[animation.2_Password]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
 ActionList1                      = Repeat Fade_In, #Fade_Delay#, 10
 Fade_In                          = [!SetVariable 2_Password_Opacity "(Clamp(#2_Password_Opacity#+10,155,255))"][!Update]
 ActionList2                      = Repeat Fade_Out, #Fade_Delay#, 10
 Fade_Out                         = [!SetVariable 2_Password_Opacity "(Clamp(#2_Password_Opacity#-10,155,255))"][!Update]

[animation.3_Login]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
 ActionList1                      = Repeat Fade_In, #Fade_Delay#, 10
 Fade_In                          = [!SetVariable 3_Login_Opacity "(Clamp(#3_Login_Opacity#+10,155,255))"][!Update]
 ActionList2                      = Repeat Fade_Out, #Fade_Delay#, 10
 Fade_Out                         = [!SetVariable 3_Login_Opacity "(Clamp(#3_Login_Opacity#-10,155,255))"][!Update]

[animation.3_Password]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
 ActionList1                      = Repeat Fade_In, #Fade_Delay#, 10
 Fade_In                          = [!SetVariable 3_Password_Opacity "(Clamp(#3_Password_Opacity#+10,155,255))"][!Update]
 ActionList2                      = Repeat Fade_Out, #Fade_Delay#, 10
 Fade_Out                         = [!SetVariable 3_Password_Opacity "(Clamp(#3_Password_Opacity#-10,155,255))"][!Update]

[animation.1_Button_Input]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
    ActionList1                   = Repeat Change_Other_Buttons, 1, 1 | Wait 1 | Repeat List1, 1, 10 | Wait 1 | Repeat Change_Opacity_Modifier_N, 1, 1
        List1                     = [!SetVariable 1_Button_Input_BG_Opacity "(Clamp(#1_Button_Input_BG_Opacity#+15,0,150))"][!SetVariable Pad_Top "(Clamp(#Pad_Top#+3,0,30))"][!SetVariable 1_Button_Opacity "(Clamp(#1_Button_Opacity#+15,1,150))"][!SetVariable 2_Button_Opacity "(Clamp(#2_Button_Opacity#-15,1,150))"][!SetVariable 2_Button_Input_BG_Opacity "(Clamp(#2_Button_Input_BG_Opacity#-15,0,150))"][!SetVariable 3_Button_Opacity "(Clamp(#3_Button_Opacity#-15,1,150))"][!SetVariable 3_Button_Input_BG_Opacity "(Clamp(#3_Button_Input_BG_Opacity#-15,0,150))"][!Update]
        Change_Other_Buttons      = [!SetOption text.LOGIN_2 FontColor "#*Color_RGB*#, #*2_Button_Input_BG_Opacity*#"][!SetOption text.PASSWORD_2 FontColor "#*Color_RGB*#, #*2_Button_Input_BG_Opacity*#"][!SetOption text.LOGIN_3 FontColor "#*Color_RGB*#, #*3_Button_Input_BG_Opacity*#"][!SetOption text.PASSWORD_3 FontColor "#*Color_RGB*#, #*3_Button_Input_BG_Opacity*#"]
        Change_Opacity_Modifier_N = [!SetOption text.LOGIN_1 FontColor "#*Color_RGB*#, #*1_Login_Opacity*#"][!SetOption text.PASSWORD_1 FontColor "#*Color_RGB*#, #*1_Password_Opacity*#"]
    ActionList2                   = Repeat List2, 10, 10 | Wait 1 | Repeat Change_Opacity_Modifier_P, 1, 1
        List2                     = [!SetVariable 1_Button_Input_BG_Opacity "(Clamp(#1_Button_Input_BG_Opacity#-15,0,150))"][!SetVariable Pad_Top "(Clamp(#Pad_Top#-3,0,30))"][!SetVariable 1_Button_Opacity "(Clamp(#1_Button_Opacity#-15,1,150))"][!SetVariable 2_Button_Opacity "(Clamp(#2_Button_Opacity#-15,1,150))"][!SetVariable 2_Button_Input_BG_Opacity "(Clamp(#2_Button_Input_BG_Opacity#-15,0,150))"] #Hide_3_Button#[!Update]
        Change_Opacity_Modifier_P = [!SetOption text.LOGIN_1 FontColor "#*Color_RGB*#, #*1_Button_Input_BG_Opacity*#"][!SetOption text.PASSWORD_1 FontColor "#*Color_RGB*#, #*1_Button_Input_BG_Opacity*#"][!Update]

[animation.2_Button_Input]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
    ActionList1                   = Repeat Change_Other_Buttons, 1, 1 | Wait 1 | Repeat List1, 1, 10 | Wait 1 | Repeat Change_Opacity_Modifier_N, 1, 1
        List1                     = [!SetVariable 2_Button_Input_BG_Opacity "(Clamp(#2_Button_Input_BG_Opacity#+15,1,150))"][!SetVariable Pad_Top "(Clamp(#Pad_Top#+3,0,30))"][!SetVariable 2_Button_Opacity "(Clamp(#2_Button_Opacity#+15,1,150))"][!SetVariable 1_Button_Opacity "(Clamp(#1_Button_Opacity#-15,1,150))"][!SetVariable 1_Button_Input_BG_Opacity "(Clamp(#1_Button_Input_BG_Opacity#-15,0,150))"][!SetVariable 3_Button_Opacity "(Clamp(#3_Button_Opacity#-15,1,150))"][!SetVariable 3_Button_Input_BG_Opacity "(Clamp(#3_Button_Input_BG_Opacity#-15,0,150))"][!Update]
        Change_Other_Buttons      = [!SetOption text.LOGIN_1 FontColor "#*Color_RGB*#, #*1_Button_Input_BG_Opacity*#"][!SetOption text.PASSWORD_1 FontColor "#*Color_RGB*#, #*1_Button_Input_BG_Opacity*#"][!SetOption text.LOGIN_3 FontColor "#*Color_RGB*#, #*3_Button_Input_BG_Opacity*#"][!SetOption text.PASSWORD_3 FontColor "#*Color_RGB*#, #*3_Button_Input_BG_Opacity*#"]
        Change_Opacity_Modifier_N = [!SetOption text.LOGIN_2 FontColor "#*Color_RGB*#, #*2_Login_Opacity*#"][!SetOption text.PASSWORD_2 FontColor "#*Color_RGB*#, #*2_Password_Opacity*#"]
    ActionList2                   = Repeat List2, 10, 10 | Wait 1 | Repeat Change_Opacity_Modifier_P, 1, 1
        List2                     = [!SetVariable 2_Button_Input_BG_Opacity "(Clamp(#2_Button_Input_BG_Opacity#-15,0,150))"][!SetVariable Pad_Top "(Clamp(#Pad_Top#-3,0,30))"][!SetVariable 2_Button_Opacity "(Clamp(#2_Button_Opacity#-15,1,150))"][!SetVariable 1_Button_Opacity "(Clamp(#1_Button_Opacity#-15,1,150))"][!SetVariable 1_Button_Input_BG_Opacity "(Clamp(#1_Button_Input_BG_Opacity#-15,0,150))"][!SetVariable 3_Button_Opacity "(Clamp(#3_Button_Opacity#-15,1,150))"][!SetVariable 3_Button_Input_BG_Opacity "(Clamp(#3_Button_Input_BG_Opacity#-15,0,150))"][!Update]
        Change_Opacity_Modifier_P = [!SetOption text.LOGIN_2 FontColor "#*Color_RGB*#, #*2_Button_Input_BG_Opacity*#"][!SetOption text.PASSWORD_2 FontColor "#*Color_RGB*#, #*2_Button_Input_BG_Opacity*#"][!Update]

[animation.3_Button_Input]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
    ActionList1                   = Repeat Change_Other_Buttons, 1, 1 | Wait 1 | Repeat List1, 1, 10 | Wait 1 | Repeat Change_Opacity_Modifier_N, 1, 1
        List1                     = [!SetVariable 3_Button_Input_BG_Opacity "(Clamp(#3_Button_Input_BG_Opacity#+15,1,150))"][!SetVariable Pad_Top "(Clamp(#Pad_Top#+3,0,30))"][!SetVariable 3_Button_Opacity "(Clamp(#3_Button_Opacity#+15,1,150))"][!SetVariable 1_Button_Opacity "(Clamp(#1_Button_Opacity#-15,1,150))"][!SetVariable 1_Button_Input_BG_Opacity "(Clamp(#1_Button_Input_BG_Opacity#-15,0,150))"][!SetVariable 2_Button_Opacity "(Clamp(#2_Button_Opacity#-15,1,150))"][!SetVariable 2_Button_Input_BG_Opacity "(Clamp(#2_Button_Input_BG_Opacity#-15,0,150))"][!Update]
        Change_Other_Buttons      = [!SetOption text.LOGIN_1 FontColor "#*Color_RGB*#, #*1_Button_Input_BG_Opacity*#"][!SetOption text.PASSWORD_1 FontColor "#*Color_RGB*#, #*1_Button_Input_BG_Opacity*#"][!SetOption text.LOGIN_2 FontColor "#*Color_RGB*#, #*2_Button_Input_BG_Opacity*#"][!SetOption text.PASSWORD_2 FontColor "#*Color_RGB*#, #*2_Button_Input_BG_Opacity*#"]
        Change_Opacity_Modifier_N = [!SetOption text.LOGIN_3 FontColor "#*Color_RGB*#, #*3_Login_Opacity*#"][!SetOption text.PASSWORD_3 FontColor "#*Color_RGB*#, #*3_Password_Opacity*#"][!Update]
    ActionList2                   = Repeat List2, 10, 10 | Wait 1 | Repeat Change_Opacity_Modifier_P, 1, 1
        List2                     = [!SetVariable 3_Button_Input_BG_Opacity "(Clamp(#3_Button_Input_BG_Opacity#-15,0,150))"][!SetVariable Pad_Top "(Clamp(#Pad_Top#-3,0,30))"][!SetVariable 3_Button_Opacity "(Clamp(#3_Button_Opacity#-15,1,150))"][!SetVariable 1_Button_Opacity "(Clamp(#1_Button_Opacity#-15,1,150))"][!SetVariable 1_Button_Input_BG_Opacity "(Clamp(#1_Button_Input_BG_Opacity#-15,0,150))"][!SetVariable 2_Button_Opacity "(Clamp(#2_Button_Opacity#-15,1,150))"][!SetVariable 2_Button_Input_BG_Opacity "(Clamp(#2_Button_Input_BG_Opacity#-15,0,150))"][!Update]
        Change_Opacity_Modifier_P = [!SetOption text.LOGIN_3 FontColor "#*Color_RGB*#, #*3_Button_Input_BG_Opacity*#"][!SetOption text.PASSWORD_3 FontColor "#*Color_RGB*#, #*3_Button_Input_BG_Opacity*#"][!Update]