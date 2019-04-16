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
    QByteArrayData data[88];
    char stringdata0[1684];
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
QT_MOC_LITERAL(18, 278, 21), // "on_Minute10up_clicked"
QT_MOC_LITERAL(19, 300, 23), // "on_Minute10down_clicked"
QT_MOC_LITERAL(20, 324, 20), // "on_Minute1up_clicked"
QT_MOC_LITERAL(21, 345, 22), // "on_Minute1down_clicked"
QT_MOC_LITERAL(22, 368, 21), // "on_Second10up_clicked"
QT_MOC_LITERAL(23, 390, 23), // "on_Second10down_clicked"
QT_MOC_LITERAL(24, 414, 20), // "on_Second1up_clicked"
QT_MOC_LITERAL(25, 435, 22), // "on_Second1down_clicked"
QT_MOC_LITERAL(26, 458, 17), // "on_MS10up_clicked"
QT_MOC_LITERAL(27, 476, 19), // "on_MS10down_clicked"
QT_MOC_LITERAL(28, 496, 23), // "on_Update_Timer_clicked"
QT_MOC_LITERAL(29, 520, 11), // "updateClock"
QT_MOC_LITERAL(30, 532, 15), // "updateClockView"
QT_MOC_LITERAL(31, 548, 30), // "on_Intermission_Button_clicked"
QT_MOC_LITERAL(32, 579, 25), // "on_HomeUP2_Button_clicked"
QT_MOC_LITERAL(33, 605, 26), // "on_HomeDOWN_Button_clicked"
QT_MOC_LITERAL(34, 632, 24), // "on_AwayUP_Button_clicked"
QT_MOC_LITERAL(35, 657, 25), // "on_AwayUp2_Button_clicked"
QT_MOC_LITERAL(36, 683, 26), // "on_AwayDOWN_Button_clicked"
QT_MOC_LITERAL(37, 710, 26), // "on_PeriodUP_Button_clicked"
QT_MOC_LITERAL(38, 737, 28), // "on_PeriodDOWN_Button_clicked"
QT_MOC_LITERAL(39, 766, 29), // "on_Update_Team_Button_clicked"
QT_MOC_LITERAL(40, 796, 29), // "on_Reset_Score_Button_clicked"
QT_MOC_LITERAL(41, 826, 22), // "on_Swap_Button_clicked"
QT_MOC_LITERAL(42, 849, 32), // "on_Alway_on_top_Checkbox_clicked"
QT_MOC_LITERAL(43, 882, 8), // "alwayson"
QT_MOC_LITERAL(44, 891, 23), // "on_Start_Button_clicked"
QT_MOC_LITERAL(45, 915, 17), // "Stopwatch_Control"
QT_MOC_LITERAL(46, 933, 13), // "Timer_Control"
QT_MOC_LITERAL(47, 947, 9), // "Stopwatch"
QT_MOC_LITERAL(48, 957, 5), // "Timer"
QT_MOC_LITERAL(49, 963, 23), // "on_Reset_Button_clicked"
QT_MOC_LITERAL(50, 987, 22), // "on_To_Checkbox_clicked"
QT_MOC_LITERAL(51, 1010, 2), // "to"
QT_MOC_LITERAL(52, 1013, 29), // "on_Minutes_Input_valueChanged"
QT_MOC_LITERAL(53, 1043, 4), // "arg0"
QT_MOC_LITERAL(54, 1048, 29), // "on_Seconds_Input_valueChanged"
QT_MOC_LITERAL(55, 1078, 4), // "arg1"
QT_MOC_LITERAL(56, 1083, 29), // "on_Minutes_To_In_valueChanged"
QT_MOC_LITERAL(57, 1113, 4), // "arg2"
QT_MOC_LITERAL(58, 1118, 32), // "on_Seconds_To_Input_valueChanged"
QT_MOC_LITERAL(59, 1151, 4), // "arg3"
QT_MOC_LITERAL(60, 1156, 27), // "on_Addzero_Checkbox_clicked"
QT_MOC_LITERAL(61, 1184, 3), // "add"
QT_MOC_LITERAL(62, 1188, 31), // "on_CurrentTime_Checkbox_clicked"
QT_MOC_LITERAL(63, 1220, 7), // "current"
QT_MOC_LITERAL(64, 1228, 9), // "timeclock"
QT_MOC_LITERAL(65, 1238, 29), // "on_Stopwatch_Checkbox_clicked"
QT_MOC_LITERAL(66, 1268, 4), // "stop"
QT_MOC_LITERAL(67, 1273, 32), // "on_Milliseconds_Checkbox_clicked"
QT_MOC_LITERAL(68, 1306, 5), // "milli"
QT_MOC_LITERAL(69, 1312, 29), // "on_Countdown_Checkbox_clicked"
QT_MOC_LITERAL(70, 1342, 9), // "countdown"
QT_MOC_LITERAL(71, 1352, 28), // "on_Browsefile_Button_clicked"
QT_MOC_LITERAL(72, 1381, 31), // "on_BrowseFile_Input_textChanged"
QT_MOC_LITERAL(73, 1413, 25), // "on_Speed_CheckBox_clicked"
QT_MOC_LITERAL(74, 1439, 9), // "checked11"
QT_MOC_LITERAL(75, 1449, 27), // "on_Speed_Input_valueChanged"
QT_MOC_LITERAL(76, 1477, 5), // "arg13"
QT_MOC_LITERAL(77, 1483, 19), // "ifclockinputchanged"
QT_MOC_LITERAL(78, 1503, 31), // "on_TimerPreset_Checkbox_clicked"
QT_MOC_LITERAL(79, 1535, 9), // "checked15"
QT_MOC_LITERAL(80, 1545, 22), // "on_FiveP_Radio_clicked"
QT_MOC_LITERAL(81, 1568, 21), // "on_TenP_Radio_clicked"
QT_MOC_LITERAL(82, 1590, 25), // "on_FifteenP_Radio_clicked"
QT_MOC_LITERAL(83, 1616, 24), // "on_TwentyP_Radio_clicked"
QT_MOC_LITERAL(84, 1641, 3), // "xml"
QT_MOC_LITERAL(85, 1645, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(86, 1665, 9), // "checked20"
QT_MOC_LITERAL(87, 1675, 8) // "writexml"

    },
    "ScoreboardMain\0on_show_score_clicked\0"
    "\0on_Reset_All_clicked\0on_End_Game_Button_clicked\0"
    "closeEvent\0QCloseEvent*\0Clear_Penalties\0"
    "shown\0on_Update_Pens_clicked\0"
    "Update_Penalties\0Penalty_Timer\0"
    "on_HP1_clicked\0on_HP2_clicked\0"
    "on_AP1_clicked\0on_AP2_clicked\0"
    "on_HomeUP_Button_clicked\0Opened\0"
    "on_Minute10up_clicked\0on_Minute10down_clicked\0"
    "on_Minute1up_clicked\0on_Minute1down_clicked\0"
    "on_Second10up_clicked\0on_Second10down_clicked\0"
    "on_Second1up_clicked\0on_Second1down_clicked\0"
    "on_MS10up_clicked\0on_MS10down_clicked\0"
    "on_Update_Timer_clicked\0updateClock\0"
    "updateClockView\0on_Intermission_Button_clicked\0"
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
      69,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  359,    2, 0x08 /* Private */,
       3,    0,  360,    2, 0x08 /* Private */,
       4,    0,  361,    2, 0x08 /* Private */,
       5,    1,  362,    2, 0x08 /* Private */,
       7,    1,  365,    2, 0x08 /* Private */,
       9,    0,  368,    2, 0x08 /* Private */,
      10,    0,  369,    2, 0x08 /* Private */,
      11,    0,  370,    2, 0x08 /* Private */,
      12,    0,  371,    2, 0x08 /* Private */,
      13,    0,  372,    2, 0x08 /* Private */,
      14,    0,  373,    2, 0x08 /* Private */,
      15,    0,  374,    2, 0x08 /* Private */,
      16,    0,  375,    2, 0x08 /* Private */,
      17,    0,  376,    2, 0x08 /* Private */,
      18,    0,  377,    2, 0x08 /* Private */,
      19,    0,  378,    2, 0x08 /* Private */,
      20,    0,  379,    2, 0x08 /* Private */,
      21,    0,  380,    2, 0x08 /* Private */,
      22,    0,  381,    2, 0x08 /* Private */,
      23,    0,  382,    2, 0x08 /* Private */,
      24,    0,  383,    2, 0x08 /* Private */,
      25,    0,  384,    2, 0x08 /* Private */,
      26,    0,  385,    2, 0x08 /* Private */,
      27,    0,  386,    2, 0x08 /* Private */,
      28,    0,  387,    2, 0x08 /* Private */,
      29,    0,  388,    2, 0x08 /* Private */,
      30,    0,  389,    2, 0x08 /* Private */,
      31,    0,  390,    2, 0x08 /* Private */,
      32,    0,  391,    2, 0x08 /* Private */,
      33,    0,  392,    2, 0x08 /* Private */,
      34,    0,  393,    2, 0x08 /* Private */,
      35,    0,  394,    2, 0x08 /* Private */,
      36,    0,  395,    2, 0x08 /* Private */,
      37,    0,  396,    2, 0x08 /* Private */,
      38,    0,  397,    2, 0x08 /* Private */,
      39,    0,  398,    2, 0x08 /* Private */,
      40,    0,  399,    2, 0x08 /* Private */,
      41,    0,  400,    2, 0x08 /* Private */,
      42,    1,  401,    2, 0x08 /* Private */,
      44,    0,  404,    2, 0x08 /* Private */,
      45,    0,  405,    2, 0x08 /* Private */,
      46,    0,  406,    2, 0x08 /* Private */,
      47,    0,  407,    2, 0x08 /* Private */,
      48,    0,  408,    2, 0x08 /* Private */,
      49,    0,  409,    2, 0x08 /* Private */,
      50,    1,  410,    2, 0x08 /* Private */,
      52,    1,  413,    2, 0x08 /* Private */,
      54,    1,  416,    2, 0x08 /* Private */,
      56,    1,  419,    2, 0x08 /* Private */,
      58,    1,  422,    2, 0x08 /* Private */,
      60,    1,  425,    2, 0x08 /* Private */,
      62,    1,  428,    2, 0x08 /* Private */,
      64,    0,  431,    2, 0x08 /* Private */,
      65,    1,  432,    2, 0x08 /* Private */,
      67,    1,  435,    2, 0x08 /* Private */,
      69,    1,  438,    2, 0x08 /* Private */,
      71,    0,  441,    2, 0x08 /* Private */,
      72,    1,  442,    2, 0x08 /* Private */,
      73,    1,  445,    2, 0x08 /* Private */,
      75,    1,  448,    2, 0x08 /* Private */,
      77,    0,  451,    2, 0x08 /* Private */,
      78,    1,  452,    2, 0x08 /* Private */,
      80,    0,  455,    2, 0x08 /* Private */,
      81,    0,  456,    2, 0x08 /* Private */,
      82,    0,  457,    2, 0x08 /* Private */,
      83,    0,  458,    2, 0x08 /* Private */,
      84,    0,  459,    2, 0x08 /* Private */,
      85,    1,  460,    2, 0x08 /* Private */,
      87,    0,  463,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void, QMetaType::Int,   55,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   66,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   70,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::Bool,   74,
    QMetaType::Void, QMetaType::Int,   76,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   79,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   86,
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
        case 14: _t->on_Minute10up_clicked(); break;
        case 15: _t->on_Minute10down_clicked(); break;
        case 16: _t->on_Minute1up_clicked(); break;
        case 17: _t->on_Minute1down_clicked(); break;
        case 18: _t->on_Second10up_clicked(); break;
        case 19: _t->on_Second10down_clicked(); break;
        case 20: _t->on_Second1up_clicked(); break;
        case 21: _t->on_Second1down_clicked(); break;
        case 22: _t->on_MS10up_clicked(); break;
        case 23: _t->on_MS10down_clicked(); break;
        case 24: _t->on_Update_Timer_clicked(); break;
        case 25: _t->updateClock(); break;
        case 26: _t->updateClockView(); break;
        case 27: _t->on_Intermission_Button_clicked(); break;
        case 28: _t->on_HomeUP2_Button_clicked(); break;
        case 29: _t->on_HomeDOWN_Button_clicked(); break;
        case 30: _t->on_AwayUP_Button_clicked(); break;
        case 31: _t->on_AwayUp2_Button_clicked(); break;
        case 32: _t->on_AwayDOWN_Button_clicked(); break;
        case 33: _t->on_PeriodUP_Button_clicked(); break;
        case 34: _t->on_PeriodDOWN_Button_clicked(); break;
        case 35: _t->on_Update_Team_Button_clicked(); break;
        case 36: _t->on_Reset_Score_Button_clicked(); break;
        case 37: _t->on_Swap_Button_clicked(); break;
        case 38: _t->on_Alway_on_top_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->on_Start_Button_clicked(); break;
        case 40: _t->Stopwatch_Control(); break;
        case 41: _t->Timer_Control(); break;
        case 42: _t->Stopwatch(); break;
        case 43: _t->Timer(); break;
        case 44: _t->on_Reset_Button_clicked(); break;
        case 45: _t->on_To_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->on_Minutes_Input_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->on_Seconds_Input_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->on_Minutes_To_In_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->on_Seconds_To_Input_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->on_Addzero_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->on_CurrentTime_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->timeclock(); break;
        case 53: _t->on_Stopwatch_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->on_Milliseconds_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->on_Countdown_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->on_Browsefile_Button_clicked(); break;
        case 57: _t->on_BrowseFile_Input_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 58: _t->on_Speed_CheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->on_Speed_Input_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->ifclockinputchanged(); break;
        case 61: _t->on_TimerPreset_Checkbox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->on_FiveP_Radio_clicked(); break;
        case 63: _t->on_TenP_Radio_clicked(); break;
        case 64: _t->on_FifteenP_Radio_clicked(); break;
        case 65: _t->on_TwentyP_Radio_clicked(); break;
        case 66: _t->xml(); break;
        case 67: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: _t->writexml(); break;
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
        if (_id < 69)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 69;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 69)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 69;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
