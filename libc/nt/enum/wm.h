#ifndef COSMOPOLITAN_LIBC_NT_ENUM_WM_H_
#define COSMOPOLITAN_LIBC_NT_ENUM_WM_H_

#define kNtWmNull                   0x0000
#define kNtWmCreate                 0x0001
#define kNtWmDestroy                0x0002
#define kNtWmMove                   0x0003
#define kNtWmSize                   0x0005
#define kNtWmActivate               0x0006
#define kNtWmSetfocus               0x0007
#define kNtWmKillfocus              0x0008
#define kNtWmEnable                 0x000A
#define kNtWmSetredraw              0x000B
#define kNtWmSettext                0x000C
#define kNtWmGettext                0x000D
#define kNtWmGettextlength          0x000E
#define kNtWmPaint                  0x000F
#define kNtWmClose                  0x0010
#define kNtWmQueryendsession        0x0011
#define kNtWmQueryopen              0x0013
#define kNtWmEndsession             0x0016
#define kNtWmQuit                   0x0012
#define kNtWmErasebkgnd             0x0014
#define kNtWmSyscolorchange         0x0015
#define kNtWmShowwindow             0x0018
#define kNtWmWininichange           0x001A
#define kNtWmSettingchange          kNtWmWininichange
#define kNtWmDevmodechange          0x001B
#define kNtWmActivateapp            0x001C
#define kNtWmFontchange             0x001D
#define kNtWmTimechange             0x001E
#define kNtWmCancelmode             0x001F
#define kNtWmSetcursor              0x0020
#define kNtWmMouseactivate          0x0021
#define kNtWmChildactivate          0x0022
#define kNtWmQueuesync              0x0023
#define kNtWmGetminmaxinfo          0x0024
#define kNtWmPainticon              0x0026
#define kNtWmIconerasebkgnd         0x0027
#define kNtWmNextdlgctl             0x0028
#define kNtWmSpoolerstatus          0x002A
#define kNtWmDrawitem               0x002B
#define kNtWmMeasureitem            0x002C
#define kNtWmDeleteitem             0x002D
#define kNtWmVkeytoitem             0x002E
#define kNtWmChartoitem             0x002F
#define kNtWmSetfont                0x0030
#define kNtWmGetfont                0x0031
#define kNtWmSethotkey              0x0032
#define kNtWmGethotkey              0x0033
#define kNtWmQuerydragicon          0x0037
#define kNtWmCompareitem            0x0039
#define kNtWmGetobject              0x003D
#define kNtWmCompacting             0x0041
#define kNtWmWindowposchanging      0x0046
#define kNtWmWindowposchanged       0x0047
#define kNtWmPower                  0x0048
#define kNtWmCopydata               0x004A
#define kNtWmCanceljournal          0x004B
#define kNtWmNotify                 0x004E
#define kNtWmInputlangchangerequest 0x0050
#define kNtWmInputlangchange        0x0051
#define kNtWmTcard                  0x0052
#define kNtWmHelp                   0x0053
#define kNtWmUserchanged            0x0054
#define kNtWmNotifyformat           0x0055
#define kNtWmContextmenu            0x007B
#define kNtWmStylechanging          0x007C
#define kNtWmStylechanged           0x007D
#define kNtWmDisplaychange          0x007E
#define kNtWmGeticon                0x007F
#define kNtWmSeticon                0x0080
#define kNtWmNccreate               0x0081
#define kNtWmNcdestroy              0x0082
#define kNtWmNccalcsize             0x0083
#define kNtWmNchittest              0x0084
#define kNtWmNcpaint                0x0085
#define kNtWmNcactivate             0x0086
#define kNtWmGetdlgcode             0x0087
#define kNtWmNcmousemove            0x00A0
#define kNtWmNclbuttondown          0x00A1
#define kNtWmNclbuttonup            0x00A2
#define kNtWmNclbuttondblclk        0x00A3
#define kNtWmNcrbuttondown          0x00A4
#define kNtWmNcrbuttonup            0x00A5
#define kNtWmNcrbuttondblclk        0x00A6
#define kNtWmNcmbuttondown          0x00A7
#define kNtWmNcmbuttonup            0x00A8
#define kNtWmNcmbuttondblclk        0x00A9
#define kNtWmNcxbuttondown          0x00AB
#define kNtWmNcxbuttonup            0x00AC
#define kNtWmNcxbuttondblclk        0x00AD
#define kNtWmKeyfirst               0x0100
#define kNtWmKeydown                0x0100
#define kNtWmKeyup                  0x0101
#define kNtWmChar                   0x0102
#define kNtWmDeadchar               0x0103
#define kNtWmSyskeydown             0x0104
#define kNtWmSyskeyup               0x0105
#define kNtWmSyschar                0x0106
#define kNtWmSysdeadchar            0x0107
#define kNtWmUnichar                0x0109
#define kNtWmKeylast                0x0109
#define kNtWmInitdialog             0x0110
#define kNtWmCommand                0x0111
#define kNtWmSyscommand             0x0112
#define kNtWmTimer                  0x0113
#define kNtWmHscroll                0x0114
#define kNtWmVscroll                0x0115
#define kNtWmInitmenu               0x0116
#define kNtWmInitmenupopup          0x0117
#define kNtWmGesture                0x0119
#define kNtWmGesturenotify          0x011A
#define kNtWmMenuselect             0x011F
#define kNtWmMenuchar               0x0120
#define kNtWmEnteridle              0x0121
#define kNtWmMenurbuttonup          0x0122
#define kNtWmMenudrag               0x0123
#define kNtWmMenugetobject          0x0124
#define kNtWmUninitmenupopup        0x0125
#define kNtWmMenucommand            0x0126
#define kNtWmChangeuistate          0x0127
#define kNtWmUpdateuistate          0x0128
#define kNtWmQueryuistate           0x0129
#define kNtWmMousefirst             0x0200
#define kNtWmMousemove              0x0200
#define kNtWmLbuttondown            0x0201
#define kNtWmLbuttonup              0x0202
#define kNtWmLbuttondblclk          0x0203
#define kNtWmRbuttondown            0x0204
#define kNtWmRbuttonup              0x0205
#define kNtWmRbuttondblclk          0x0206
#define kNtWmMbuttondown            0x0207
#define kNtWmMbuttonup              0x0208
#define kNtWmMbuttondblclk          0x0209
#define kNtWmMousewheel             0x020A
#define kNtWmXbuttondown            0x020B
#define kNtWmXbuttonup              0x020C
#define kNtWmXbuttondblclk          0x020D
#define kNtWmMousehwheel            0x020E
#define kNtWmMouselast              0x020E
#define kNtWmParentnotify           0x0210
#define kNtWmEntermenuloop          0x0211
#define kNtWmExitmenuloop           0x0212
#define kNtWmNextmenu               0x0213
#define kNtWmSizing                 0x0214
#define kNtWmCapturechanged         0x0215
#define kNtWmMoving                 0x0216
#define kNtWmPowerbroadcast         0x0218
#define kNtWmMdicreate              0x0220
#define kNtWmMdidestroy             0x0221
#define kNtWmMdiactivate            0x0222
#define kNtWmMdirestore             0x0223
#define kNtWmMdinext                0x0224
#define kNtWmMdimaximize            0x0225
#define kNtWmMditile                0x0226
#define kNtWmMdicascade             0x0227
#define kNtWmMdiiconarrange         0x0228
#define kNtWmMdigetactive           0x0229
#define kNtWmMdisetmenu             0x0230
#define kNtWmEntersizemove          0x0231
#define kNtWmExitsizemove           0x0232
#define kNtWmDropfiles              0x0233
#define kNtWmMdirefreshmenu         0x0234
#define kNtWmCut                    0x0300
#define kNtWmCopy                   0x0301
#define kNtWmPaste                  0x0302
#define kNtWmClear                  0x0303
#define kNtWmUndo                   0x0304
#define kNtWmRenderformat           0x0305
#define kNtWmRenderallformats       0x0306
#define kNtWmDestroyclipboard       0x0307
#define kNtWmDrawclipboard          0x0308
#define kNtWmPaintclipboard         0x0309
#define kNtWmVscrollclipboard       0x030A
#define kNtWmSizeclipboard          0x030B
#define kNtWmAskcbformatname        0x030C
#define kNtWmChangecbchain          0x030D
#define kNtWmHscrollclipboard       0x030E
#define kNtWmQuerynewpalette        0x030F
#define kNtWmPaletteischanging      0x0310
#define kNtWmPalettechanged         0x0311
#define kNtWmHotkey                 0x0312

#endif /* COSMOPOLITAN_LIBC_NT_ENUM_WM_H_ */
