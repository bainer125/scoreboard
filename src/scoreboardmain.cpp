#include "scoreboardmain.h"
#include "ui_scoreboardmain.h"
#include "overlay.h"
#include "ui_overlay.h"
#include <fstream>
#include <ctime>
#include <QTimer>
#include <QString>
#include <string>
#include <QMessageBox>
#include <QFileDialog>
#include <sstream>
#include <QMediaMetaData>
#include <dirent.h>
#include <iostream>
#include <list>
#include <vector>
#include <QGraphicsDropShadowEffect>
#include <QGraphicsEffect>
#include <QObject>
#include <QShortcut>
#include <algorithm>
#include <cmath>
#include <QCloseEvent>

using namespace std;

static int Home_Score = 0, Away_Score = 0; //Team Score integer
static int Period = 1, lastPeriod = 0; //Period integer | Default = 1, last period value
static int minu = 0, seco = 0, mseco = 0; //Minutes, Seconds, and Milliseconds integer
static int hp1m = 0, hp2m = 0, hp1s = 0, hp2s = 0, ap1m = 0, ap2m = 0, ap1s = 0, ap2s = 0; //Penalty times
static int hp1=0, hp2=0, ap1=0, ap2=0; //Penalty checkboxes
static int mins = 0, secs = 0; //Used for To_input
static int saved_speed = 0; //Stored speed integer
static int speed = 100; //Speed integer | Default = 1000 (1seconds) | Milliseconds = 1000(0.1seconds)
static int Clock_button = 0; //Start/Stop button
static int Normal_Speed = 100, Millisecond_Speed = 93;
static int PresetRadio = 4; //clock reset value

static bool many = false; //For milliseconds register
static bool secflag = false; //when ms = 0 set flag
static bool input_stop = false; //Stop getting the number from the input
static bool getinput = false;
static bool to_switch; //On/Off for To_input
static bool Milliseconds = true, Minute_Zero = false, Stopwatch_input = false; //On/Off for Milliseconds, Add zero to minute, Hotkey, Stopwatch
static bool presetbool = true; //Preset timer
static bool SecretIanButton = false; //Secret Ian Button

static string minutes_zero = "", seconds_zero = ""; //For 9 <-> 0 | Example: 09 05
static string home_color = "";
static string away_color = "";
static string Home_Name = "", Away_Name = ""; //Name for Home, Away
static string clock_symbol = ":"; //Clock Symbol | Default = : | Milliseconds = .
static string Window_Name = "Scoreboard Control Panel"; //Please Change this after a update!
static QString clock_text = "00:00";   //the clock text

ScoreboardMain::ScoreboardMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ScoreboardMain)
{
    //Setup all the UIs
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowStaysOnTopHint);
    ol = new Overlay(NULL);
    ol->show();
    ol->lower();

    ui->Start_Button->setShortcut(QKeySequence(Qt::Key_Space));
    ScoreboardMain::Opened(); //Declares/Resets Opened() DO NOT DELETE
}

ScoreboardMain::~ScoreboardMain()
{
    delete ui;
}

void ScoreboardMain::Opened() //Resets all
{
    writexml();

    QDir directory("./Teams");

    QStringList teams = directory.entryList(QDir::Dirs);


    ui->Home_Option->addItems(teams);
    ui->Away_Option->addItems(teams);

    QFont font0 = ui->PeriodUP_Button->font();
    font0.setPointSize(20);
    ui->PeriodUP_Button->setFont(font0);

    QFont font1 = ui->PeriodDOWN_Button->font();
    font1.setPointSize(20);
    ui->PeriodDOWN_Button->setFont(font1);

    QFont font2 = ui->HomeUP_Button->font();
    font2.setPointSize(20);
    ui->HomeUP_Button->setFont(font2);

    QFont font3 = ui->HomeDOWN_Button->font();
    font3.setPointSize(20);
    ui->HomeDOWN_Button->setFont(font3);

    QFont font4 = ui->AwayUP_Button->font();
    font4.setPointSize(20);
    ui->AwayUP_Button->setFont(font4);

    QFont font5 = ui->AwayDOWN_Button->font();
    font5.setPointSize(20);
    ui->AwayDOWN_Button->setFont(font5);

    ui->TimerPreset_Checkbox->setChecked(true);
    this->setFixedSize(this->size());
    this->setWindowTitle(Window_Name.c_str());
    ui->StopMusic_Button->setVisible(false);
    ui->Warning_Label->setVisible(false);
}

void ScoreboardMain::on_Reset_All_clicked()
{
}

int stopreply = 0;


void ScoreboardMain::on_show_score_clicked(){
    if(ui->show_score->isChecked()){
        ol->ScoreboardShow(true);
    }
    else{
        ol->ScoreboardShow(false);
    }
}

void ScoreboardMain::Changed() //Changed Score,etc
{
    if(ui->checkBox->isChecked())
    {
        writexml();
    }

    ui->HomeScore_Label->setText(QString::number(Home_Score));
    ui->AwayScore_Label->setText(QString::number(Away_Score));
    ui->Period_Label->setText(QString::number(Period));
}

