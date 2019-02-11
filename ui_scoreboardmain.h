/********************************************************************************
** Form generated from reading UI file 'scoreboardmain.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREBOARDMAIN_H
#define UI_SCOREBOARDMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScoreboardMain
{
public:
    QAction *About_ActionBar;
    QAction *Hotkey_ActionBar;
    QAction *ChangeLog_ActionBar;
    QAction *actionXxRocketshotxX;
    QAction *actionSickmind33;
    QAction *actionDonate;
    QWidget *centralWidget;
    QTabWidget *Remote;
    QWidget *tab;
    QPushButton *AwayUp2_Button;
    QPushButton *PeriodUP_Button;
    QSpinBox *Minutes_To_In;
    QLabel *AwayScore_Label;
    QLineEdit *AwayName_Input;
    QSpinBox *Seconds_To_Input;
    QSpinBox *Seconds_Input;
    QPushButton *Update_Team_Button;
    QPushButton *AwayUP_Button;
    QLineEdit *HomeName_Input;
    QPushButton *HomeUP_Button;
    QPushButton *HomeUP2_Button;
    QPushButton *AwayDOWN_Button;
    QPushButton *PeriodDOWN_Button;
    QLabel *Testing;
    QLabel *Timeset_Label;
    QLabel *Clock_Label;
    QLabel *HomeScore_Label;
    QPushButton *Reset_Button;
    QPushButton *Start_Button;
    QLabel *Period_Label;
    QPushButton *HomeDOWN_Button;
    QSpinBox *Minutes_Input;
    QPushButton *Swap_Button;
    QPushButton *Reset_Score_Button;
    QCheckBox *To_Checkbox;
    QPushButton *StopMusic_Button;
    QLabel *Clock_Symble_Label;
    QLabel *Clock_Symble_Label_2;
    QWidget *S;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *Milliseconds_Checkbox;
    QLabel *Millisecond_Detail;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *Addzero_Checkbox;
    QLabel *Addzero_Detail;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *Hotkey_Checkbox;
    QPushButton *Usehotkey_Help;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QFrame *line_5;
    QCheckBox *Countdown_Checkbox;
    QLabel *Countdown_Detail;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *Alway_on_top_Checkbox;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QSpinBox *Speed_Input;
    QCheckBox *Speed_CheckBox;
    QPushButton *SpeedHelp_Button;
    QCheckBox *TimerPreset_Checkbox;
    QRadioButton *FiveP_Radio;
    QRadioButton *TenP_Radio;
    QRadioButton *FifteenP_Radio;
    QRadioButton *TwentyP_Radio;
    QCheckBox *checkBox;
    QFrame *line_10;
    QCheckBox *CurrentTime_Checkbox;
    QCheckBox *Stopwatch_Checkbox;
    QLabel *label_2;
    QWidget *Sound;
    QCheckBox *PlaySound_Checkbox;
    QLineEdit *BrowseFile_Input;
    QPushButton *Browsefile_Button;
    QSlider *horizontalSlider;
    QLabel *label;
    QPushButton *TestSound_Button;
    QLabel *Warning_Label;
    QSlider *SoundSpeed_Slider;
    QLabel *thumb;
    QWidget *Remote1;
    QLabel *Status;
    QPushButton *pushButton;
    QFrame *line_4;
    QLabel *IP_Label;
    QLabel *IP_Label_2;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QMenu *menuContributers;
    QMenu *menuDonate;

    void setupUi(QMainWindow *ScoreboardMain)
    {
        if (ScoreboardMain->objectName().isEmpty())
            ScoreboardMain->setObjectName(QStringLiteral("ScoreboardMain"));
        ScoreboardMain->resize(638, 587);
        ScoreboardMain->setStyleSheet(QStringLiteral("alternate-background-color: rgb(253, 253, 253);"));
        About_ActionBar = new QAction(ScoreboardMain);
        About_ActionBar->setObjectName(QStringLiteral("About_ActionBar"));
        About_ActionBar->setEnabled(true);
        Hotkey_ActionBar = new QAction(ScoreboardMain);
        Hotkey_ActionBar->setObjectName(QStringLiteral("Hotkey_ActionBar"));
        ChangeLog_ActionBar = new QAction(ScoreboardMain);
        ChangeLog_ActionBar->setObjectName(QStringLiteral("ChangeLog_ActionBar"));
        actionXxRocketshotxX = new QAction(ScoreboardMain);
        actionXxRocketshotxX->setObjectName(QStringLiteral("actionXxRocketshotxX"));
        actionSickmind33 = new QAction(ScoreboardMain);
        actionSickmind33->setObjectName(QStringLiteral("actionSickmind33"));
        actionDonate = new QAction(ScoreboardMain);
        actionDonate->setObjectName(QStringLiteral("actionDonate"));
        QFont font;
        font.setPointSize(8);
        actionDonate->setFont(font);
        centralWidget = new QWidget(ScoreboardMain);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        Remote = new QTabWidget(centralWidget);
        Remote->setObjectName(QStringLiteral("Remote"));
        Remote->setEnabled(true);
        Remote->setGeometry(QRect(20, 10, 591, 511));
        Remote->setLayoutDirection(Qt::LeftToRight);
        Remote->setStyleSheet(QStringLiteral(""));
        Remote->setTabPosition(QTabWidget::North);
        Remote->setTabShape(QTabWidget::Rounded);
        Remote->setDocumentMode(false);
        Remote->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setStyleSheet(QStringLiteral(""));
        AwayUp2_Button = new QPushButton(tab);
        AwayUp2_Button->setObjectName(QStringLiteral("AwayUp2_Button"));
        AwayUp2_Button->setGeometry(QRect(500, 140, 71, 31));
        QFont font1;
        font1.setPointSize(11);
        AwayUp2_Button->setFont(font1);
        PeriodUP_Button = new QPushButton(tab);
        PeriodUP_Button->setObjectName(QStringLiteral("PeriodUP_Button"));
        PeriodUP_Button->setGeometry(QRect(260, 310, 61, 31));
        Minutes_To_In = new QSpinBox(tab);
        Minutes_To_In->setObjectName(QStringLiteral("Minutes_To_In"));
        Minutes_To_In->setGeometry(QRect(270, 220, 42, 22));
        AwayScore_Label = new QLabel(tab);
        AwayScore_Label->setObjectName(QStringLiteral("AwayScore_Label"));
        AwayScore_Label->setGeometry(QRect(440, 180, 121, 71));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(48);
        AwayScore_Label->setFont(font2);
        AwayName_Input = new QLineEdit(tab);
        AwayName_Input->setObjectName(QStringLiteral("AwayName_Input"));
        AwayName_Input->setGeometry(QRect(430, 100, 141, 31));
        QFont font3;
        font3.setPointSize(14);
        AwayName_Input->setFont(font3);
        AwayName_Input->setMaxLength(30);
        Seconds_To_Input = new QSpinBox(tab);
        Seconds_To_Input->setObjectName(QStringLiteral("Seconds_To_Input"));
        Seconds_To_Input->setGeometry(QRect(340, 220, 42, 22));
        Seconds_To_Input->setMaximum(59);
        Seconds_Input = new QSpinBox(tab);
        Seconds_Input->setObjectName(QStringLiteral("Seconds_Input"));
        Seconds_Input->setGeometry(QRect(340, 190, 42, 22));
        Seconds_Input->setMaximum(59);
        Update_Team_Button = new QPushButton(tab);
        Update_Team_Button->setObjectName(QStringLiteral("Update_Team_Button"));
        Update_Team_Button->setGeometry(QRect(10, 350, 101, 51));
        QFont font4;
        font4.setPointSize(10);
        Update_Team_Button->setFont(font4);
        Update_Team_Button->setStyleSheet(QStringLiteral("alternate-background-color: rgb(85, 170, 127);"));
        AwayUP_Button = new QPushButton(tab);
        AwayUP_Button->setObjectName(QStringLiteral("AwayUP_Button"));
        AwayUP_Button->setGeometry(QRect(430, 140, 71, 31));
        HomeName_Input = new QLineEdit(tab);
        HomeName_Input->setObjectName(QStringLiteral("HomeName_Input"));
        HomeName_Input->setGeometry(QRect(10, 100, 141, 31));
        HomeName_Input->setFont(font3);
        HomeName_Input->setMaxLength(30);
        HomeUP_Button = new QPushButton(tab);
        HomeUP_Button->setObjectName(QStringLiteral("HomeUP_Button"));
        HomeUP_Button->setGeometry(QRect(10, 140, 71, 31));
        HomeUP2_Button = new QPushButton(tab);
        HomeUP2_Button->setObjectName(QStringLiteral("HomeUP2_Button"));
        HomeUP2_Button->setGeometry(QRect(80, 140, 71, 31));
        HomeUP2_Button->setFont(font1);
        AwayDOWN_Button = new QPushButton(tab);
        AwayDOWN_Button->setObjectName(QStringLiteral("AwayDOWN_Button"));
        AwayDOWN_Button->setGeometry(QRect(430, 260, 71, 31));
        PeriodDOWN_Button = new QPushButton(tab);
        PeriodDOWN_Button->setObjectName(QStringLiteral("PeriodDOWN_Button"));
        PeriodDOWN_Button->setGeometry(QRect(260, 410, 61, 31));
        Testing = new QLabel(tab);
        Testing->setObjectName(QStringLiteral("Testing"));
        Testing->setGeometry(QRect(10, 450, 541, 20));
        Timeset_Label = new QLabel(tab);
        Timeset_Label->setObjectName(QStringLiteral("Timeset_Label"));
        Timeset_Label->setGeometry(QRect(190, 190, 61, 21));
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        Timeset_Label->setFont(font5);
        Clock_Label = new QLabel(tab);
        Clock_Label->setObjectName(QStringLiteral("Clock_Label"));
        Clock_Label->setGeometry(QRect(150, 90, 281, 91));
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setPointSize(55);
        font6.setBold(false);
        font6.setWeight(50);
        Clock_Label->setFont(font6);
        HomeScore_Label = new QLabel(tab);
        HomeScore_Label->setObjectName(QStringLiteral("HomeScore_Label"));
        HomeScore_Label->setGeometry(QRect(20, 180, 121, 71));
        HomeScore_Label->setFont(font2);
        Reset_Button = new QPushButton(tab);
        Reset_Button->setObjectName(QStringLiteral("Reset_Button"));
        Reset_Button->setGeometry(QRect(120, 350, 101, 51));
        Reset_Button->setFont(font4);
        Start_Button = new QPushButton(tab);
        Start_Button->setObjectName(QStringLiteral("Start_Button"));
        Start_Button->setGeometry(QRect(220, 20, 121, 71));
        QFont font7;
        font7.setFamily(QStringLiteral("Microsoft JhengHei UI"));
        font7.setPointSize(20);
        font7.setBold(false);
        font7.setWeight(50);
        Start_Button->setFont(font7);
        Start_Button->setStyleSheet(QStringLiteral(""));
        Period_Label = new QLabel(tab);
        Period_Label->setObjectName(QStringLiteral("Period_Label"));
        Period_Label->setGeometry(QRect(270, 340, 71, 71));
        Period_Label->setFont(font2);
        HomeDOWN_Button = new QPushButton(tab);
        HomeDOWN_Button->setObjectName(QStringLiteral("HomeDOWN_Button"));
        HomeDOWN_Button->setGeometry(QRect(10, 260, 71, 31));
        Minutes_Input = new QSpinBox(tab);
        Minutes_Input->setObjectName(QStringLiteral("Minutes_Input"));
        Minutes_Input->setGeometry(QRect(270, 190, 42, 22));
        Swap_Button = new QPushButton(tab);
        Swap_Button->setObjectName(QStringLiteral("Swap_Button"));
        Swap_Button->setGeometry(QRect(470, 350, 101, 51));
        Swap_Button->setFont(font4);
        Reset_Score_Button = new QPushButton(tab);
        Reset_Score_Button->setObjectName(QStringLiteral("Reset_Score_Button"));
        Reset_Score_Button->setGeometry(QRect(360, 350, 101, 51));
        Reset_Score_Button->setFont(font4);
        Reset_Score_Button->setStyleSheet(QStringLiteral(""));
        To_Checkbox = new QCheckBox(tab);
        To_Checkbox->setObjectName(QStringLiteral("To_Checkbox"));
        To_Checkbox->setGeometry(QRect(160, 220, 101, 21));
        To_Checkbox->setFont(font5);
        StopMusic_Button = new QPushButton(tab);
        StopMusic_Button->setObjectName(QStringLiteral("StopMusic_Button"));
        StopMusic_Button->setGeometry(QRect(230, 270, 121, 23));
        Clock_Symble_Label = new QLabel(tab);
        Clock_Symble_Label->setObjectName(QStringLiteral("Clock_Symble_Label"));
        Clock_Symble_Label->setGeometry(QRect(320, 190, 20, 21));
        QFont font8;
        font8.setFamily(QStringLiteral("Arial"));
        font8.setPointSize(18);
        font8.setBold(true);
        font8.setWeight(75);
        Clock_Symble_Label->setFont(font8);
        Clock_Symble_Label_2 = new QLabel(tab);
        Clock_Symble_Label_2->setObjectName(QStringLiteral("Clock_Symble_Label_2"));
        Clock_Symble_Label_2->setGeometry(QRect(320, 220, 20, 21));
        Clock_Symble_Label_2->setFont(font8);
        Remote->addTab(tab, QString());
        S = new QWidget();
        S->setObjectName(QStringLiteral("S"));
        verticalLayoutWidget = new QWidget(S);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(420, 60, 172, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Milliseconds_Checkbox = new QCheckBox(verticalLayoutWidget);
        Milliseconds_Checkbox->setObjectName(QStringLiteral("Milliseconds_Checkbox"));

        verticalLayout->addWidget(Milliseconds_Checkbox);

        Millisecond_Detail = new QLabel(verticalLayoutWidget);
        Millisecond_Detail->setObjectName(QStringLiteral("Millisecond_Detail"));

        verticalLayout->addWidget(Millisecond_Detail);

        verticalLayoutWidget_2 = new QWidget(S);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(420, 110, 166, 61));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Addzero_Checkbox = new QCheckBox(verticalLayoutWidget_2);
        Addzero_Checkbox->setObjectName(QStringLiteral("Addzero_Checkbox"));

        verticalLayout_2->addWidget(Addzero_Checkbox);

        Addzero_Detail = new QLabel(verticalLayoutWidget_2);
        Addzero_Detail->setObjectName(QStringLiteral("Addzero_Detail"));

        verticalLayout_2->addWidget(Addzero_Detail);

        verticalLayoutWidget_4 = new QWidget(S);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(0, 110, 161, 66));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Hotkey_Checkbox = new QCheckBox(verticalLayoutWidget_4);
        Hotkey_Checkbox->setObjectName(QStringLiteral("Hotkey_Checkbox"));

        verticalLayout_4->addWidget(Hotkey_Checkbox);

        Usehotkey_Help = new QPushButton(verticalLayoutWidget_4);
        Usehotkey_Help->setObjectName(QStringLiteral("Usehotkey_Help"));

        verticalLayout_4->addWidget(Usehotkey_Help);

        verticalLayoutWidget_5 = new QWidget(S);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(0, 0, 581, 61));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        line_5 = new QFrame(verticalLayoutWidget_5);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_5);

        Countdown_Checkbox = new QCheckBox(verticalLayoutWidget_5);
        Countdown_Checkbox->setObjectName(QStringLiteral("Countdown_Checkbox"));

        verticalLayout_5->addWidget(Countdown_Checkbox);

        Countdown_Detail = new QLabel(verticalLayoutWidget_5);
        Countdown_Detail->setObjectName(QStringLiteral("Countdown_Detail"));

        verticalLayout_5->addWidget(Countdown_Detail);

        verticalLayoutWidget_6 = new QWidget(S);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(0, 60, 151, 51));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        Alway_on_top_Checkbox = new QCheckBox(verticalLayoutWidget_6);
        Alway_on_top_Checkbox->setObjectName(QStringLiteral("Alway_on_top_Checkbox"));

        verticalLayout_6->addWidget(Alway_on_top_Checkbox);

        line = new QFrame(S);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(150, 60, 16, 121));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(S);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 100, 581, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(S);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 50, 581, 21));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(S);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(270, 110, 20, 71));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(S);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(400, 60, 16, 121));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(S);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(570, 0, 20, 181));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(S);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(0, 170, 581, 16));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        Speed_Input = new QSpinBox(S);
        Speed_Input->setObjectName(QStringLiteral("Speed_Input"));
        Speed_Input->setGeometry(QRect(260, 70, 51, 31));
        Speed_Input->setMinimum(700);
        Speed_Input->setMaximum(3000);
        Speed_CheckBox = new QCheckBox(S);
        Speed_CheckBox->setObjectName(QStringLiteral("Speed_CheckBox"));
        Speed_CheckBox->setGeometry(QRect(170, 70, 91, 31));
        SpeedHelp_Button = new QPushButton(S);
        SpeedHelp_Button->setObjectName(QStringLiteral("SpeedHelp_Button"));
        SpeedHelp_Button->setGeometry(QRect(320, 70, 75, 31));
        TimerPreset_Checkbox = new QCheckBox(S);
        TimerPreset_Checkbox->setObjectName(QStringLiteral("TimerPreset_Checkbox"));
        TimerPreset_Checkbox->setGeometry(QRect(20, 190, 171, 17));
        FiveP_Radio = new QRadioButton(S);
        FiveP_Radio->setObjectName(QStringLiteral("FiveP_Radio"));
        FiveP_Radio->setGeometry(QRect(80, 220, 82, 17));
        TenP_Radio = new QRadioButton(S);
        TenP_Radio->setObjectName(QStringLiteral("TenP_Radio"));
        TenP_Radio->setGeometry(QRect(170, 220, 82, 17));
        FifteenP_Radio = new QRadioButton(S);
        FifteenP_Radio->setObjectName(QStringLiteral("FifteenP_Radio"));
        FifteenP_Radio->setGeometry(QRect(260, 220, 82, 17));
        TwentyP_Radio = new QRadioButton(S);
        TwentyP_Radio->setObjectName(QStringLiteral("TwentyP_Radio"));
        TwentyP_Radio->setGeometry(QRect(350, 220, 82, 17));
        checkBox = new QCheckBox(S);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 270, 70, 17));
        line_10 = new QFrame(S);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(0, 250, 581, 16));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        CurrentTime_Checkbox = new QCheckBox(S);
        CurrentTime_Checkbox->setObjectName(QStringLiteral("CurrentTime_Checkbox"));
        CurrentTime_Checkbox->setGeometry(QRect(288, 130, 121, 20));
        Stopwatch_Checkbox = new QCheckBox(S);
        Stopwatch_Checkbox->setObjectName(QStringLiteral("Stopwatch_Checkbox"));
        Stopwatch_Checkbox->setGeometry(QRect(170, 130, 111, 20));
        label_2 = new QLabel(S);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 300, 451, 16));
        Remote->addTab(S, QString());
        Sound = new QWidget();
        Sound->setObjectName(QStringLiteral("Sound"));
        Sound->setEnabled(true);
        PlaySound_Checkbox = new QCheckBox(Sound);
        PlaySound_Checkbox->setObjectName(QStringLiteral("PlaySound_Checkbox"));
        PlaySound_Checkbox->setEnabled(true);
        PlaySound_Checkbox->setGeometry(QRect(10, 10, 121, 41));
        PlaySound_Checkbox->setFont(font3);
        BrowseFile_Input = new QLineEdit(Sound);
        BrowseFile_Input->setObjectName(QStringLiteral("BrowseFile_Input"));
        BrowseFile_Input->setEnabled(false);
        BrowseFile_Input->setGeometry(QRect(10, 60, 221, 21));
        Browsefile_Button = new QPushButton(Sound);
        Browsefile_Button->setObjectName(QStringLiteral("Browsefile_Button"));
        Browsefile_Button->setEnabled(false);
        Browsefile_Button->setGeometry(QRect(240, 61, 75, 21));
        horizontalSlider = new QSlider(Sound);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(false);
        horizontalSlider->setGeometry(QRect(10, 120, 561, 31));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(Sound);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 100, 71, 16));
        label->setFont(font3);
        TestSound_Button = new QPushButton(Sound);
        TestSound_Button->setObjectName(QStringLiteral("TestSound_Button"));
        TestSound_Button->setEnabled(false);
        TestSound_Button->setGeometry(QRect(320, 60, 75, 23));
        Warning_Label = new QLabel(Sound);
        Warning_Label->setObjectName(QStringLiteral("Warning_Label"));
        Warning_Label->setGeometry(QRect(40, 220, 481, 71));
        QFont font9;
        font9.setFamily(QStringLiteral("Arial"));
        font9.setPointSize(36);
        Warning_Label->setFont(font9);
        Warning_Label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        SoundSpeed_Slider = new QSlider(Sound);
        SoundSpeed_Slider->setObjectName(QStringLiteral("SoundSpeed_Slider"));
        SoundSpeed_Slider->setEnabled(false);
        SoundSpeed_Slider->setGeometry(QRect(10, 170, 561, 31));
        SoundSpeed_Slider->setMinimum(-10);
        SoundSpeed_Slider->setMaximum(10);
        SoundSpeed_Slider->setOrientation(Qt::Horizontal);
        thumb = new QLabel(Sound);
        thumb->setObjectName(QStringLiteral("thumb"));
        thumb->setGeometry(QRect(190, 200, 161, 121));
        Remote->addTab(Sound, QString());
        Remote1 = new QWidget();
        Remote1->setObjectName(QStringLiteral("Remote1"));
        Status = new QLabel(Remote1);
        Status->setObjectName(QStringLiteral("Status"));
        Status->setGeometry(QRect(0, 260, 581, 71));
        QFont font10;
        font10.setPointSize(18);
        Status->setFont(font10);
        Status->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        pushButton = new QPushButton(Remote1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 181, 23));
        line_4 = new QFrame(Remote1);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(0, 250, 581, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        IP_Label = new QLabel(Remote1);
        IP_Label->setObjectName(QStringLiteral("IP_Label"));
        IP_Label->setGeometry(QRect(10, 210, 561, 16));
        IP_Label->setFont(font3);
        IP_Label_2 = new QLabel(Remote1);
        IP_Label_2->setObjectName(QStringLiteral("IP_Label_2"));
        IP_Label_2->setGeometry(QRect(10, 230, 561, 21));
        QFont font11;
        font11.setPointSize(12);
        IP_Label_2->setFont(font11);
        Remote->addTab(Remote1, QString());
        ScoreboardMain->setCentralWidget(centralWidget);
        Remote->raise();
        To_Checkbox->raise();
        Minutes_To_In->raise();
        Clock_Symble_Label->raise();
        Reset_Button->raise();
        Start_Button->raise();
        AwayName_Input->raise();
        Minutes_Input->raise();
        HomeScore_Label->raise();
        Swap_Button->raise();
        Seconds_To_Input->raise();
        PeriodDOWN_Button->raise();
        Timeset_Label->raise();
        Period_Label->raise();
        HomeUP2_Button->raise();
        HomeName_Input->raise();
        AwayDOWN_Button->raise();
        PeriodUP_Button->raise();
        Seconds_Input->raise();
        Update_Team_Button->raise();
        HomeUP_Button->raise();
        AwayUP_Button->raise();
        HomeDOWN_Button->raise();
        Clock_Label->raise();
        Testing->raise();
        AwayUp2_Button->raise();
        Clock_Symble_Label_2->raise();
        StopMusic_Button->raise();
        Reset_Score_Button->raise();
        menuBar = new QMenuBar(ScoreboardMain);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 638, 31));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuContributers = new QMenu(menuBar);
        menuContributers->setObjectName(QStringLiteral("menuContributers"));
        menuDonate = new QMenu(menuBar);
        menuDonate->setObjectName(QStringLiteral("menuDonate"));
        QFont font12;
        font12.setFamily(QStringLiteral("Segoe UI Light"));
        font12.setPointSize(14);
        font12.setBold(true);
        font12.setWeight(75);
        menuDonate->setFont(font12);
        ScoreboardMain->setMenuBar(menuBar);

        menuBar->addAction(menuAbout->menuAction());
        menuBar->addAction(menuContributers->menuAction());
        menuBar->addAction(menuDonate->menuAction());
        menuAbout->addAction(About_ActionBar);
        menuAbout->addAction(Hotkey_ActionBar);
        menuAbout->addAction(ChangeLog_ActionBar);
        menuContributers->addAction(actionXxRocketshotxX);
        menuContributers->addAction(actionSickmind33);
        menuDonate->addAction(actionDonate);

        retranslateUi(ScoreboardMain);

        Remote->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ScoreboardMain);
    } // setupUi

    void retranslateUi(QMainWindow *ScoreboardMain)
    {
        ScoreboardMain->setWindowTitle(QApplication::translate("ScoreboardMain", "MainWindow", nullptr));
        About_ActionBar->setText(QApplication::translate("ScoreboardMain", "&About", nullptr));
        Hotkey_ActionBar->setText(QApplication::translate("ScoreboardMain", "&Hotkey Help", nullptr));
        ChangeLog_ActionBar->setText(QApplication::translate("ScoreboardMain", "&Changelog", nullptr));
        actionXxRocketshotxX->setText(QApplication::translate("ScoreboardMain", "&XxRocketshotxX", nullptr));
        actionSickmind33->setText(QApplication::translate("ScoreboardMain", "&Sickmind33", nullptr));
        actionDonate->setText(QApplication::translate("ScoreboardMain", "&Donate", nullptr));
        AwayUp2_Button->setText(QApplication::translate("ScoreboardMain", "+2", nullptr));
        PeriodUP_Button->setText(QApplication::translate("ScoreboardMain", "UP", nullptr));
        AwayScore_Label->setText(QApplication::translate("ScoreboardMain", "0", nullptr));
        AwayName_Input->setText(QApplication::translate("ScoreboardMain", "Away", nullptr));
        Update_Team_Button->setText(QApplication::translate("ScoreboardMain", "Update Team", nullptr));
        AwayUP_Button->setText(QApplication::translate("ScoreboardMain", "+", nullptr));
        HomeName_Input->setText(QApplication::translate("ScoreboardMain", "Home", nullptr));
        HomeUP_Button->setText(QApplication::translate("ScoreboardMain", "+", nullptr));
        HomeUP2_Button->setText(QApplication::translate("ScoreboardMain", "+2", nullptr));
        AwayDOWN_Button->setText(QApplication::translate("ScoreboardMain", "-", nullptr));
        PeriodDOWN_Button->setText(QApplication::translate("ScoreboardMain", "DOWN", nullptr));
        Testing->setText(QApplication::translate("ScoreboardMain", "Error Output:", nullptr));
        Timeset_Label->setText(QApplication::translate("ScoreboardMain", "Time Set", nullptr));
        Clock_Label->setText(QApplication::translate("ScoreboardMain", "  00:00", nullptr));
        HomeScore_Label->setText(QApplication::translate("ScoreboardMain", "0", nullptr));
        Reset_Button->setText(QApplication::translate("ScoreboardMain", "Reset Timer", nullptr));
        Start_Button->setText(QApplication::translate("ScoreboardMain", "Start", nullptr));
        Period_Label->setText(QApplication::translate("ScoreboardMain", "1", nullptr));
        HomeDOWN_Button->setText(QApplication::translate("ScoreboardMain", "-", nullptr));
        Swap_Button->setText(QApplication::translate("ScoreboardMain", "Swap", nullptr));
        Reset_Score_Button->setText(QApplication::translate("ScoreboardMain", "Reset Score", nullptr));
        To_Checkbox->setText(QApplication::translate("ScoreboardMain", "To(optional)", nullptr));
        StopMusic_Button->setText(QApplication::translate("ScoreboardMain", "Stop Sound", nullptr));
        Clock_Symble_Label->setText(QApplication::translate("ScoreboardMain", ":", nullptr));
        Clock_Symble_Label_2->setText(QApplication::translate("ScoreboardMain", ":", nullptr));
        Remote->setTabText(Remote->indexOf(tab), QApplication::translate("ScoreboardMain", "Scoreboard", nullptr));
        Milliseconds_Checkbox->setText(QApplication::translate("ScoreboardMain", "Milliseconds", nullptr));
        Millisecond_Detail->setText(QApplication::translate("ScoreboardMain", "Millisecond for 1min -> 0sc", nullptr));
        Addzero_Checkbox->setText(QApplication::translate("ScoreboardMain", "Add zero", nullptr));
        Addzero_Detail->setText(QApplication::translate("ScoreboardMain", "Example ->03:00 ->05:00", nullptr));
        Hotkey_Checkbox->setText(QApplication::translate("ScoreboardMain", "Use Hotkey", nullptr));
        Usehotkey_Help->setText(QApplication::translate("ScoreboardMain", "Help", nullptr));
        Countdown_Checkbox->setText(QApplication::translate("ScoreboardMain", "Countdown Input Box", nullptr));
        Countdown_Detail->setText(QApplication::translate("ScoreboardMain", "Enables to input box to countdown to make it easy to change if the timer is off by seconds", nullptr));
        Alway_on_top_Checkbox->setText(QApplication::translate("ScoreboardMain", "Always on top", nullptr));
        Speed_CheckBox->setText(QApplication::translate("ScoreboardMain", "Speed:", nullptr));
        SpeedHelp_Button->setText(QApplication::translate("ScoreboardMain", "Help", nullptr));
        TimerPreset_Checkbox->setText(QApplication::translate("ScoreboardMain", "Preset Timer Reset", nullptr));
        FiveP_Radio->setText(QApplication::translate("ScoreboardMain", "5:00", nullptr));
        TenP_Radio->setText(QApplication::translate("ScoreboardMain", "10:00", nullptr));
        FifteenP_Radio->setText(QApplication::translate("ScoreboardMain", "15:00", nullptr));
        TwentyP_Radio->setText(QApplication::translate("ScoreboardMain", "20:00", nullptr));
        checkBox->setText(QApplication::translate("ScoreboardMain", "XML", nullptr));
        CurrentTime_Checkbox->setText(QApplication::translate("ScoreboardMain", "Current Time", nullptr));
        Stopwatch_Checkbox->setText(QApplication::translate("ScoreboardMain", "Stopwatch", nullptr));
        label_2->setText(QApplication::translate("ScoreboardMain", "Output to a XML File (If this is on, it will not output to the .txt files)", nullptr));
        Remote->setTabText(Remote->indexOf(S), QApplication::translate("ScoreboardMain", "Setting", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        Sound->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        PlaySound_Checkbox->setText(QApplication::translate("ScoreboardMain", "Play Sound", nullptr));
        Browsefile_Button->setText(QApplication::translate("ScoreboardMain", "Browse File", nullptr));
        label->setText(QApplication::translate("ScoreboardMain", "Volume:", nullptr));
        TestSound_Button->setText(QApplication::translate("ScoreboardMain", "Test Sound", nullptr));
        Warning_Label->setText(QApplication::translate("ScoreboardMain", "Please stop the sound", nullptr));
        thumb->setText(QString());
        Remote->setTabText(Remote->indexOf(Sound), QApplication::translate("ScoreboardMain", "Sound", nullptr));
        Status->setText(QApplication::translate("ScoreboardMain", "Status: Not Connected", nullptr));
        pushButton->setText(QApplication::translate("ScoreboardMain", "Enable", nullptr));
        IP_Label->setText(QApplication::translate("ScoreboardMain", "Default IP: 127.0.0.1/Localhost | Port: 1234", nullptr));
        IP_Label_2->setText(QApplication::translate("ScoreboardMain", "If you want to remote over network please portfoward or use Hamachi", nullptr));
        Remote->setTabText(Remote->indexOf(Remote1), QApplication::translate("ScoreboardMain", "Remote", nullptr));
        menuAbout->setTitle(QApplication::translate("ScoreboardMain", "He&lp", nullptr));
        menuContributers->setTitle(QApplication::translate("ScoreboardMain", "&Contributers", nullptr));
        menuDonate->setTitle(QApplication::translate("ScoreboardMain", "&Donate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScoreboardMain: public Ui_ScoreboardMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREBOARDMAIN_H
