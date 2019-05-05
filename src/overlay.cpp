#include "overlay.h"
#include "ui_overlay.h"
#include "updatesvg.h"
#include <QGraphicsDropShadowEffect>
#include <QGraphicsEffect>
#include <QPropertyAnimation>
#include <QSvgRenderer>
#include <QPixmap>
#include <QtSvg>
#include <QFile>
#include <QPainter>
#include <QDomDocument>
#include <QDomElement>
#include <QDomNodeList>
#include <QDomNode>
#include <QDomText>
#include <QDomAttr>
#include <QMessageBox>
#include <QSvgWidget>
#include <resvg.h>

using namespace std;

static updatesvg svg;

static QFile intermission;
//static QVector<QByteArray> scbdData;
static QByteArray scbdData;
static QSvgRenderer renderer;

// Values used to determine ID tags in svg themes

static QVector<QVector<QVector<QString>>> homeAttr(8), awayAttr(8), scbdGroups(5);

static QVector<QString> teamAttr = {"color1","color2","color3","color4","logo1","logo2","logo3","logo4"};
static QVector<QString> teamVals = {"fullName","name","abbr","mascot"};
static QVector<QString> gameValueTags = {"clockText","periodText","homeScore","awayScore","homeShots", \
                                         "awayShots","homeHits","awayHits","homePenaltyText","homePenaltyClock", \
                                         "awayPenaltyText","awayPenaltyClock","evenPenaltyText","evenPenaltyClock"};
static QVector<QString> groupTags = {"homePenalty","awayPenalty","evenPenalty","shotsView","hitsView"};

static QVector<QString> homeVals(4), awayVals(4), gameVals(14);

static QVector<QString> homeTeamConf(8), awayTeamConf(8);
static QVector<QString> teamConf = {"fullName","name","abbr","mascot","color1","color2","color3","color4"};


static QString periodText = "periodText", clockText = "clockText", homeScore = "homeScore", awayScore = "awayScore";
static QString homeShots = "homeShots", awayShots = "awayShots";

Overlay::Overlay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Overlay)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground);
}

Overlay::~Overlay()
{
    delete ui;
}

void Overlay::updateClock(QString clock_text){
    /* Updates the clock value and redraws
     */
    scbdData=svg.updateVal(scbdData,clockText,clock_text);
    paintScoreboard(scbdData);
}

void Overlay::showShots(bool show){
    if(!show){
        scbdData=svg.updateAttr(scbdData,"shotsView","style","display:none");
        paintScoreboard(scbdData);
    }
    else{
        scbdData=svg.updateAttr(scbdData,"shotsView","style","display:inline");
        paintScoreboard(scbdData);
    }
}