void ScoreboardMain::on_HomeUP_Button_clicked() //Home_Up Button
{
    Home_Score++;
    ScoreboardMain::Changed();
    if(ui->pushButton->text() == "Disable")
    {
        client->write(QString("Home_Score:" + QString::number(Home_Score) + "\n").toUtf8());
    }else{
        return;
    }
}

void ScoreboardMain::on_HomeUP2_Button_clicked() //Home_+2 Button
{
    Home_Score+=2;
    ScoreboardMain::Changed();
    if(ui->pushButton->text() == "Disable")
    {
        client->write(QString("Home_Score:" + QString::number(Home_Score) + "\n").toUtf8());
    }else{
        return;
    }
}

void ScoreboardMain::on_HomeDOWN_Button_clicked() //Home_Down Button
{
    Home_Score--;
    ScoreboardMain::Changed();
    if(ui->pushButton->text() == "Disable")
    {
        client->write(QString("Home_Score:" + QString::number(Home_Score) + "\n").toUtf8());
    }else{
        return;
    }
}

void ScoreboardMain::on_AwayUP_Button_clicked() //Away_Up Button
{
    Away_Score++;
    ScoreboardMain::Changed();
    if(ui->pushButton->text() == "Disable")
    {
        client->write(QString("Away_Score:" + QString::number(Away_Score) + "\n").toUtf8());
    }else{
        return;
    }
}

void ScoreboardMain::on_AwayUp2_Button_clicked() //Away_+2 Button
{
    Away_Score+=2;
    ScoreboardMain::Changed();
    if(ui->pushButton->text() == "Disable")
    {
        client->write(QString("Away_Score:" + QString::number(Away_Score) + "\n").toUtf8());
    }else{
        return;
    }
}

void ScoreboardMain::on_AwayDOWN_Button_clicked() //Away_Down Button
{
    Away_Score--;
    ScoreboardMain::Changed();
    if(ui->pushButton->text() == "Disable")
    {
        client->write(QString("Away_Score:" + QString::number(Away_Score) + "\n").toUtf8());
    }else{
        return;
    }
}

void ScoreboardMain::on_PeriodUP_Button_clicked() //Period_Up Button
{
    if(Period<7){
        Period++;
    }
    ScoreboardMain::Changed();
    if(ui->pushButton->text() == "Disable")
    {
        client->write(QString("Period:" + QString::number(Period) + "\n").toUtf8());
    }else{
        return;
    }
}

void ScoreboardMain::on_PeriodDOWN_Button_clicked() //Period_Down Button
{
    if(Period!=1){
        Period--;
    }
    ScoreboardMain::Changed();
    if(ui->pushButton->text() == "Disable")
    {
        client->write(QString("Period:" + QString::number(Period) + "\n").toUtf8());
    }else{
        return;
    }
}

void ScoreboardMain::on_Update_Team_Button_clicked() //Update Team Name Button
{
    QString HomeN = ui->Home_Option->currentText(), AwayN = ui->Away_Option->currentText();
    Home_Name = HomeN.toUtf8().constData(), Away_Name = AwayN.toUtf8().constData();
    if(ui->checkBox->isChecked())
    {
        writexml();
    }
    QString homefile = "./Teams/";
    homefile.append(ui->Home_Option->currentText());
    homefile.append("/color.txt");
    QString awayfile = "./Teams/";
    awayfile.append(ui->Away_Option->currentText());
    awayfile.append("/color.txt");
    ifstream Home_Color(homefile.toUtf8().constData());
    string line;
    if (Home_Color.is_open())
    {
      while ( getline(Home_Color,line) )
      {
          home_color = line;
      }
      Home_Color.close();
    }
    ifstream Away_Color(awayfile.toUtf8().constData());
    if (Away_Color.is_open())
    {
      while ( getline(Away_Color,line) )
      {
          away_color = line;
      }
      Away_Color.close();
    }
    QString homeback = "background: url(./Teams/";
    homeback.append(ui->Home_Option->currentText());
    homeback.append("/itmsn_home.png)");
    QString awayback = "background: url(./Teams/";
    awayback.append(ui->Away_Option->currentText());
    awayback.append("/itmsn_away.png)");
}

void ScoreboardMain::on_Reset_Score_Button_clicked() //Reset Score Button
{
    Home_Score = 0;
    Away_Score = 0;
    ScoreboardMain::Changed();
}

void ScoreboardMain::on_Swap_Button_clicked() //Swap Button
{
    int scoreh1 = Home_Score;
    string Homen1 = Home_Name;
    Home_Score = Away_Score;
    Away_Score = scoreh1;
    Home_Name = Away_Name;
    Away_Name = Homen1;
    ui->HomeScore_Label->setText(QString::number(Home_Score));
    ui->AwayScore_Label->setText(QString::number(Away_Score));
    ui->Home_Option->setCurrentText(QString::fromStdString(Home_Name));
    ui->Away_Option->setCurrentText(QString::fromStdString(Away_Name));
    ScoreboardMain::on_Update_Team_Button_clicked();
    if(ui->checkBox->isChecked())
    {
        writexml();
    }
}


