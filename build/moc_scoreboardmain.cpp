/****************************************************************************
** Meta object code from reading C++ file 'scoreboardmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/scoreboardmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scoreboardmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScoreboardMain_t {
    QByteArrayData data[109];
    char stringdata0[2124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScoreboardMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScoreboardMain_t qt_meta_stringdata_ScoreboardMain = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ScoreboardMain"
QT_MOC_LITERAL(1, 15, 21), // "on_show_score_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "on_Reset_All_clicked"
QT_MOC_LITERAL(4, 59, 26), // "on_End_Game_Button_clicked"
QT_MOC_LITERAL(5, 86, 10), // "closeEvent"
QT_MOC_LITERAL(6, 97, 12), // "QCloseEvent*"
QT_MOC_LITERAL(7, 110, 15), // "Clear_Penalties"
QT_MOC_LITERAL(8, 126, 5), // "shown"
QT_MOC_LITERAL(9, 132, 22), // "on_Update_Pens_clicked"
QT_MOC_LITERAL(10, 155, 16), // "Update_Penalties"
QT_MOC_LITERAL(11, 172, 13), // "Penalty_Timer"
QT_MOC_LITERAL(12, 186, 14), // "on_HP1_clicked"
QT_MOC_LITERAL(13, 201, 14), // "on_HP2_clicked"
QT_MOC_LITERAL(14, 216, 14), // "on_AP1_clicked"
QT_MOC_LITERAL(15, 231, 14), // "on_AP2_clicked"
QT_MOC_LITERAL(16, 246, 24), // "on_HomeUP_Button_clicked"
QT_MOC_LITERAL(17, 271, 6), // "Opened"
QT_MOC_LITERAL(18, 278, 10), // "WarningBox"
QT_MOC_LITERAL(19, 289, 21), // "on_Minute10up_clicked"
QT_MOC_LITERAL(20, 311, 23), // "on_Minute10down_clicked"
QT_MOC_LITERAL(21, 335, 20), // "on_Minute1up_clicked"
QT_MOC_LITERAL(22, 356, 22), // "on_Minute1down_clicked"
QT_MOC_LITERAL(23, 379, 21), // "on_Second10up_clicked"
QT_MOC_LITERAL(24, 401, 23), // "on_Second10down_clicked"
QT_MOC_LITERAL(25, 425, 20), // "on_Second1up_clicked"
QT_MOC_LITERAL(26, 446, 22), // "on_Second1down_clicked"
QT_MOC_LITERAL(27, 469, 17), // "on_MS10up_clicked"
QT_MOC_LITERAL(28, 487, 19), // "on_MS10down_clicked"
QT_MOC_LITERAL(29, 507, 23), // "on_Update_Timer_clicked"
QT_MOC_LITERAL(30, 531, 11), // "updateClock"
QT_MOC_LITERAL(31, 543, 15), // "updateClockView"
QT_MOC_LITERAL(32, 559, 30), // "on_Intermission_Button_clicked"
QT_MOC_LITERAL(33, 590, 25), // "on_HomeUP2_Button_clicked"
QT_MOC_LITERAL(34, 616, 26), // "on_HomeDOWN_Button_clicked"
QT_MOC_LITERAL(35, 643, 24), // "on_AwayUP_Button_clicked"
QT_MOC_LITERAL(36, 668, 25), // "on_AwayUp2_Button_clicked"
QT_MOC_LITERAL(37, 694, 26), // "on_AwayDOWN_Button_clicked"
QT_MOC_LITERAL(38, 721, 26), // "on_PeriodUP_Button_clicked"
QT_MOC_LITERAL(39, 748, 28), // "on_PeriodDOWN_Button_clicked"
QT_MOC_LITERAL(40, 777, 29), // "on_Update_Team_Button_clicked"
QT_MOC_LITERAL(41, 807, 29), // "on_Reset_Score_Button_clicked"
QT_MOC_LITERAL(42, 837, 22), // "on_Swap_Button_clicked"
QT_MOC_LITERAL(43, 860, 32), // "on_Alway_on_top_Checkbox_clicked"
QT_MOC_LITERAL(44, 893, 8), // "alwayson"
QT_MOC_LITERAL(45, 902, 23), // "on_Start_Button_clicked"
QT_MOC_LITERAL(46, 926, 17), // "Stopwatch_Control"
QT_MOC_LITERAL(47, 944, 13), // "Timer_Control"
QT_MOC_LITERAL(48, 958, 9), // "Stopwatch"
QT_MOC_LITERAL(49, 968, 5), // "Timer"
QT_MOC_LITERAL(50, 974, 23), // "on_Reset_Button_clicked"
QT_MOC_LITERAL(51, 998, 22), // "on_To_Checkbox_clicked"
QT_MOC_LITERAL(52, 1021, 2), // "to"
QT_MOC_LITERAL(53, 1024, 29), // "on_Minutes_Input_valueChanged"
QT_MOC_LITERAL(54, 1054, 4), // "arg0"
QT_MOC_LITERAL(55, 1059, 29), // "on_Seconds_Input_valueChanged"
QT_MOC_LITERAL(56, 1089, 4), // "arg1"
QT_MOC_LITERAL(57, 1094, 29), // "on_Minutes_To_In_valueChanged"
QT_MOC_LITERAL(58, 1124, 4), // "arg2"
QT_MOC_LITERAL(59, 1129, 32), // "on_Seconds_To_Input_valueChanged"
QT_MOC_LITERAL(60, 1162, 4), // "arg3"
QT_MOC_LITERAL(61, 1167, 27), // "on_Addzero_Checkbox_clicked"
QT_MOC_LITERAL(62, 1195, 3), // "add"
QT_MOC_LITERAL(63, 1199, 31), // "on_CurrentTime_Checkbox_clicked"
QT_MOC_LITERAL(64, 1231, 7), // "current"
QT_MOC_LITERAL(65, 1239, 9), // "timeclock"
QT_MOC_LITERAL(66, 1249, 29), // "on_Stopwatch_Checkbox_clicked"
QT_MOC_LITERAL(67, 1279, 4), // "stop"
QT_MOC_LITERAL(68, 1284, 32), // "on_Milliseconds_Checkbox_clicked"
QT_MOC_LITERAL(69, 1317, 5), // "milli"
QT_MOC_LITERAL(70, 1323, 29), // "on_Countdown_Checkbox_clicked"
QT_MOC_LITERAL(71, 1353, 9), // "countdown"
QT_MOC_LITERAL(72, 1363, 28), // "on_About_ActionBar_triggered"
QT_MOC_LITERAL(73, 1392, 32), // "on_ChangeLog_ActionBar_triggered"
QT_MOC_LITERAL(74, 1425, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(75, 1447, 16), // "acceptConnection"
QT_MOC_LITERAL(76, 1464, 9), // "startRead"
QT_MOC_LITERAL(77, 1474, 29), // "on_actionSickmind33_triggered"
QT_MOC_LITERAL(78, 1504, 29), // "on_PlaySound_Checkbox_clicked"
QT_MOC_LITERAL(79, 1534, 9), // "checked10"
QT_MOC_LITERAL(80, 1544, 28), // "on_Browsefile_Button_clicked"
QT_MOC_LITERAL(81, 1573, 31), // "on_BrowseFile_Input_textChanged"
QT_MOC_LITERAL(82, 1605, 27), // "on_StopMusic_Button_clicked"
QT_MOC_LITERAL(83, 1633, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(84, 1665, 8), // "position"
QT_MOC_LITERAL(85, 1674, 27), // "on_TestSound_Button_clicked"
QT_MOC_LITERAL(86, 1702, 25), // "on_Speed_CheckBox_clicked"
QT_MOC_LITERAL(87, 1728, 9), // "checked11"
QT_MOC_LITERAL(88, 1738, 27), // "on_SpeedHelp_Button_clicked"
QT_MOC_LITERAL(89, 1766, 27), // "on_Speed_Input_valueChanged"
QT_MOC_LITERAL(90, 1794, 5), // "arg13"
QT_MOC_LITERAL(91, 1800, 19), // "ifclockinputchanged"
QT_MOC_LITERAL(92, 1820, 31), // "on_TimerPreset_Checkbox_clicked"
QT_MOC_LITERAL(93, 1852, 9), // "checked15"
QT_MOC_LITERAL(94, 1862, 22), // "on_FiveP_Radio_clicked"
QT_MOC_LITERAL(95, 1885, 21), // "on_TenP_Radio_clicked"
QT_MOC_LITERAL(96, 1907, 25), // "on_FifteenP_Radio_clicked"
QT_MOC_LITERAL(97, 1933, 24), // "on_TwentyP_Radio_clicked"
QT_MOC_LITERAL(98, 1958, 33), // "on_actionXxRocketshotxX_trigg..."
QT_MOC_LITERAL(99, 1992, 3), // "xml"
QT_MOC_LITERAL(100, 1996, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(101, 2016, 9), // "checked20"
QT_MOC_LITERAL(102, 2026, 8), // "writexml"
QT_MOC_LITERAL(103, 2035, 13), // "replyFinished"
QT_MOC_LITERAL(104, 2049, 14), // "QNetworkReply*"
QT_MOC_LITERAL(105, 2064, 5), // "reply"
QT_MOC_LITERAL(106, 2070, 32), // "on_SoundSpeed_Slider_sliderMoved"
QT_MOC_LITERAL(107, 2103, 8), // "slidepos"
QT_MOC_LITERAL(108, 2112, 11) // "putduration"

    },
    "ScoreboardMain\0on_show_score_clicked\0"
    "\0on_Reset_All_clicked\0on_End_Game_Button_clicked\0"
    "closeEvent\0QCloseEvent*\0Clear_Penalties\0"
    "shown\0on_Update_Pens_clicked\0"
    "Update_Penalties\0Penalty_Timer\0"
    "on_HP1_clicked\0on_HP2_clicked\0"
    "on_AP1_clicked\0on_AP2_clicked\0"
    "on_HomeUP_Button_clicked\0Opened\0"
    "WarningBox\0on_Minute10up_clicked\0"
    "on_Minute10down_clicked\0on_Minute1up_clicked\0"
    "on_Minute1down_clicked\0on_Second10up_clicked\0"
    "on_Second10down_clicked\0on_Second1up_clicked\0"
    "on_Second1down_clicked\0on_MS10up_clicked\0"
    "on_MS10down_clicked\0on_Update_Timer_clicked\0"
    "updateClock\0updateClockView\0"
    "on_Intermission_Button_clicked\0"
    "on_HomeUP2_Button_clicked\0"
    "on_HomeDOWN_Button_clicked\0"
    "on_AwayUP_Button_clicked\0"
    "on_AwayUp2_Button_clicked\0"
    "on_AwayDOWN_Button_clicked\0"
    "on_PeriodUP_Button_clicked\0"
    "on_PeriodDOWN_Button_clicked\0"
    "on_Update_Team_Button_clicked\0"
    "on_Reset_Score_Button_clicked\0"
    "on_Swap_Button_clicked\0"
    "on_Alway_on_top_Checkbox_clicked\0"
    "alwayson\0on_Start_Button_clicked\0"
    "Stopwatch_Control\0Timer_Control\0"
    "Stopwatch\0Timer\0on_Reset_Button_clicked\0"
    "on_To_Checkbox_clicked\0to\0"
    "on_Minutes_Input_valueChanged\0arg0\0"
    "on_Seconds_Input_valueChanged\0arg1\0"
    "on_Minutes_To_In_valueChanged\0arg2\0"
    "on_Seconds_To_Input_valueChanged\0arg3\0"
    "on_Addzero_Checkbox_clicked\0add\0"
    "on_CurrentTime_Checkbox_clicked\0current\0"
    "timeclock\0on_Stopwatch_Checkbox_clicked\0"
    "stop\0on_Milliseconds_Checkbox_clicked\0"
    "milli\0on_Countdown_Checkbox_clicked\0"
    "countdown\0on_About_ActionBar_triggered\0"
    "on_ChangeLog_ActionBar_triggered\0"
    "on_pushButton_clicked\0acceptConnection\0"
    "startRead\0on_actionSickmind33_triggered\0"
    "on_PlaySound_Checkbox_clicked\0checked10\0"
    "on_Browsefile_Button_clicked\0"
    "on_BrowseFile_Input_textChanged\0"
    "on_StopMusic_Button_clicked\0"
    "on_horizontalSlider_sliderMoved\0"
    "position\0on_TestSound_Button_clicked\0"
    "on_Speed_CheckBox_clicked\0checked11\0"
    "on_SpeedHelp_Button_clicked\0"
    "on_Speed_Input_valueChanged\0arg13\0"
    "ifclockinputchanged\0on_TimerPreset_Checkbox_clicked\0"
    "checked15\0on_FiveP_Radio_clicked\0"
    "on_TenP_Radio_clicked\0on_FifteenP_Radio_clicked\0"
    "on_TwentyP_Radio_clicked\0"
    "on_actionXxRocketshotxX_triggered\0xml\0"
    "on_checkBox_clicked\0checked20\0writexml\0"
    "replyFinished\0QNetworkReply*\0reply\0"
    "on_SoundSpeed_Slider_sliderMoved\0"
    "slidepos\0putduration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScoreboardMain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      85,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  439,    2, 0x08 /* Private */,
       3,    0,  440,    2, 0x08 /* Private */,
       4,    0,  441,    2, 0x08 /* Private */,
       5,    1,  442,    2, 0x08 /* Private */,
       7,    1,  445,    2, 0x08 /* Private */,
       9,    0,  448,    2, 0x08 /* Private */,
      10,    0,  449,    2, 0x08 /* Private */,
      11,    0,  450,    2, 0x08 /* Private */,
      12,    0,  451,    2, 0x08 /* Private */,
      13,    0,  452,    2, 0x08 /* Private */,
      14,    0,  453,    2, 0x08 /* Private */,
      15,    0,  454,    2, 0x08 /* Private */,
      16,    0,  455,    2, 0x08 /* Private */,
      17,    0,  456,    2, 0x08 /* Private */,
      18,    0,  457,    2, 0x08 /* Private */,
      19,    0,  458,    2, 0x08 /* Private */,
      20,    0,  459,    2, 0x08 /* Private */,
      21,    0,  460,    2, 0x08 /* Private */,
      22,    0,  461,    2, 0x08 /* Private */,
      23,    0,  462,    2, 0x08 /* Private */,
      24,    0,  463,    2, 0x08 /* Private */,
      25,    0,  464,    2, 0x08 /* Private */,
      26,    0,  465,    2, 0x08 /* Private */,
      27,    0,  466,    2, 0x08 /* Private */,
      28,    0,  467,    2, 0x08 /* Private */,
      29,    0,  468,    2, 0x08 /* Private */,
      30,    0,  469,    2, 0x08 /* Private */,
      31,    0,  470,    2, 0x08 /* Private */,
      32,    0,  471,    2, 0x08 /* Private */,
      33,    0,  472,    2, 0x08 /* Private */,
      34,    0,  473,    2, 0x08 /* Private */,
      35,    0,  474,    2, 0x08 /* Private */,
      36,    0,  475,    2, 0x08 /* Private */,
      37,    0,  476,    2, 0x08 /* Private */,
      38,    0,  477,    2, 0x08 /* Private */,
      39,    0,  478,    2, 0x08 /* Private */,
      40,    0,  479,    2, 0x08 /* Private */,
      41,    0,  480,    2, 0x08 /* Private */,
      42,    0,  481,    2, 0x08 /* Private */,
      43,    1,  482,    2, 0x08 /* Private */,
      45,    0,  485,    2, 0x08 /* Private */,
      46,    0,  486,    2, 0x08 /* Private */,
      47,    0,  487,    2, 0x08 /* Private */,
      48,    0,  488,    2, 0x08 /* Private */,
      49,    0,  489,    2, 0x08 /* Private */,
      50,    0,  490,    2, 0x08 /* Private */,
      51,    1,  491,    2, 0x08 /* Private */,
      53,    1,  494,    2, 0x08 /* Private */,
      55,    1,  497,    2, 0x08 /* Private */,
      57,    1,  500,    2, 0x08 /* Private */,
      59,    1,  503,    2, 0x08 /* Private */,
      61,    1,  506,    2, 0x08 /* Private */,
      63,    1,  509,    2, 0x08 /* Private */,
      65,    0,  512,    2, 0x08 /* Private */,
      66,    1,  513,    2, 0x08 /* Private */,
      68,    1,  516,    2, 0x08 /* Private */,
      70,    1,  519,    2, 0x08 /* Private */,
      72,    0,  522,    2, 0x08 /* Private */,
      73,    0,  523,    2, 0x08 /* Private */,
      74,    0,  524,    2, 0x08 /* Private */,
      75,    0,  525,    2, 0x08 /* Private */,
      76,    0,  526,    2, 0x08 /* Private */,
      77,    0,  527,    2, 0x08 /* Private */,
      78,    1,  528,    2, 0x08 /* Private */,
      80,    0,  531,    2, 0x08 /* Private */,
      81,    1,  532,    2, 0x08 /* Private */,
      82,    0,  535,    2, 0x08 /* Private */,
      83,    1,  536,    2, 0x08 /* Private */,
      85,    0,  539,    2, 0x08 /* Private */,
      86,    1,  540,    2, 0x08 /* Private */,
      88,    0,  543,    2, 0x08 /* Private */,
      89,    1,  544,    2, 0x08 /* Private */,
      91,    0,  547,    2, 0x08 /* Private */,
      92,    1,  548,    2, 0x08 /* Private */,
      94,    0,  551,    2, 0x08 /* Private */,
      95,    0,  552,    2, 0x08 /* Private */,
      96,    0,  553,    2, 0x08 /* Private */,
      97,    0,  554,    2, 0x08 /* Private */,
      98,    0,  555,    2, 0x08 /* Private */,
      99,    0,  556,    2, 0x08 /* Private */,
     100,    1,  557,    2, 0x08 /* Private */,
     102,    0,  560,    2, 0x08 /* Private */,
     103,    1,  561,    2, 0x08 /* Private */,
     106,    1,  564,    2, 0x08 /* Private */,
     108,    0,  567,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void, QMetaType::Int,   60,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   67,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   79,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   84,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   90,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  101,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 104,  105,
    QMetaType::Void, QMetaType::Int,  107,
    QMetaType::Void,

       0        // eod
};

void ScoreboardMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScoreboardMain *_t = static_cast<ScoreboardMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_show_score_clicked(); break;
        case 1: _t->on_Reset_All_clicked(); break;
        case 2: _t->on_End_Game_Button_clicked(); break;
        case 3: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 4: _t->Clear_Penalties((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_Update_Pens_clicked(); break;
        case 6: _t->Update_Penalties(); break;
        case 7: _t->Penalty_Timer(); break;
        case 8: _t->on_HP1_clicked(); break;
        case 9: _t->on_HP2_clicked(); break;
        case 10: _t->on_AP1_clicked(); break;
        case 11: _t->on_AP2_clicked(); break;
        case 12: _t->on_HomeUP_Button_clicked(); break;
        case 13: _t->Opened(); break;
        case 14: _t->WarningBox(); break;
        case 15: _t->on_Minute10up_clicked(); break;
        case 16: _t->on_Minute10down_clicked(); break;
        case 17: _t->on_Minute1up_clicked(); break;
        case 18: _t->on_Minute1down_clicked(); break;
        case 19: _t->on_Second10up_clicked(); break;
        case 20: _t->on_Second10down_clicked(); break;
        case 21: _t->on_Second1up_clicked(); break;
        case 22: _t->on_Second1down_clicked(); break;
        case 23: _t->on_MS10up_clicked(); break;
        case 24: _t->on_MS10down_clicked(); break;
        case 25: _t->on_Update_Timer_clicked(); break;
        case 26: _t->updateClock(); break;
        case 27: _t->updateClockView(); break;
        case 28: _t->on_Intermission_Button_clicked(); break;
        case 29: _t->on_HomeUP2_Button_clicked(); break;
        case 30: _t->on_HomeDOWN_Button_clicked(); break;
        case 31: _t->on_AwayUP_Button_clicked(); break;
        case 32: _t->on_AwayUp2_Button_clicked(); break;
        case 33: _t->on_AwayDOWN_Button_clicked(); break;
        case 34: _t->on_PeriodUP_Button_clicked(); break;
        case 35: _t->on_PeriodDOWN_Button_clicked(); break;
        case 36: _t->on_Update_Team_Button_clicked(); break;
        case 37: _t->on_Reset_Score_Button_clicked(); break;
        case 38: _t->on_Swap_Button_clicked(); break;
        case 39: _t->on_Alway_on_top_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->on_Start_Button_clicked(); break;
        case 41: _t->Stopwatch_Control(); break;
        case 42: _t->Timer_Control(); break;
        case 43: _t->Stopwatch(); break;
        case 44: _t->Timer(); break;
        case 45: _t->on_Reset_Button_clicked(); break;
        case 46: _t->on_To_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->on_Minutes_Input_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->on_Seconds_Input_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->on_Minutes_To_In_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->on_Seconds_To_Input_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->on_Addzero_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->on_CurrentTime_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->timeclock(); break;
        case 54: _t->on_Stopwatch_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->on_Milliseconds_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->on_Countdown_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->on_About_ActionBar_triggered(); break;
        case 58: _t->on_ChangeLog_ActionBar_triggered(); break;
        case 59: _t->on_pushButton_clicked(); break;
        case 60: _t->acceptConnection(); break;
        case 61: _t->startRead(); break;
        case 62: _t->on_actionSickmind33_triggered(); break;
        case 63: _t->on_PlaySound_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: _t->on_Browsefile_Button_clicked(); break;
        case 65: _t->on_BrowseFile_Input_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 66: _t->on_StopMusic_Button_clicked(); break;
        case 67: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->on_TestSound_Button_clicked(); break;
        case 69: _t->on_Speed_CheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: _t->on_SpeedHelp_Button_clicked(); break;
        case 71: _t->on_Speed_Input_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->ifclockinputchanged(); break;
        case 73: _t->on_TimerPreset_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 74: _t->on_FiveP_Radio_clicked(); break;
        case 75: _t->on_TenP_Radio_clicked(); break;
        case 76: _t->on_FifteenP_Radio_clicked(); break;
        case 77: _t->on_TwentyP_Radio_clicked(); break;
        case 78: _t->on_actionXxRocketshotxX_triggered(); break;
        case 79: _t->xml(); break;
        case 80: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: _t->writexml(); break;
        case 82: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 83: _t->on_SoundSpeed_Slider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 84: _t->putduration(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScoreboardMain::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_ScoreboardMain.data,
    qt_meta_data_ScoreboardMain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScoreboardMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScoreboardMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScoreboardMain.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ScoreboardMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 85)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 85;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 85)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 85;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
