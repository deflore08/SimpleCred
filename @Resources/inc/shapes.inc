[Metadata]
 Name                             = SimpleCred
 Version                          = 1.0.0
 Author                           = deflore08 (deflore08@gmail.com) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Little tool for easy access to most usable credentials

[shape.Button_1]
 Meter                           = SHAPE
 Shape                           = Rectangle 0,(2 + #Pad_Top#),50,#Button_Height# | Fill Color #Shapes_Color_Raw#,#1_Button_Opacity# | StrokeWidth 0
 DynamicVariables                = 1
 LeftMouseUpAction               = [!SetClip #Password_1#]
 RightMouseUpAction              = [!SetClip #Login_1#]
 MouseOverAction                 = [!CommandMeasure animation.1_Cred_Fade "Stop 2"][!CommandMeasure animation.1_Cred_Fade "Execute 1"]
 MouseLeaveAction                = [!CommandMeasure animation.1_Cred_Fade "Stop 1"][!CommandMeasure animation.1_Cred_Fade "Execute 2"]
 MouseScrollUpAction             = [!CommandMeasure animation.1_Button_Input "Stop 2"][!CommandMeasure animation.1_Button_Input "Execute 1"]
 MouseScrollDownAction           = [!CommandMeasure animation.1_Button_Input "Stop 1"][!CommandMeasure animation.1_Button_Input "Execute 2"]
 MiddleMouseDownAction           = [!SetVariable Last_Zpos "#Skin_Zpos#"][!Zpos "0" "SimpleCred"]
 MiddleMouseUpAction             = [!CommandMeasure sensor.INPUT_LOGIC "ExecuteBatch 13-14"]

[shape.Button_2]
 Meter                           = SHAPE
 Shape                           = Rectangle 51,(2 + #Pad_Top#),50,#Button_Height# | Fill Color #Shapes_Color_Raw#,#2_Button_Opacity# | StrokeWidth 0
 DynamicVariables                = 1
 LeftMouseUpAction               = [!SetClip #Password_2#]
 RightMouseUpAction              = [!SetClip #Login_2#]
 MouseOverAction                 = [!CommandMeasure animation.2_Cred_Fade "Stop 2"][!CommandMeasure animation.2_Cred_Fade "Execute 1"]
 MouseLeaveAction                = [!CommandMeasure animation.2_Cred_Fade "Stop 1"][!CommandMeasure animation.2_Cred_Fade "Execute 2"]
 MouseScrollUpAction             = [!CommandMeasure animation.2_Button_Input "Stop 2"][!CommandMeasure animation.2_Button_Input "Execute 1"]
 MouseScrollDownAction           = [!CommandMeasure animation.2_Button_Input "Stop 1"][!CommandMeasure animation.2_Button_Input "Execute 2"]
 MiddleMouseDownAction           = [!SetVariable Last_Zpos "#Skin_Zpos#"][!Zpos "0" "SimpleCred"]
 MiddleMouseUpAction             = [!CommandMeasure sensor.INPUT_LOGIC "ExecuteBatch 15-16"]

[shape.Button_3]
 Meter                           = SHAPE
 Shape                           = Rectangle 102,(2 + #Pad_Top#),51,#Button_Height# | Fill Color #Shapes_Color_Raw#,#3_Button_Opacity# | StrokeWidth 0
 DynamicVariables                = 1
 LeftMouseUpAction               = [!SetClip #Password_3#]
 RightMouseUpAction              = [!SetClip #Login_3#]
 MouseOverAction                 = [!CommandMeasure animation.3_Cred_Fade "Stop 2"][!CommandMeasure animation.3_Cred_Fade "Execute 1"]
 MouseLeaveAction                = [!CommandMeasure animation.3_Cred_Fade "Stop 1"][!CommandMeasure animation.3_Cred_Fade "Execute 2"]
 MouseScrollUpAction             = [!CommandMeasure animation.3_Button_Input "Stop 2"][!CommandMeasure animation.3_Button_Input "Execute 1"]
 MouseScrollDownAction           = [!CommandMeasure animation.3_Button_Input "Stop 1"][!CommandMeasure animation.3_Button_Input "Execute 2"]
 MiddleMouseDownAction           = [!SetVariable Last_Zpos "#Skin_Zpos#"][!Zpos "0" "SimpleCred"]
 MiddleMouseUpAction             = [!CommandMeasure sensor.INPUT_LOGIC "ExecuteBatch 17-18"]

[shape.Button_Login_1]
 Meter                           = SHAPE
 Shape                           = Rectangle 0,2,76,29 | Fill Color #Shapes_Color_Raw#,#1_Button_Input_BG_Opacity# | StrokeWidth 0 | Stroke Color 255,255,255
 X                               = 0
 Y                               = 0
 DynamicVariables                = 1
 Hidden                          = #Button_Input_BG_1_State#
 MouseScrollDownAction           = [!CommandMeasure animation.1_Button_Input "Stop 1"][!CommandMeasure animation.1_Button_Input "Execute 2"]
 MouseOverAction                 = [!CommandMeasure animation.1_Login "Stop 2"][!CommandMeasure animation.1_Login "Execute 1"]
 MouseLeaveAction                = [!CommandMeasure animation.1_Login "Stop 1"][!CommandMeasure animation.1_Login "Execute 2"]
 LeftMouseDownAction             = [!SetVariable Last_Zpos "#Skin_Zpos#"][!Zpos "0" "SimpleCred"]
 LeftMouseUpAction               = [!CommandMeasure sensor.INPUT_LOGIC "ExecuteBatch 1-2"]

[shape.Button_Password_1]
 Meter                           = SHAPE
 Shape                           = Rectangle 77,2,76,29 | Fill Color #Shapes_Color_Raw#,#1_Button_Input_BG_Opacity# | StrokeWidth 0 | Stroke Color 255,255,255
 X                               = 0
 Y                               = 0
 DynamicVariables                = 1
 Hidden                          = #Button_Input_BG_1_State#
 MouseScrollDownAction           = [!CommandMeasure animation.1_Button_Input "Stop 1"][!CommandMeasure animation.1_Button_Input "Execute 2"]
 MouseOverAction                 = [!CommandMeasure animation.1_Password "Stop 2"][!CommandMeasure animation.1_Password "Execute 1"]
 MouseLeaveAction                = [!CommandMeasure animation.1_Password "Stop 1"][!CommandMeasure animation.1_Password "Execute 2"]
 LeftMouseDownAction             = [!SetVariable Last_Zpos "#Skin_Zpos#"][!Zpos "0" "SimpleCred"]
 LeftMouseUpAction               = [!CommandMeasure sensor.INPUT_LOGIC "ExecuteBatch 3-4"]

[shape.Button_Login_2]
 Meter                           = SHAPE
 Shape                           = Rectangle 0,2,76,29 | Fill Color #Shapes_Color_Raw#,#2_Button_Input_BG_Opacity# | StrokeWidth 0 | Stroke Color 255,255,255
 X                               = 0
 Y                               = 0
 DynamicVariables                = 1
 Hidden                          = #Button_Input_BG_2_State#
 MouseScrollDownAction           = [!CommandMeasure animation.2_Button_Input "Stop 1"][!CommandMeasure animation.2_Button_Input "Execute 2"]
 MouseOverAction                 = [!CommandMeasure animation.2_Login "Stop 2"][!CommandMeasure animation.2_Login "Execute 1"]
 MouseLeaveAction                = [!CommandMeasure animation.2_Login "Stop 1"][!CommandMeasure animation.2_Login "Execute 2"]
 LeftMouseDownAction             = [!SetVariable Last_Zpos "#Skin_Zpos#"][!Zpos "0" "SimpleCred"]
 LeftMouseUpAction               = [!CommandMeasure sensor.INPUT_LOGIC "ExecuteBatch 5-6"]

[shape.Button_Password_2]
 Meter                           = SHAPE
 Shape                           = Rectangle 77,2,76,29 | Fill Color #Shapes_Color_Raw#,#2_Button_Input_BG_Opacity# | StrokeWidth 0 | Stroke Color 255,255,255
 X                               = 0
 Y                               = 0
 DynamicVariables                = 1
 Hidden                          = #Button_Input_BG_2_State#
 MouseScrollDownAction           = [!CommandMeasure animation.2_Button_Input "Stop 1"][!CommandMeasure animation.2_Button_Input "Execute 2"]
 MouseOverAction                 = [!CommandMeasure animation.2_Password "Stop 2"][!CommandMeasure animation.2_Password "Execute 1"]
 MouseLeaveAction                = [!CommandMeasure animation.2_Password "Stop 1"][!CommandMeasure animation.2_Password "Execute 2"]
 LeftMouseDownAction             = [!SetVariable Last_Zpos "#Skin_Zpos#"][!Zpos "0" "SimpleCred"]
 LeftMouseUpAction               = [!CommandMeasure sensor.INPUT_LOGIC "ExecuteBatch 7-8"]

[shape.Button_Login_3]
 Meter                           = SHAPE
 Shape                           = Rectangle 0,2,76,29 | Fill Color #Shapes_Color_Raw#,#3_Button_Input_BG_Opacity# | StrokeWidth 0 | Stroke Color 255,255,255
 X                               = 0
 Y                               = 0
 DynamicVariables                = 1
 Hidden                          = #Button_Input_BG_3_State#
 MouseScrollDownAction           = [!CommandMeasure animation.3_Button_Input "Stop 1"][!CommandMeasure animation.3_Button_Input "Execute 2"]
 MouseOverAction                 = [!CommandMeasure animation.3_Login "Stop 2"][!CommandMeasure animation.3_Login "Execute 1"]
 MouseLeaveAction                = [!CommandMeasure animation.3_Login "Stop 1"][!CommandMeasure animation.3_Login "Execute 2"]
 LeftMouseDownAction             = [!SetVariable Last_Zpos "#Skin_Zpos#"][!Zpos "0" "SimpleCred"]
 LeftMouseUpAction               = [!CommandMeasure sensor.INPUT_LOGIC "ExecuteBatch 9-10"]

[shape.Button_Password_3]
 Meter                           = SHAPE
 Shape                           = Rectangle 77,2,76,29 | Fill Color #Shapes_Color_Raw#,#3_Button_Input_BG_Opacity# | StrokeWidth 0 | Stroke Color 255,255,255
 X                               = 0
 Y                               = 0
 DynamicVariables                = 1
 Hidden                          = #Button_Input_BG_3_State#
 MouseScrollDownAction           = [!CommandMeasure animation.3_Button_Input "Stop 1"][!CommandMeasure animation.3_Button_Input "Execute 2"]
 MouseOverAction                 = [!CommandMeasure animation.3_Password "Stop 2"][!CommandMeasure animation.3_Password "Execute 1"]
 MouseLeaveAction                = [!CommandMeasure animation.3_Password "Stop 1"][!CommandMeasure animation.3_Password "Execute 2"]
 LeftMouseDownAction             = [!SetVariable Last_Zpos "#Skin_Zpos#"][!Zpos "0" "SimpleCred"]
 LeftMouseUpAction               = [!CommandMeasure sensor.INPUT_LOGIC "ExecuteBatch 11-12"]