void ScoreboardMain::on_Alway_on_top_Checkbox_clicked(bool alwayson) //Always on top Checkbox
{
    Qt::WindowFlags flags = windowFlags();
    if (alwayson)
    {
        flags ^= Qt::WindowStaysOnBottomHint;
        flags |= Qt::WindowStaysOnTopHint;
    }
    else
    {
        flags ^= Qt::WindowStaysOnTopHint;
        flags |= Qt::WindowStaysOnBottomHint;
    }
    setWindowFlags(flags);
    show();
}

//Penalties

void ScoreboardMain::on_Update_Pens_clicked()
{
    ScoreboardMain::Update_Penalties();
}

void ScoreboardMain::Update_Penalties()
{
    int firstm = 0, firsts = 0, next1 = 60, next2 = 60, next3 = 60, next4 = 60;
    hp1 = ui->HP1->isChecked();
    hp2 = ui->HP2->isChecked();
    ap1 = ui->AP1->isChecked();
    ap2 = ui->AP2->isChecked();

    //Even strength
    if(hp1==1&&hp2==1&&ap1==1&&ap2==1){
        firstm = min(hp1m,min(hp2m,min(ap1m,ap2m)));
        if(hp1m==firstm){
            next1=hp1s;
        }
        if(hp2m==firstm){
            next2=hp2s;
        }
        if(ap1m==firstm){
            next3=ap1s;
        }
        if(ap2m==firstm){
            next4=ap2s;
        }
        firsts = min(next1,min(next2,min(next3,next4)));
        if (firsts<10){
        }
        else{
        }
        ScoreboardMain::Clear_Penalties("e");
    }
    else if((hp1+hp2)==1&&(ap1+ap2)==1){
        if(hp1){
            if(ap1){
                firstm = min(hp1m,ap1m);
                if(hp1m==firstm){
                    next1=hp1s;
                }
                if(ap1m==firstm){
                    next2=ap1s;
                }
            }
            else{
                firstm = min(hp1m,ap2m);
                if(hp1m==firstm){
                    next1=hp1s;
                }
                if(ap2m==firstm){
                    next2=ap2s;
                }

            }
        }
        else{
            if(ap1){
                firstm = min(hp2m,ap1m);
                if(hp2m==firstm){
                    next1=hp2s;
                }
                if(ap1m==firstm){
                    next2=ap1s;
                }
            }
            else{
                firstm = min(hp2m,ap2m);
                if(hp2m==firstm){
                    next1=hp2s;
                }
                if(ap2m==firstm){
                    next2=ap2s;
                }

            }
        }
        firsts = min(next1,next2);
        if (firsts<10){
        }
        else{
        }
        ScoreboardMain::Clear_Penalties("e");
    }

    //5 on 3 PPs
    else if(hp1==1&&hp2==1&&ap1==0&&ap2==0){
        firstm = min(hp1m,hp2m);
        if(hp1m==firstm){
            next1=hp1s;
        }
        if(hp2m==firstm){
            next2=hp2s;
        }
        firsts=min(next1,next2);
        if (firsts<10){
        }
        else{
        }
        ScoreboardMain::Clear_Penalties("a");
    }
    else if(hp1==0&&hp2==0&&ap1==1&&ap2==1){
        firstm = min(ap1m,ap2m);
        if(ap1m==firstm){
            next1=ap1s;
        }
        if(ap2m==firstm){
            next2=ap2s;
        }
        firsts=min(next1,next2);
        if (firsts<10){
        }
        else{
        }
        ScoreboardMain::Clear_Penalties("h");
    }

    //4 on 3 PPs
    else if(hp1==1&&hp2==1&&(ap1+ap2)==1){
        if(ap1){
            firstm=min(ap1m,min(hp1m,hp2m));
            if(hp1m==firstm){
                next1=hp1s;
            }
            if(hp2m==firstm){
                next2=hp2s;
            }
            if(ap1m==firstm){
                next3=ap1s;
            }
        }
        else{
            firstm=min(ap2m,min(hp1m,hp2m));
            if(hp1m==firstm){
                next1=hp1s;
            }
            if(hp2m==firstm){
                next2=hp2s;
            }
            if(ap2m==firstm){
                next3=ap2s;
            }
        }
        firsts = min(next1,min(next2,next3));
        if (firsts<10){
        }
        else{
        }
        ScoreboardMain::Clear_Penalties("a");
    }
    else if((hp1+hp2)==1&&ap1==1&&ap2==1){
        if(hp1){
            firstm=min(hp1m,min(ap1m,ap2m));
            if(hp1m==firstm){
                next1=hp1s;
            }
            if(ap1m==firstm){
                next2=ap1s;
            }
            if(ap2m==firstm){
                next3=ap2s;
            }
        }
        else{
            firstm=min(hp2m,min(ap1m,ap2m));
            if(hp2m==firstm){
                next1=hp2s;
            }
            if(ap1m==firstm){
                next2=ap1s;
            }
            if(ap2m==firstm){
                next3=ap2s;
            }
        }
        firsts = min(next1,min(next2,next3));
        if (firsts<10){
        }
        else{
        }
        ScoreboardMain::Clear_Penalties("h");
    }

    //5 on 4 PPs
    else if(hp1==1&&hp2==0&&ap1==0&&ap2==0){
        if (hp1s<10){
        }
        else{
        }
        ScoreboardMain::Clear_Penalties("a");
    }
    else if(hp1==0&&hp2==1&&ap1==0&&ap2==0){
        if (hp2s<10){
        }
        else{
        }
        ScoreboardMain::Clear_Penalties("a");
    }
    else if(hp1==0&&hp2==0&&ap1==1&&ap2==0){
        if (ap1s<10){
        }
        else{
        }
        ScoreboardMain::Clear_Penalties("h");
    }
    else if(hp1==0&&hp2==0&&ap1==0&&ap2==1){
        if (ap2s<10){
        }
        else{
        }
        ScoreboardMain::Clear_Penalties("h");
    }

    //No Penalties
    else{
        ScoreboardMain::Clear_Penalties("");

    }
}

