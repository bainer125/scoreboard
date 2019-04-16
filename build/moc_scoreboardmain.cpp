/****************************************************************************
** Meta object code from reading C++ file 'scoreboardmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/scoreboardmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scoreboardmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScoreboardMain_t {
    QByteArrayData data[89];
    char stringdata0[1695];
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
QT_MOC_LITERAL(72, 1363, 28), // "on_Browsefile_Button_clicked"
QT_MOC_LITERAL(73, 1392, 31), // "on_BrowseFile_Input_textChanged"
QT_MOC_LITERAL(74, 1424, 25), // "on_Speed_CheckBox_clicked"
QT_MOC_LITERAL(75, 1450, 9), // "checked11"
QT_MOC_LITERAL(76, 1460, 27), // "on_Speed_Input_valueChanged"
QT_MOC_LITERAL(77, 1488, 5), // "arg13"
QT_MOC_LITERAL(78, 1494, 19), // "ifclockinputchanged"
QT_MOC_LITERAL(79, 1514, 31), // "on_TimerPreset_Checkbox_clicked"
QT_MOC_LITERAL(80, 1546, 9), // "checked15"
QT_MOC_LITERAL(81, 1556, 22), // "on_FiveP_Radio_clicked"
QT_MOC_LITERAL(82, 1579, 21), // "on_TenP_Radio_clicked"
QT_MOC_LITERAL(83, 1601, 25), // "on_FifteenP_Radio_clicked"
QT_MOC_LITERAL(84, 1627, 24), // "on_TwentyP_Radio_clicked"
QT_MOC_LITERAL(85, 1652, 3), // "xml"
QT_MOC_LITERAL(86, 1656, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(87, 1676, 9), // "checked20"
QT_MOC_LITERAL(88, 1686, 8) // "writexml"

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
    "countdown\0on_Browsefile_Button_clicked\0"
    "on_BrowseFile_Input_textChanged\0"
    "on_Speed_CheckBox_clicked\0checked11\0"
    "on_Speed_Input_valueChanged\0arg13\0"
    "ifclockinputchanged\0on_TimerPreset_Checkbox_clicked\0"
    "checked15\0on_FiveP_Radio_clicked\0"
    "on_TenP_Radio_clicked\0on_FifteenP_Radio_clicked\0"
    "on_TwentyP_Radio_clicked\0xml\0"
    "on_checkBox_clicked\0checked20\0writexml"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScoreboardMain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      70,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  364,    2, 0x08 /* Private */,
       3,    0,  365,    2, 0x08 /* Private */,
       4,    0,  366,    2, 0x08 /* Private */,
       5,    1,  367,    2, 0x08 /* Private */,
       7,    1,  370,    2, 0x08 /* Private */,
       9,    0,  373,    2, 0x08 /* Private */,
      10,    0,  374,    2, 0x08 /* Private */,
      11,    0,  375,    2, 0x08 /* Private */,
      12,    0,  376,    2, 0x08 /* Private */,
      13,    0,  377,    2, 0x08 /* Private */,
      14,    0,  378,    2, 0x08 /* Private */,
      15,    0,  379,    2, 0x08 /* Private */,
      16,    0,  380,    2, 0x08 /* Private */,
      17,    0,  381,    2, 0x08 /* Private */,
      18,    0,  382,    2, 0x08 /* Private */,
      19,    0,  383,    2, 0x08 /* Private */,
      20,    0,  384,    2, 0x08 /* Private */,
      21,    0,  385,    2, 0x08 /* Private */,
      22,    0,  386,    2, 0x08 /* Private */,
      23,    0,  387,    2, 0x08 /* Private */,
      24,    0,  388,    2, 0x08 /* Private */,
      25,    0,  389,    2, 0x08 /* Private */,
      26,    0,  390,    2, 0x08 /* Private */,
      27,    0,  391,    2, 0x08 /* Private */,
      28,    0,  392,    2, 0x08 /* Private */,
      29,    0,  393,    2, 0x08 /* Private */,
      30,    0,  394,    2, 0x08 /* Private */,
      31,    0,  395,    2, 0x08 /* Private */,
      32,    0,  396,    2, 0x08 /* Private */,
      33,    0,  397,    2, 0x08 /* Private */,
      34,    0,  398,    2, 0x08 /* Private */,
      35,    0,  399,    2, 0x08 /* Private */,
      36,    0,  400,    2, 0x08 /* Private */,
      37,    0,  401,    2, 0x08 /* Private */,
      38,    0,  402,    2, 0x08 /* Private */,
      39,    0,  403,    2, 0x08 /* Private */,
      40,    0,  404,    2, 0x08 /* Private */,
      41,    0,  405,    2, 0x08 /* Private */,
      42,    0,  406,    2, 0x08 /* Private */,
      43,    1,  407,    2, 0x08 /* Private */,
      45,    0,  410,    2, 0x08 /* Private */,
      46,    0,  411,    2, 0x08 /* Private */,
      47,    0,  412,    2, 0x08 /* Private */,
      48,    0,  413,    2, 0x08 /* Private */,
      49,    0,  414,    2, 0x08 /* Private */,
      50,    0,  415,    2, 0x08 /* Private */,
      51,    1,  416,    2, 0x08 /* Private */,
      53,    1,  419,    2, 0x08 /* Private */,
      55,    1,  422,    2, 0x08 /* Private */,
      57,    1,  425,    2, 0x08 /* Private */,
      59,    1,  428,    2, 0x08 /* Private */,
      61,    1,  431,    2, 0x08 /* Private */,
      63,    1,  434,    2, 0x08 /* Private */,
      65,    0,  437,    2, 0x08 /* Private */,
      66,    1,  438,    2, 0x08 /* Private */,
      68,    1,  441,    2, 0x08 /* Private */,
      70,    1,  444,    2, 0x08 /* Private */,
      72,    0,  447,    2, 0x08 /* Private */,
      73,    1,  448,    2, 0x08 /* Private */,
      74,    1,  451,    2, 0x08 /* Private */,
      76,    1,  454,    2, 0x08 /* Private */,
      78,    0,  457,    2, 0x08 /* Private */,
      79,    1,  458,    2, 0x08 /* Private */,
      81,    0,  461,    2, 0x08 /* Private */,
      82,    0,  462,    2, 0x08 /* Private */,
      83,    0,  463,    2, 0x08 /* Private */,
      84,    0,  464,    2, 0x08 /* Private */,
      85,    0,  465,    2, 0x08 /* Private */,
      86,    1,  466,    2, 0x08 /* Private */,
      88,    0,  469,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void, QMetaType::Bool,   75,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void,

       0        // eod
};

void ScoreboardMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScoreboardMain *>(_o);
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
        case 57: _t->on_Browsefile_Button_clicked(); break;
        case 58: _t->on_BrowseFile_Input_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 59: _t->on_Speed_CheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->on_Speed_Input_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->ifclockinputchanged(); break;
        case 62: _t->on_TimerPreset_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->on_FiveP_Radio_clicked(); break;
        case 64: _t->on_TenP_Radio_clicked(); break;
        case 65: _t->on_FifteenP_Radio_clicked(); break;
        case 66: _t->on_TwentyP_Radio_clicked(); break;
        case 67: _t->xml(); break;
        case 68: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 69: _t->writexml(); break;
        default: ;
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
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 70)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 70;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