void Overlay::updateTeams(QDir homeDir, QDir awayDir){
    /* Covers all graphic portions to be updated on a team change
     * Anything that is set in the theme config file will be changed here
     */

    loadTeamConf(homeDir,awayDir);
    for(int i=0;i<homeAttr.size();i++){
        for(int j=0;j<homeAttr[i].size();j++){
            if(teamAttr[i]=="color1"){
                scbdData=svg.updateAttr(scbdData,homeAttr[i][j][0],homeAttr[i][j][1],homeAttr[i][j][2]+homeTeamConf[4]+homeAttr[i][j][3]);
            }
            if(teamAttr[i]=="color2"){
                scbdData=svg.updateAttr(scbdData,homeAttr[i][j][0],homeAttr[i][j][1],homeAttr[i][j][2]+homeTeamConf[5]+homeAttr[i][j][3]);
            }
            if(teamAttr[i]=="color3"){
                scbdData=svg.updateAttr(scbdData,homeAttr[i][j][0],homeAttr[i][j][1],homeAttr[i][j][2]+homeTeamConf[6]+homeAttr[i][j][3]);
            }
            if(teamAttr[i]=="color4"){
                scbdData=svg.updateAttr(scbdData,homeAttr[i][j][0],homeAttr[i][j][1],homeAttr[i][j][2]+homeTeamConf[7]+homeAttr[i][j][3]);
            }
            if(teamAttr[i]=="logo1"){
                scbdData=svg.updateAttr(scbdData,homeAttr[i][j][0],homeAttr[i][j][1],homeAttr[i][j][2]+homeDir.path()+"/logo1.png"+homeAttr[i][j][3]);
            }
        }
    }
    for(int i=0;i<awayAttr.size();i++){
        for(int j=0;j<awayAttr[i].size();j++){
            if(teamAttr[i]=="color1"){
                scbdData=svg.updateAttr(scbdData,awayAttr[i][j][0],awayAttr[i][j][1],awayAttr[i][j][2]+awayTeamConf[4]+awayAttr[i][j][3]);
            }
            if(teamAttr[i]=="color2"){
                scbdData=svg.updateAttr(scbdData,awayAttr[i][j][0],awayAttr[i][j][1],awayAttr[i][j][2]+awayTeamConf[5]+awayAttr[i][j][3]);
            }
            if(teamAttr[i]=="color3"){
                scbdData=svg.updateAttr(scbdData,awayAttr[i][j][0],awayAttr[i][j][1],awayAttr[i][j][2]+awayTeamConf[6]+awayAttr[i][j][3]);
            }
            if(teamAttr[i]=="color4"){
                scbdData=svg.updateAttr(scbdData,awayAttr[i][j][0],awayAttr[i][j][1],awayAttr[i][j][2]+awayTeamConf[7]+awayAttr[i][j][3]);
            }
            if(teamAttr[i]=="logo1"){
                scbdData=svg.updateAttr(scbdData,awayAttr[i][j][0],awayAttr[i][j][1],awayAttr[i][j][2]+awayDir.path()+"/logo1.png"+awayAttr[i][j][3]);
            }
        }
    }
    for(int i=0;i<teamVals.size();i++){
        if(teamVals[i]=="fullName"){
            scbdData=svg.updateVal(scbdData,homeVals[i],homeTeamConf[0]);
        }
        if(teamVals[i]=="name"){
            scbdData=svg.updateVal(scbdData,homeVals[i],homeTeamConf[1]);
        }
        if(teamVals[i]=="abbr"){
            scbdData=svg.updateVal(scbdData,homeVals[i],homeTeamConf[2]);
        }
        if(teamVals[i]=="mascot"){
            scbdData=svg.updateVal(scbdData,homeVals[i],homeTeamConf[3]);
        }
    }
    for(int i=0;i<teamVals.size();i++){
        if(teamVals[i]=="fullName"){
            scbdData=svg.updateVal(scbdData,awayVals[i],awayTeamConf[0]);
        }
        if(teamVals[i]=="name"){
            scbdData=svg.updateVal(scbdData,awayVals[i],awayTeamConf[1]);
        }
        if(teamVals[i]=="abbr"){
            scbdData=svg.updateVal(scbdData,awayVals[i],awayTeamConf[2]);
        }
        if(teamVals[i]=="mascot"){
            scbdData=svg.updateVal(scbdData,awayVals[i],awayTeamConf[3]);
        }
    }

    paintScoreboard(scbdData);
}

void Overlay::loadTeamConf(QDir homeDir, QDir awayDir){

    QString line;

    QFile homeConfFile(homeDir.path()+"/info.txt");
    if(homeConfFile.open(QIODevice::ReadOnly)){
        QTextStream in(&homeConfFile);
        while(!in.atEnd()){
            line = in.readLine();
            line=line.trimmed();
            if(line.contains("=")){
                for(int i =0;i<teamConf.size();i++){
                    if(teamConf[i]==line.split("=")[0]){
                        homeTeamConf.replace(i,line.split("=")[1]);
                    }
                }
            }
        }
        homeConfFile.close();
    }

    QFile awayConfFile(awayDir.path()+"/info.txt");
    if(awayConfFile.open(QIODevice::ReadOnly)){
        QTextStream ni(&awayConfFile);
        while(!ni.atEnd()){
            line = ni.readLine();
            line=line.trimmed();
            if(line.contains("=")){
                for(int i =0;i<teamConf.size();i++){
                    if(teamConf[i]==line.split("=")[0]){
                        awayTeamConf.replace(i,line.split("=")[1]);
                    }
                }
            }
        }
        homeConfFile.close();
    }
}