void ScoreboardMain::Clear_Penalties(QString shown)
{
    if(shown=="h"){
    }
    else if(shown=="a"){
    }
    else if(shown=="e"){
    }
    else{
    }
}

void ScoreboardMain::on_HP1_clicked()
{
    if(ui->HP1->isChecked()==true){
        hp1m = ui->HP1M->value();
        hp1s = ui->HP1S->value();
    }
    else{
        hp1m = 0;
        hp1s = 0;
        ui->HP1M->setValue(2);
        ui->HP1S->setValue(0);
    }
}

void ScoreboardMain::on_HP2_clicked()
{
    if(ui->HP2->isChecked()==true){
        hp2m = ui->HP2M->value();
        hp2s = ui->HP2S->value();
    }
    else{
        hp2m = 0;
        hp2s = 0;
        ui->HP2M->setValue(2);
        ui->HP2S->setValue(0);
    }
}

void ScoreboardMain::on_AP1_clicked()
{
    if(ui->AP1->isChecked()==true){
        ap1m = ui->AP1M->value();
        ap1s = ui->AP1S->value();
    }
    else{
        ap1m = 0;
        ap1s = 0;
        ui->AP1M->setValue(2);
        ui->AP1S->setValue(0);
    }
}

void ScoreboardMain::on_AP2_clicked()
{
    if(ui->AP2->isChecked()==true){
        ap2m = ui->AP2M->value();
        ap2s = ui->AP2S->value();
    }
    else{
        ap2m = 0;
        ap2s = 0;
        ui->AP2M->setValue(2);
        ui->AP2S->setValue(0);
    }
}

void ScoreboardMain::Penalty_Timer()
{
    if(ui->HP1->isChecked()==true){
        if(hp1s==0){
            if(hp1m>0){
                hp1m--;
                hp1s=60;
            }
            else{
                ui->HP1->setChecked(false);
                ui->HP1M->setValue(2);
                ui->HP1S->setValue(0);
            }
        }
        if(ui->HP1->isChecked()==true){
            hp1s--;
            ui->HP1M->setValue(hp1m);
            ui->HP1S->setValue(hp1s);
        }
    }
    if(ui->HP2->isChecked()==true){
        if(hp2s==0){
            if(hp2m>0){
                hp2m--;
                hp2s=60;
            }
            else{
                ui->HP2->setChecked(false);
                ui->HP2M->setValue(2);
                ui->HP2S->setValue(0);
            }
        }
        if(ui->HP2->isChecked()==true){
            hp2s--;
            ui->HP2M->setValue(hp2m);
            ui->HP2S->setValue(hp2s);
        }
    }
    if(ui->AP1->isChecked()==true){
        if(ap1s==0){
            if(ap1m>0){
                ap1m--;
                ap1s=60;
            }
            else {
                ui->AP1->setChecked(false);
                ui->AP1M->setValue(2);
                ui->AP1S->setValue(0);
            }
        }
        if(ui->AP1->isChecked()==true){
            ap1s--;
            ui->AP1M->setValue(ap1m);
            ui->AP1S->setValue(ap1s);
        }
    }
    if(ui->AP2->isChecked()==true){
        if(ap2s==0){
            if(ap2m>0){
                ap2m--;
                ap2s=60;
            }
            else{
                ui->AP2->setChecked(false);
                ui->AP2M->setValue(2);
                ui->AP2S->setValue(0);
            }
        }
        if(ui->AP2->isChecked()==true){
            ap2s--;
            ui->AP2M->setValue(ap2m);
            ui->AP2S->setValue(ap2s);
        }
    }
}

//EDITING THE CLOCK USING THE UP/DOWN BUTTONS
void ScoreboardMain::on_Minute10up_clicked() //Minute10up Button
{
    minu+=10;
    ScoreboardMain::updateClock();
}
void ScoreboardMain::on_Minute10down_clicked() //Minute10down Button
{
    minu-=10;
    ScoreboardMain::updateClock();
}

