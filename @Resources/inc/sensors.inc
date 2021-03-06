[Metadata]
 Name                             = SimpleCred
 Version                          = 1.0.0
 Author                           = deflore08 (deflore08@gmail.com) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Little tool for easy access to most usable credentials

[sensor.Highlight_Buttons_Text_Controller]
 Measure                          = CALC
 DynamicVariables                 = 1
    ifCondition                   = (#1_Button_Opacity# = 150)
        ifTrueAction              = [!SetOption text.Button_1 FontColor "#Color_Main#"]
            ifFalseAction         = [!SetOption text.Button_1 FontColor "#Color_RGB#, #1_Cred_Opacity#"]
    ifCondition2                  = #2_Button_Opacity# = 150
        ifTrueAction2             = [!SetOption text.Button_2 FontColor "#Color_Main#"]
            ifFalseAction2        = [!SetOption text.Button_2 FontColor "#Color_RGB#, #2_Cred_Opacity#"]
    ifCondition3                  = #3_Button_Opacity# = 150
        ifTrueAction3             = [!SetOption text.Button_3 FontColor "#Color_Main#"]
            ifFalseAction3        = [!SetOption text.Button_3 FontColor "#Color_RGB#, #3_Cred_Opacity#"]
    ifConditionMode               = 1

[sensor.Input_Buttons_Controller]
 Measure                          = CALC
 DynamicVariables                 = 1
    ifCondition                   = #1_Button_Input_BG_Opacity# = 0
        ifTrueAction              = [!SetVariable Button_Input_BG_1_State "1"]
            ifFalseAction         = [!SetVariable Button_Input_BG_1_State "0"]
    ifCondition2                  = #2_Button_Input_BG_Opacity# = 0
        ifTrueAction2             = [!SetVariable Button_Input_BG_2_State "1"]
            ifFalseAction2        = [!SetVariable Button_Input_BG_2_State "0"]
    ifCondition3                  = #3_Button_Input_BG_Opacity# = 0
        ifTrueAction3             = [!SetVariable Button_Input_BG_3_State "1"]
            ifFalseAction3        = [!SetVariable Button_Input_BG_3_State "0"]
    ifConditionMode               = 1

[sensor.INPUT_LOGIC]
 Measure                          = PLUGIN
 Plugin                           = InputText
 MeterStyle                       = style.Font_Main
 X                                = 0
 Y                                = 0
 W                                = 150
 H                                = 15
 SolidColor                       = 15,15,15,220
 FontColor                        = #Color_Main#
 FontFace                         = Verdana
 FonSize                          = 7
 AntiAlias                        = 1
 DefaultValue                     = #Login_1#
 FocusDismiss                     = 1
 OnDismissAction                  = [!Zpos "#Last_Zpos#" "SimpleCred"]
 DynamicVariables                 = 1

 Command1                         = [!WriteKeyValue Variables Login_1 " $UserInput$" "#@#\config\creds.inc"] DefaultValue="#Login_1#" X=0 W=78 H=29 Y=2
 Command2                         = [!SetVariable Login_1 [sensor.INPUT_LOGIC]][!SetVariable Skin_Zpos "#Last_Zpos#"][!Zpos "#Skin_Zpos#" "SimpleCred"][!Update]

 Command3                         = [!WriteKeyValue Variables Password_1 " $UserInput$" "#@#\config\creds.inc"] DefaultValue="#Password_1#" X=79 W=78 H=29 Y=2
 Command4                         = [!SetVariable Password_1 [sensor.INPUT_LOGIC]][!SetVariable Skin_Zpos "#Last_Zpos#"][!Zpos "#Skin_Zpos#" "SimpleCred"][!Update]

 Command5                         = [!WriteKeyValue Variables Login_2 " $UserInput$" "#@#\config\creds.inc"] DefaultValue="#Login_2#" X=0 W=78 H=29 Y=2
 Command6                         = [!SetVariable Login_2 [sensor.INPUT_LOGIC]][!SetVariable Skin_Zpos "#Last_Zpos#"][!Zpos "#Skin_Zpos#" "SimpleCred"][!Update]

 Command7                         = [!WriteKeyValue Variables Password_2 " $UserInput$" "#@#\config\creds.inc"] DefaultValue="#Password_2#" X=79 W=78 H=29 Y=2
 Command8                         = [!SetVariable Password_2 [sensor.INPUT_LOGIC]][!SetVariable Skin_Zpos "#Last_Zpos#"][!Zpos "#Skin_Zpos#" "SimpleCred"][!Update]

 Command9                         = [!WriteKeyValue Variables Login_3 " $UserInput$" "#@#\config\creds.inc"] DefaultValue="#Login_3#" X=0 W=78 H=29 Y=2
 Command10                        = [!SetVariable Login_3 [sensor.INPUT_LOGIC]][!SetVariable Skin_Zpos "#Last_Zpos#"][!Zpos "#Skin_Zpos#" "SimpleCred"][!Update]

 Command11                        = [!WriteKeyValue Variables Password_3 " $UserInput$" "#@#\config\creds.inc"] DefaultValue="#Password_3#" X=79 W=78 H=29 Y=2
 Command12                        = [!SetVariable Password_3 [sensor.INPUT_LOGIC]][!SetVariable Skin_Zpos "#Last_Zpos#"][!Zpos "#Skin_Zpos#" "SimpleCred"][!Update]

 Command13                        = [!WriteKeyValue Variables Button_1_Name "$UserInput$" "#@#\config\user.inc"] DefaultValue="#Button_1_Name#" X=0 W=50 H=#Button_Height# Y=2 InputLimit=3
 Command14                        = [!SetVariable Button_1_Name [sensor.INPUT_LOGIC]][!SetVariable Skin_Zpos "#Last_Zpos#"][!Zpos "#Skin_Zpos#" "SimpleCred"][!Update]

 Command15                        = [!WriteKeyValue Variables Button_2_Name "$UserInput$" "#@#\config\user.inc"] DefaultValue="#Button_2_Name#" X=51 W=50 H=#Button_Height# Y=2 InputLimit=3
 Command16                        = [!SetVariable Button_2_Name [sensor.INPUT_LOGIC]][!SetVariable Skin_Zpos "#Last_Zpos#"][!Zpos "#Skin_Zpos#" "SimpleCred"][!Update]

 Command17                        = [!WriteKeyValue Variables Button_3_Name "$UserInput$" "#@#\config\user.inc"] DefaultValue="#Button_3_Name#" X=102 W=50 H=#Button_Height# Y=2 InputLimit=3
 Command18                        = [!SetVariable Button_3_Name [sensor.INPUT_LOGIC]][!SetVariable Skin_Zpos "#Last_Zpos#"][!Zpos "#Skin_Zpos#" "SimpleCred"][!Update]