void Overlay::updatePeriod(int period){
    QString strPeriod = QString::number(period);
    if(period == 1){
        scbdData=svg.updateVal(scbdData,periodText,strPeriod+"st");
    }
    else if(period == 2){
        scbdData=svg.updateVal(scbdData,periodText,strPeriod+"nd");
    }
    else if(period == 3){
        scbdData=svg.updateVal(scbdData,periodText,strPeriod+"rd");
    }
    else if(period < 1){
        scbdData=svg.updateVal(scbdData,periodText,"1st");
    }
    else if(period == 4){
        scbdData=svg.updateVal(scbdData,periodText,"OT");
    }
    else if(period == 5){
        scbdData=svg.updateVal(scbdData,periodText,"2OT");
    }
    else if(period == 6){
        scbdData=svg.updateVal(scbdData,periodText,"3OT");
    }
    else if(period == 7){
        scbdData=svg.updateVal(scbdData,periodText,"4OT");
    }
    paintScoreboard(scbdData);
}

void Overlay::updateScore(int home_score, int away_score){
    scbdData=svg.updateVal(scbdData,homeScore,QString::number(home_score));
    scbdData=svg.updateVal(scbdData,awayScore,QString::number(away_score));
    paintScoreboard(scbdData);
}

void Overlay::updateShots(int home_shots, int away_shots){
    scbdData=svg.updateVal(scbdData,homeShots,QString::number(home_shots));
    scbdData=svg.updateVal(scbdData,awayShots,QString::number(away_shots));
    paintScoreboard(scbdData);
}