void ScoreboardMain::on_Minute1up_clicked() //Away_Down Button
{
    minu++;
    ScoreboardMain::updateClock();
}
void ScoreboardMain::on_Minute1down_clicked() //Away_Down Button
{
    minu--;
    ScoreboardMain::updateClock();
}
void ScoreboardMain::on_Second10up_clicked() //Away_Down Button
{
    seco+=10;
    ScoreboardMain::updateClock();
}
void ScoreboardMain::on_Second10down_clicked() //Away_Down Button
{
    seco-=10;
    ScoreboardMain::updateClock();
}
void ScoreboardMain::on_Second1up_clicked() //Away_Down Button
{
    seco++;
    ScoreboardMain::updateClock();
}
void ScoreboardMain::on_Second1down_clicked() //Away_Down Button
{
    seco--;
    ScoreboardMain::updateClock();
}
void ScoreboardMain::on_MS10up_clicked() //Away_Down Button
{
    mseco++;
    ScoreboardMain::updateClock();
}
void ScoreboardMain::on_MS10down_clicked() //Away_Down Button
{
    mseco--;
    ScoreboardMain::updateClock();
}
void ScoreboardMain::updateClock()
{
    ui->Clock_Minute10->setText(QString::number(minu/10));
    ui->Clock_Minute1->setText(QString::number(minu%10));
    ui->Clock_Second10->setText(QString::number(seco/10));
    ui->Clock_Second1->setText(QString::number(seco%10));
    ui->Clock_MS10->setText(QString::number(mseco));
}

void ScoreboardMain::updateClockView()
{
    if(minu<1){
        if(mseco==10){
            clock_text = QString::number(seco) + ".0";
        }
        else{
            clock_text = QString::number(seco) + "." + QString::number(mseco);
        }
    }
    else if(minu>=1&&seco<10){
        clock_text = QString::number(minu) + ":0" + QString::number(seco);
    }
    else{
        clock_text = QString::number(minu) + ":" + QString::number(seco);
    }
}

void ScoreboardMain::on_Update_Timer_clicked()
{
    ScoreboardMain::updateClockView();
}

void ScoreboardMain::on_Intermission_Button_clicked()
{
}

void ScoreboardMain::on_End_Game_Button_clicked()
{
    lastPeriod=Period;
    if(lastPeriod==3){
        Period=10;
    }
    else if(lastPeriod==4){
        Period=11;
    }
    else if(lastPeriod==5){
        Period=12;
    }
    else if(lastPeriod==6){
        Period=13;
    }
    else if(lastPeriod==7){
        Period=14;
    }
    else{
        Period=10;
    }
    ScoreboardMain::Clear_Penalties("");
    Period=lastPeriod;
}

void ScoreboardMain::on_Start_Button_clicked() //Start button
{
    Clock_button++;
    if(many == false && Stopwatch_input == true && Milliseconds == true)
    {
    many = false;
    clock_symbol = ".";
    }
    if(minu == 0 && many == false && Stopwatch_input == true && Milliseconds == false)
    {
    many = true;
    speed = Normal_Speed;
    clock_symbol = ":";
    if(seco < 9 && many == true)
    {
        seconds_zero = "0";
    }
    if(seco > 9)
    {
    seconds_zero = "";
    }
    }
    if(Clock_button == 2 && Stopwatch_input == false)
    {
        input_stop = false;
        clock->stop();
        mseco++;
        ui->Start_Button->setText("Start");
        ui->Start_Button->setShortcut(QKeySequence(Qt::Key_Space));
        ui->Start_Button->setStyleSheet("background-color: green;color: white");
    }
    if(Clock_button == 2 && Stopwatch_input == true)
    {
       input_stop = false;
       clock->stop();
       mseco++;
       ui->Start_Button->setText("Start");
       ui->Start_Button->setShortcut(QKeySequence(Qt::Key_Space));
       ui->Start_Button->setStyleSheet("background-color: green;color: white");
    }
    if(Clock_button == 3 && Stopwatch_input == false)
    {
        input_stop = true;
        Clock_button = 1;
    }
    if(Clock_button == 3 && Stopwatch_input == true)
    {
     Clock_button = 1;
     if(saved_speed == Normal_Speed)
     {
         speed = Normal_Speed;
     }else if(saved_speed == Millisecond_Speed)
     {
         speed = Normal_Speed;
     }
    }
    if(Clock_button == 1 && Stopwatch_input == false)
    {
    input_stop = true;
    ui->Start_Button->setText("Stop");
    ui->Start_Button->setShortcut(QKeySequence(Qt::Key_Space));
    ui->Start_Button->setStyleSheet("background-color: red;color: white");
    ScoreboardMain::Timer_Control();
    }
    if(Clock_button == 1 && Stopwatch_input == true)
    {
    input_stop = true;
    ui->Start_Button->setText("Stop");
    ui->Start_Button->setShortcut(QKeySequence(Qt::Key_Space));
    ui->Start_Button->setStyleSheet("background-color: red;color: white");
    ScoreboardMain::Stopwatch_Control();
    }
}

