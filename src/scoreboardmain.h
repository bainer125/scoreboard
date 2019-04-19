#ifndef SCOREBOARDMAIN_H
#define SCOREBOARDMAIN_H

#include <QMainWindow>
#include <QTimer>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMediaPlayer>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QtXml>
#include <QDialog>
#include <src/overlay.h>


namespace Ui {
class ScoreboardMain;
}

class ScoreboardMain : public QMainWindow
{
    Q_OBJECT

public slots:
public:
    explicit ScoreboardMain(QWidget *parent = 0);
    ~ScoreboardMain();
    void Changed();

private slots:

    void on_show_score_clicked();
    
    void on_Reset_All_clicked();
    
    void on_End_Game_Button_clicked();
    
    void closeEvent (QCloseEvent *);
    
    void on_Update_Pens_clicked();
    
    void Update_Penalties();
    
    void Penalty_Timer();
    
    void on_HP1_clicked();
    
    void on_HP2_clicked();
    
    void on_AP1_clicked();
    
    void on_AP2_clicked();
    
    void on_HomeUP_Button_clicked();

    void Opened();

    void WarningBox();
    
    void on_Minute10up_clicked();
    
    void on_Minute10down_clicked();
    
    void on_Minute1up_clicked();
    
    void on_Minute1down_clicked();
    
    void on_Second10up_clicked();
    
    void on_Second10down_clicked();
    
    void on_Second1up_clicked();

    void on_Addzero_Checkbox_clicked(bool add);

    void on_Milliseconds_Checkbox_clicked(bool mill);

    void on_Speed_CheckBox_clicked(bool checked11);

    void on_Speed_Input_valueChanged(int arg13);

    void on_Second1down_clicked();
    
    void on_MS10up_clicked();
    
    void on_MS10down_clicked();
    
    void on_Update_Timer_clicked();
    
    void updateClock();
    
    void updateClockView();
    
    void on_Intermission_Button_clicked();

    void on_HomeUP2_Button_clicked();

    void on_HomeDOWN_Button_clicked();

    void on_AwayUP_Button_clicked();

    void on_AwayUp2_Button_clicked();

    void on_AwayDOWN_Button_clicked();

    void on_PeriodUP_Button_clicked();

    void on_PeriodDOWN_Button_clicked();

    void on_Update_Team_Button_clicked();

    void on_Reset_Score_Button_clicked();

    void on_Swap_Button_clicked();

    void on_Alway_on_top_Checkbox_clicked(bool alwayson);

    void on_Start_Button_clicked();

    void Stopwatch_Control();

    void Timer_Control();

    void Stopwatch();

    void Timer();

    void on_Reset_Button_clicked();

    void on_To_Checkbox_clicked(bool to);

    void on_Minutes_Input_valueChanged(int arg0);

    void on_Seconds_Input_valueChanged(int arg1);

    void on_Minutes_To_In_valueChanged(int arg2);

    void on_Seconds_To_Input_valueChanged(int arg3);

    void on_CurrentTime_Checkbox_clicked(bool current);

    void timeclock();

    void on_Stopwatch_Checkbox_clicked(bool stop);

    void on_Countdown_Checkbox_clicked(bool countdown);

    void on_About_ActionBar_triggered();

    void on_ChangeLog_ActionBar_triggered();

    void on_pushButton_clicked();

    void acceptConnection();

    void startRead();

    void on_actionSickmind33_triggered();

    void on_PlaySound_Checkbox_clicked(bool checked10);

    void on_Browsefile_Button_clicked();

    void on_BrowseFile_Input_textChanged(const QString &arg1);

    void on_StopMusic_Button_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_TestSound_Button_clicked();

    void on_SpeedHelp_Button_clicked();

    void ifclockinputchanged();

    void on_TimerPreset_Checkbox_clicked(bool checked15);

    void on_FiveP_Radio_clicked();

    void on_TenP_Radio_clicked();

    void on_FifteenP_Radio_clicked();

    void on_TwentyP_Radio_clicked();

    void on_actionXxRocketshotxX_triggered();

    void xml();

    void on_checkBox_clicked(bool checked20);

    void writexml();

    void replyFinished(QNetworkReply *reply);

    void on_SoundSpeed_Slider_sliderMoved(int slidepos);

    void putduration();

    void on_comboTheme_currentTextChanged(const QString &arg1);

protected:
private:
    Overlay *ol;
    Ui::ScoreboardMain *ui;
    QTimer *clock;
    QTimer *currenttime;
    QTimer *hotkey;
    QTcpServer server;
    QTcpSocket* client;
    QNetworkAccessManager *manager;
    QMediaPlayer *player;
};

#endif // SCOREBOARDMAIN_H