void Overlay::updatePenalties(int hp1, int hp2, int ap1, int ap2, int hp1m, int hp1s, int hp2m, int hp2s, int ap1m, int ap1s, int ap2m, int ap2s){
    int firstm = 0, firsts = 0, next1 = 60, next2 = 60, next3 = 60, next4 = 60;

    //Even strength
    if(hp1==1&&hp2==1&&ap1==1&&ap2==1){
        scbdData=svg.updateAttr(scbdData, "evenPenalty", "style", "display:inline");
        scbdData=svg.updateVal(scbdData,"evenPenaltyText","3 on 3");
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
            scbdData=svg.updateVal(scbdData,"evenPenaltyClock",QString::number(firstm)+":0"+QString::number(firsts));
        }
        else{
            scbdData=svg.updateVal(scbdData,"evenPenaltyClock",QString::number(firstm)+":"+QString::number(firsts));
        }
        Overlay::clearPenalties("e");
    }
    else if((hp1+hp2)==1&&(ap1+ap2)==1){
        scbdData=svg.updateAttr(scbdData, "evenPenalty", "style", "display:inline");
        scbdData=svg.updateVal(scbdData,"evenPenaltyText","4 on 4");
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
            scbdData=svg.updateVal(scbdData,"evenPenaltyClock",QString::number(firstm)+":0"+QString::number(firsts));
        }
        else{
            scbdData=svg.updateVal(scbdData,"evenPenaltyClock",QString::number(firstm)+":"+QString::number(firsts));
        }
        Overlay::clearPenalties("e");
    }

    //5 on 3 PPs
    else if(hp1==1&&hp2==1&&ap1==0&&ap2==0){
        scbdData=svg.updateAttr(scbdData, "homePenalty", "style", "display:inline");
        scbdData=svg.updateVal(scbdData,"homePenaltyText","5 on 3");
        firstm = min(hp1m,hp2m);
        if(hp1m==firstm){
            next1=hp1s;
        }
        if(hp2m==firstm){
            next2=hp2s;
        }
        firsts=min(next1,next2);
        if (firsts<10){
            scbdData=svg.updateVal(scbdData,"homePenaltyClock",QString::number(firstm)+":0"+QString::number(firsts));
        }
        else{
            scbdData=svg.updateVal(scbdData,"homePenaltyClock",QString::number(firstm)+":"+QString::number(firsts));
        }
        Overlay::clearPenalties("a");
    }
    else if(hp1==0&&hp2==0&&ap1==1&&ap2==1){
        scbdData=svg.updateAttr(scbdData, "awayPenalty", "style", "display:inline");
        scbdData=svg.updateVal(scbdData,"awayPenaltyText","5 on 3");
        firstm = min(ap1m,ap2m);
        if(ap1m==firstm){
            next1=ap1s;
        }
        if(ap2m==firstm){
            next2=ap2s;
        }
        firsts=min(next1,next2);
        if (firsts<10){
            scbdData=svg.updateVal(scbdData,"awayPenaltyClock",QString::number(firstm)+":0"+QString::number(firsts));
        }
        else{
            scbdData=svg.updateVal(scbdData,"awayPenaltyClock",QString::number(firstm)+":"+QString::number(firsts));
        }
        Overlay::clearPenalties("h");
    }

    //4 on 3 PPs
    else if(hp1==1&&hp2==1&&(ap1+ap2)==1){
        scbdData=svg.updateAttr(scbdData, "homePenalty", "style", "display:inline");
        scbdData=svg.updateVal(scbdData,"homePenaltyText","4 on 3");
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
            scbdData=svg.updateVal(scbdData,"homePenaltyClock",QString::number(firstm)+":0"+QString::number(firsts));
        }
        else{
            scbdData=svg.updateVal(scbdData,"homePenaltyClock",QString::number(firstm)+":"+QString::number(firsts));
        }
        Overlay::clearPenalties("a");
    }
    else if((hp1+hp2)==1&&ap1==1&&ap2==1){
        scbdData=svg.updateAttr(scbdData, "awayPenalty", "style", "display:inline");
        scbdData=svg.updateVal(scbdData,"awayPenaltyText","4 on 3");
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
            scbdData=svg.updateVal(scbdData,"awayPenaltyClock",QString::number(firstm)+":0"+QString::number(firsts));
        }
        else{
            scbdData=svg.updateVal(scbdData,"awayPenaltyClock",QString::number(firstm)+":"+QString::number(firsts));
        }
        Overlay::clearPenalties("h");
    }

    //5 on 4 PPs
    else if(hp1==1&&hp2==0&&ap1==0&&ap2==0){
        scbdData=svg.updateAttr(scbdData, "homePenalty", "style", "display:inline");
        scbdData=svg.updateVal(scbdData,"homePenaltyText","Power Play");
        if (hp1s<10){
            scbdData=svg.updateVal(scbdData,"homePenaltyClock",QString::number(hp1m)+":0"+QString::number(hp1s));
        }
        else{
            scbdData=svg.updateVal(scbdData,"homePenaltyClock",QString::number(hp1m)+":"+QString::number(hp1s));
        }
        Overlay::clearPenalties("a");
    }
    else if(hp1==0&&hp2==1&&ap1==0&&ap2==0){
        scbdData=svg.updateAttr(scbdData, "homePenalty", "style", "display:inline");
        scbdData=svg.updateVal(scbdData,"homePenaltyText","Power Play");
        if (hp2s<10){
            scbdData=svg.updateVal(scbdData,"homePenaltyClock",QString::number(hp2m)+":0"+QString::number(hp2s));
        }
        else{
            scbdData=svg.updateVal(scbdData,"homePenaltyClock",QString::number(hp2m)+":"+QString::number(hp2s));
        }
        Overlay::clearPenalties("a");
    }
    else if(hp1==0&&hp2==0&&ap1==1&&ap2==0){
        scbdData=svg.updateAttr(scbdData, "awayPenalty", "style", "display:inline");
        scbdData=svg.updateVal(scbdData,"awayPenaltyText","Power Play");
        if (ap1s<10){
            scbdData=svg.updateVal(scbdData,"awayPenaltyClock",QString::number(ap1m)+":0"+QString::number(ap1s));
        }
        else{
            scbdData=svg.updateVal(scbdData,"awayPenaltyClock",QString::number(ap1m)+":"+QString::number(ap1s));
        }
        Overlay::clearPenalties("h");
    }
    else if(hp1==0&&hp2==0&&ap1==0&&ap2==1){
        scbdData=svg.updateAttr(scbdData, "awayPenalty", "style", "display:inline");
        scbdData=svg.updateVal(scbdData,"awayPenaltyText","Power Play");
        if (ap2s<10){
            scbdData=svg.updateVal(scbdData,"awayPenaltyClock",QString::number(ap2m)+":0"+QString::number(ap2s));
        }
        else{
            scbdData=svg.updateVal(scbdData,"awayPenaltyClock",QString::number(ap2m)+":"+QString::number(ap2s));
        }
        Overlay::clearPenalties("h");
    }

    //No Penalties
    else{
        Overlay::clearPenalties("");

    }
    paintScoreboard(scbdData);
}