void ScoreboardMain::Stopwatch_Control() //Stopwatch Control
{
    clock = new QTimer(this);
    connect(clock,SIGNAL(timeout()),this,SLOT(Stopwatch()));
    if(seco < 9)
    {
        seconds_zero = "0";
    }
    if(seco > 9)
    {
    seconds_zero = "";
    }
       // seco++;
    if(minu > 1)
    {
        speed = Normal_Speed;
        clock_symbol = ":";
        many = true;
        if(seco < 9)
        {
            seconds_zero = "0";
        }
        if(seco > 9)
        {
        seconds_zero = "";
        }
    }
    clock->start(speed);
}

void ScoreboardMain::Timer_Control() //Timer Control
{
    clock = new QTimer(this);
    connect(clock,SIGNAL(timeout()),this,SLOT(Timer()));
    if(seco < 9 && many == false)
    {
        seconds_zero = "0";
    }
    if(seco > 9)
    {
    seconds_zero = "";
    }
    if(minu < 9 && many == false && Minute_Zero == true)
    {
        minutes_zero = "0";
    }
    if(minu > 9 && Minute_Zero == true)
    {
    minutes_zero = "";
    }
    if(minu == -1)
    {
        minu++;
    }
    clock->start(speed);
}

void ScoreboardMain::Stopwatch() //Stopwatch
{
    if(minu == 59 && seco == 9 && Milliseconds == true)
    {
        speed = Normal_Speed;
        minu = 1;
        many = true;
        seco = 0;
        Milliseconds = false;
        seconds_zero = "0";
        clock_symbol = ":";
        clock->start(speed);
    }
    if(ui->Minutes_Input->value() == 0 && many == true)
    {
        if(seco == 0)
        {
            seconds_zero = "0";

        many = true;
        clock_symbol = ":";
        speed = Normal_Speed;
    }
    }
    if(minu < 10 && Minute_Zero == true)
    {
        minutes_zero = "0";
    }else
    {
        minutes_zero = "";
    }
    ScoreboardMain::updateClock();
    ScoreboardMain::updateClockView();
    if(ui->checkBox->isChecked())
    {
        ScoreboardMain::updateClockView();
        writexml();
    }
    if(ui->pushButton->text() == "Disable")
    {
        client->write(QString("Clock:  " + QString::fromStdString(minutes_zero) + QString::number(minu) + QString::fromStdString(clock_symbol) + QString::fromStdString(seconds_zero) + QString::number(seco)).toUtf8());
    }
    if(getinput == true)
    {
        ui->Minutes_Input->setValue(minu);
        ui->Seconds_Input->setValue(seco);
    }
    if(seco < 9 && Milliseconds == false)
    {
        seconds_zero = "0";
    }else if(seco > 8 && Milliseconds == false){
        seconds_zero = "";
    }
    if(minu == mins && seco == secs && to_switch == true)
    {
        ScoreboardMain::on_Start_Button_clicked();
        if(!ui->BrowseFile_Input->text().isEmpty())
        {
        player->play();
        ui->StopMusic_Button->setVisible(true);
        ui->TestSound_Button->setText("Stop Sound");
        }
    }
    if(Milliseconds == true && many == false && seco == 9)
    {
    seco = 0;
    minu++;
    seconds_zero = "";
    }
    if(seco == 59)
    {
        seco = -1;
        seconds_zero = "0";
        clock_symbol = ":";
        minu++;
    }
    seco++;
}

void ScoreboardMain::Timer() //Timer
{
     ScoreboardMain::updateClock();
     ScoreboardMain::updateClockView();
     if(secflag){
         ScoreboardMain::Penalty_Timer();
         ScoreboardMain::Update_Penalties();
     }
     if(ui->checkBox->isChecked())
     {
         writexml();
     }
     if(getinput == true)
     {
         ui->Minutes_Input->setValue(minu);
         ui->Seconds_Input->setValue(seco);

     }

     if(minu == 0 && seco == 0 && mseco == 0)
     {
         clock->stop();
         ui->Testing->setText("Error Output:");
         ui->Start_Button->setText("Start");
         ui->Start_Button->setShortcut(QKeySequence(Qt::Key_Space));
         ui->Start_Button->setStyleSheet("color: white; background-color: green");
         Clock_button = 0;
         minu = 0;
         seco = 0;
         input_stop = false;
         many = 0;
         ui->Seconds_Input->setValue(0);
         ui->Minutes_Input->setValue(0);
         speed = Normal_Speed;
         if(!ui->BrowseFile_Input->text().isEmpty())
         {
         player->play();
         ui->StopMusic_Button->setVisible(true);
         ui->TestSound_Button->setText("Stop Sound");
         }
         clock->stop();
         mseco++;
     }
     if(minu == 1 && seco == 0 && mseco == 0)
     {
         many = true;
         seco = 60;
         minu--;
         speed = Normal_Speed;
         seconds_zero = "";
         clock_symbol = ".";
         clock->start(speed);
     }
     else if(seco == 0 && minu != 0 && mseco == 0)
     {
       seco = 60;
       minu--;
     }


     if(mseco == 0)
     {
         secflag=true;
         if(seco!=0){
             seco--;
             secflag=true;
         }
     }
     else{
         secflag=false;
     }

     if(mseco == 0)
     {
         mseco = 10;
     }
     mseco--;
}

