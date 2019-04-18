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

using namespace std;

static updatesvg svg;

static QFile intermission;
static QByteArray scbdData;
static QString periodText = "periodText", clockText = "clockText", homeName = "homeName", awayName = "awayName", homeScore = "homeScore", awayScore = "awayScore";
static QString homeShots = "homeShots", awayShots = "awayShots";
static QString homeColor = "homeColor", awayColor = "awayColor";

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
    scbdData=svg.updateVal(scbdData,clockText,clock_text);
    paintScoreboard(scbdData);
}

void Overlay::updateTeams(QString home_name, QString away_name, QString home_color, QString away_color){
    scbdData=svg.updateVal(scbdData,homeName,home_name);
    scbdData=svg.updateVal(scbdData,awayName,away_name);
    scbdData=svg.updateAttr(scbdData,homeColor,"style",home_color);
    scbdData=svg.updateAttr(scbdData,awayColor,"style",away_color);
    scbdData=svg.updateAttr(scbdData,"homePenaltyColor","style",away_color+";fill-opacity:0.78431373");
    scbdData=svg.updateAttr(scbdData,"awayPenaltyColor","style",home_color+";fill-opacity:0.78431373");

    paintScoreboard(scbdData);
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
    QFile scoreboard(filepath);
    scoreboard.open(QIODevice::ReadOnly);
    scbdData = scoreboard.readAll();
    paintScoreboard(scbdData);
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
    QSvgRenderer renderer(scbdbytes);
    QPixmap graphic(renderer.defaultSize());
    graphic.fill(Qt::transparent);
    QPainter pixPainter(&graphic);
    renderer.render(&pixPainter);
    ui->Scoreboard->setPixmap(graphic);
}