void Overlay::clearPenalties(QString shown)
{
    if(shown=="h"){
        scbdData=svg.updateAttr(scbdData, "homePenalty", "style", "display:none");
        scbdData=svg.updateAttr(scbdData, "evenPenalty", "style", "display:none");
    }
    else if(shown=="a"){
        scbdData=svg.updateAttr(scbdData, "awayPenalty", "style", "display:none");
        scbdData=svg.updateAttr(scbdData, "evenPenalty", "style", "display:none");
    }
    else if(shown=="e"){
        scbdData=svg.updateAttr(scbdData, "awayPenalty", "style", "display:none");
        scbdData=svg.updateAttr(scbdData, "homePenalty", "style", "display:none");
    }
    else{
        scbdData=svg.updateAttr(scbdData, "awayPenalty", "style", "display:none");
        scbdData=svg.updateAttr(scbdData, "homePenalty", "style", "display:none");
        scbdData=svg.updateAttr(scbdData, "evenPenalty", "style", "display:none");
    }
    paintScoreboard(scbdData);
}

void Overlay::loadScoreboard(QString filepath){
    QFile scoreboard(filepath+".svg");
    scoreboard.open(QIODevice::ReadOnly);
    scbdData = scoreboard.readAll();
    paintScoreboard(scbdData);
    QFile config(filepath+".txt");
    if (config.open(QIODevice::ReadOnly))
    {
        QVector<QString> file;
        QTextStream in(&config);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            file.append(line);
        }
        config.close();
        parsescbdConfig(file);
    }
}