void ScoreboardMain::on_Reset_Button_clicked() //Reset Clock button
{
    if(Clock_button == 1)
    {
        ui->Testing->setText("Error Output: Please stop your timer");
    }else{
    Clock_button = 0;
    if(presetbool == true && PresetRadio == 1 && Stopwatch_input == false)
    {
        minu = 5;
        seco = 0;
        mseco = 0;
        ScoreboardMain::updateClock();
        ScoreboardMain::updateClockView();
        if(ui->checkBox->isChecked())
        {
            writexml();
        }
        if(ui->pushButton->text() == "Disable")
        {
        client->write(QString("Clock: 5:00").toUtf8());
        }
    }else if(presetbool == true && PresetRadio == 2 && Stopwatch_input == false)
    {
        ui->Seconds_Input->setValue(0);
        ui->Minutes_Input->setValue(12);
        clock_symbol = ":";
        minu = 12;
        seco = 0;
        mseco = 0;
        ScoreboardMain::updateClock();
        ScoreboardMain::updateClockView();
        if(ui->checkBox->isChecked())
        {
            writexml();
        }
        if(ui->pushButton->text() == "Disable")
        {
        client->write(QString("Clock:  12:00").toUtf8());
        }
    }else if(presetbool == true && PresetRadio == 3 && Stopwatch_input == false)
    {
        ui->Seconds_Input->setValue(0);
        ui->Minutes_Input->setValue(15);
        clock_symbol = ":";
        minu = 15;
        seco = 0;
        mseco = 0;
        ScoreboardMain::updateClock();
        ScoreboardMain::updateClockView();
        if(ui->checkBox->isChecked())
        {
            writexml();
        }
        if(ui->pushButton->text() == "Disable")
        {
        client->write(QString("Clock:  15:00").toUtf8());
        }
    }else if(presetbool == true && PresetRadio == 4 && Stopwatch_input == false)
    {
        ui->Seconds_Input->setValue(0);
        ui->Minutes_Input->setValue(20);
        minu = 20;
        seco = 0;
        mseco = 0;
        ScoreboardMain::updateClock();
        ScoreboardMain::updateClockView();
        clock_symbol = ":";
        if(ui->checkBox->isChecked())
        {
            writexml();
        }
        if(ui->pushButton->text() == "Disable")
        {
        client->write(QString("Clock:  20:00").toUtf8());
        }
    }else{
        if(ui->checkBox->isChecked())
        {
            writexml();
        }
        ui->Seconds_Input->setValue(0);
        ui->Minutes_Input->setValue(0);
        minu = 0;
        seco = 0;
        mseco = 0;
        if(ui->checkBox->isChecked())
        {
            writexml();
        }
        clock_symbol = ":";
        if(ui->pushButton->text() == "Disable")
        {
        client->write(QString("Clock:  00:00").toUtf8());
        }
    }
    many = false;
    ui->Testing->setText("Error Output:");
}
}

void ScoreboardMain::on_To_Checkbox_clicked(bool to)
{
    to_switch = to;
}

void ScoreboardMain::on_Minutes_Input_valueChanged(int arg0)
{
    if(input_stop == false)
    {
    minu = arg0;
    ifclockinputchanged();
    ScoreboardMain::updateClock();
    }
    }

void ScoreboardMain::on_Seconds_Input_valueChanged(int arg1)
{
    if(input_stop == false)
    {
    seco = arg1;
     ifclockinputchanged();
     ScoreboardMain::updateClock();
    }
}

void ScoreboardMain::on_Minutes_To_In_valueChanged(int arg2)
{
    mins = arg2;
    ScoreboardMain::updateClock();
}

void ScoreboardMain::on_Seconds_To_Input_valueChanged(int arg3)
{
    secs = arg3;
    ScoreboardMain::updateClock();
}

void ScoreboardMain::on_Addzero_Checkbox_clicked(bool add)
{
    Minute_Zero = add;
}

void ScoreboardMain::on_CurrentTime_Checkbox_clicked(bool current)
{
    if(current == true)
    {
        currenttime = new QTimer(this);
        connect(currenttime, SIGNAL(timeout()),this, SLOT(timeclock()));
        currenttime->start(1000);
    }else{
        currenttime->stop();
        if(ui->checkBox->isChecked())
        {
            writexml();
        }
        seconds_zero = "";
        minutes_zero = "";
}
}

void ScoreboardMain::timeclock()
{
    time_t current = time(0);
    tm *local = localtime(&current);
    if(local->tm_sec < 10)
    {
        seconds_zero = "0";
    }else{
        seconds_zero = "";
    }
    if(local->tm_min < 10)
    {
        minutes_zero = "0";
    }else{
        minutes_zero = "";
    }
    ScoreboardMain::updateClockView();
    if(ui->pushButton->text() == "Disable")
    {
        client->write(QString("Clock:" + QString::number(local->tm_hour) + ":" + QString::fromStdString(minutes_zero) + QString::number(local->tm_min) + ":" + QString::fromStdString(seconds_zero) + QString::number(local->tm_sec)).toUtf8());
    }
}