void Overlay::parsescbdConfig(QVector<QString> config){
    int flag = -1;
    QString tag;
    QString attributes, id, attr, before, after;
    QString next, last;
    QStringList objects;
    QVector<QString> attrlist;


    for(int z =0;z<teamVals.size();z++){
        homeVals.replace(z,"");
        awayVals.replace(z,"");
    }
    for(int k=0;k<teamAttr.size();k++){
        homeAttr[k].clear();
        awayAttr[k].clear();
    }

    for(int i=0;i<config.size();i++){
        QString line = config[i].trimmed();
        if(line.begin()==QString::fromStdString("#")||line.begin()==line.end()){
            continue;
        }
        else{
            if(line=="HomeTeamAttr"){
                flag = 0;
            }
            else if(line=="HomeTeamVals"){
                flag = 1;
                continue;
            }
            else if(line=="AwayTeamAttr"){
                flag = 2;
                continue;
            }
            else if(line=="AwayTeamVals"){
                flag = 3;
                continue;
            }
            else if(line=="GameValues"){
                flag = 4;
                continue;
            }
            else if(line=="Groups"){
                flag = 5;
                continue;
            }
            else if(line!=""){
                if(line.contains("=")){
                    tag=line.split("=")[0];
                    attributes=line.split("=")[1];                
                    if(flag==0){
                        for(int j=0;j<teamAttr.size();j++){
                            if(tag==teamAttr[j]){
                                if(attributes.contains("&&")){
                                    objects=attributes.split("&&");
                                    for(int k=0;k<objects.size();k++){
                                        id = objects[k].split("{")[0];
                                        next = objects[k].split("{")[1];
                                        attr = next.split("(")[0];
                                        last = next.split("(")[1];
                                        last.chop(2);
                                        before = last.split("><")[0];
                                        after = last.split("><")[1];
                                        homeAttr[j].append({id,attr,before,after});
                                    }
                                    break;
                                }
                                else{
                                    id = attributes.split("{")[0];
                                    next = attributes.split("{")[1];
                                    attr = next.split("(")[0];
                                    last = next.split("(")[1];
                                    last.chop(2);
                                    before = last.split("><")[0];
                                    after = last.split("><")[1];
                                    homeAttr[j].append({id,attr,before,after});
                                    break;
                                }
                            }
                        }
                    }
                    else if(flag==1){
                        for(int j=0;j<teamVals.size();j++){
                            if(tag==teamVals[j]){
                                homeVals.replace(j,line.split("=")[1]);
                                break;
                            }
                        }
                    }
                    else if(flag==2){
                        for(int j=0;j<teamAttr.size();j++){
                            if(tag==teamAttr[j]){
                                if(attributes.contains("&&")){
                                    objects=attributes.split("&&");
                                    for(int k=0;k<objects.size();k++){
                                        id = objects[k].split("{")[0];
                                        next = objects[k].split("{")[1];
                                        attr = next.split("(")[0];
                                        last = next.split("(")[1];
                                        last.chop(2);
                                        before = last.split("><")[0];
                                        after = last.split("><")[1];
                                        awayAttr[j].append({id,attr,before,after});
                                    }
                                    break;
                                }
                                else{
                                    id = attributes.split("{")[0];
                                    next = attributes.split("{")[1];
                                    attr = next.split("(")[0];
                                    last = next.split("(")[1];
                                    last.chop(2);
                                    before = last.split("><")[0];
                                    after = last.split("><")[1];
                                    awayAttr[j].append({id,attr,before,after});
                                    break;
                                }
                            }
                        }
                    }
                    else if(flag==3){
                        for(int j=0;j<teamVals.size();j++){
                            if(tag==teamVals[j]){
                                awayVals.replace(j,line.split("=")[1]);
                                break;
                            }
                        }
                    }
                    else if(flag==4){
                        for(int j=0;j<gameValueTags.size();j++){
                            if(tag==gameValueTags[j]){
                                gameVals.replace(j,line.split("=")[1]);
                                break;
                            }
                        }
                    }
                    else if(flag==5){
                        for(int j=0;j<groupTags.size();j++){
                            if(tag==groupTags[j]){
                                if(attributes.contains("&&")){
                                    objects=attributes.split("&&");
                                    for(int k=0;k<objects.size();k++){
                                        id = objects[k].split("{")[0];
                                        next = objects[k].split("{")[1];
                                        attr = next.split("(")[0];
                                        last = next.split("(")[1];
                                        last.chop(2);
                                        before = last.split("><")[0];
                                        after = last.split("><")[1];
                                        scbdGroups[j].append({id,attr,before,after});
                                    }
                                    break;
                                }
                                else{
                                    id = attributes.split("{")[0];
                                    next = attributes.split("{")[1];
                                    attr = next.split("(")[0];
                                    last = next.split("(")[1];
                                    last.chop(2);
                                    before = last.split("><")[0];
                                    after = last.split("><")[1];
                                    scbdGroups[j].append({id,attr,before,after});
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Overlay::ScoreboardShow(bool tf)
{
    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
    QPropertyAnimation *a = new QPropertyAnimation(eff,"opacity");
    if(tf==true){
        a->setDuration(300);
        a->setStartValue(0);
        a->setEndValue(1);
        a->start(QPropertyAnimation::DeleteWhenStopped);
    }
    else{
        a->setDuration(300);
        a->setStartValue(1);
        a->setEndValue(0);
        a->start(QPropertyAnimation::DeleteWhenStopped);
    }
    ui->Scoreboard->setGraphicsEffect(eff);
}

void Overlay::paintScoreboard(QByteArray scbdbytes){

    renderer.load(scbdbytes);
    QPixmap graphic(renderer.defaultSize());
    graphic.fill(Qt::transparent);
    QPainter pixPainter(&graphic);
    pixPainter.setRenderHints(QPainter::Antialiasing|QPainter::SmoothPixmapTransform|QPainter::HighQualityAntialiasing);
    renderer.render(&pixPainter);
    ui->Scoreboard->setPixmap(graphic);
}