void ScoreboardMain::ifclockinputchanged()
{
    if(seco < 10 && many == false)
    {
        seconds_zero = "0";
    }else{
        seconds_zero = "";
    }
    if(ui->checkBox->isChecked())
    {
        writexml();
    }
    if(ui->pushButton->text() == "Disable")
    {
        client->write(QString("Clock:  " + QString::fromStdString(minutes_zero) + QString::number(minu) + QString::fromStdString(clock_symbol) + QString::fromStdString(seconds_zero) + QString::number(seco)).toUtf8());
    }
}

void ScoreboardMain::on_Stopwatch_Checkbox_clicked(bool stop)
{
    Stopwatch_input = stop;
}

void ScoreboardMain::on_Milliseconds_Checkbox_clicked(bool mill)
{
    Milliseconds = mill;
}

void ScoreboardMain::on_Countdown_Checkbox_clicked(bool countdown)
{
    getinput = countdown;
}

void ScoreboardMain::on_Browsefile_Button_clicked()
{
    QString Filename = QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "All files (*.*);; mp3 File (*.mp3)");
    ui->BrowseFile_Input->setText(Filename);
    //player->setMedia(QUrl::fromLocalFile(Filename));
}

void ScoreboardMain::on_BrowseFile_Input_textChanged(const QString &arg1)
{
    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile(arg1));
    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(putduration()));
}

bool truefalse = false;

void ScoreboardMain::on_Speed_CheckBox_clicked(bool checked11)
{
    if(checked11 == false)
    {
        Normal_Speed = 1000;
    }else if(checked11 == true){
        truefalse = true;
    }
}

void ScoreboardMain::on_Speed_Input_valueChanged(int arg13)
{
    if(truefalse == true)
    {
        Normal_Speed = arg13;
    }else if(truefalse == false){
        Normal_Speed = 100;
    }
}
void ScoreboardMain::on_TimerPreset_Checkbox_clicked(bool checked15)
{
    if(checked15 == true)
    {
        presetbool = true;
        if(ui->FiveP_Radio->isChecked())
        {
            PresetRadio = 1;
        }
        if(ui->TenP_Radio->isChecked())
        {
            PresetRadio = 2;
        }
        if(ui->FifteenP_Radio->isChecked())
        {
            PresetRadio = 3;
        }
        if(ui->TwentyP_Radio->isChecked())
        {
            PresetRadio = 4;
        }
    }else{
        PresetRadio = 0;
        presetbool = false;
    }
}

void ScoreboardMain::on_FiveP_Radio_clicked()
{
    if(presetbool == true)
    {
    PresetRadio = 1;
    }
}

void ScoreboardMain::on_TenP_Radio_clicked()
{
    if(presetbool == true)
    {
    PresetRadio = 2;
    }
}

void ScoreboardMain::on_FifteenP_Radio_clicked()
{
    if(presetbool == true)
    {
    PresetRadio = 3;
    }
}

void ScoreboardMain::on_TwentyP_Radio_clicked()
{
    if(presetbool == true)
    {
    PresetRadio = 4;
    }
}

void ScoreboardMain::xml()
{
    //Creates QFile to the directory
    QFile file("./Xml.xml");

    //Check if file is writeable
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        ui->Testing->setText("xml Could not be created");
    }else{
    ScoreboardMain::writexml();
    }

}
int a = 0;

void ScoreboardMain::writexml()
{

    a++;
    //Creates a new xml file
    QFile file("./Xml.xml");
    //Make sure file is only writeonly
    file.open(QIODevice::WriteOnly);
    //Set QXmlStreamWriter to file path to &file
    QXmlStreamWriter xmlWriter(&file);
    //Auto Formatting for xml
    xmlWriter.setAutoFormatting(true);
    //Start document root
    xmlWriter.writeStartDocument();
    if(SecretIanButton == false)
    {
    xmlWriter.writeStartElement("items");
    xmlWriter.writeTextElement("timestamp",QString::number(a));
    xmlWriter.writeTextElement("HomeScore", QString::number(Home_Score));
    xmlWriter.writeTextElement("AwayScore", QString::number(Away_Score));
    xmlWriter.writeTextElement("HomeName", QString::fromStdString(Home_Name));
    xmlWriter.writeTextElement("AwayName", QString::fromStdString(Away_Name));
    xmlWriter.writeTextElement("Period", QString::number(Period));
    xmlWriter.writeEndElement();
    //End Document
    xmlWriter.writeEndDocument();
    //File Close
    file.close();
    }
}

void ScoreboardMain::on_checkBox_clicked(bool checked20)
{
    if(checked20 == true)
    {
        xml();
    }else{
        QFile::remove("./Xml.xml");
        QFile::remove("./out.txt");
    }
}

void ScoreboardMain::closeEvent(QCloseEvent *)
{
    ol->close();
}
