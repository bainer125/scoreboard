#include "overlay.h"
#include "ui_overlay.h"
#include "updatesvg.h"
#include <QGraphicsDropShadowEffect>
#include <QGraphicsEffect>
#include <QPropertyAnimation>
#include <QFile>
#include <QSvgRenderer>

using namespace std;

static updatesvg svg;

static QFile intermission;
static QByteArray scbdData;

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

void Overlay::UpdateScoreboard(QString text)
{
}

void Overlay::updateClock(QString clockText){
    scbdData=svg.updateVal(scbdData,"clockText",clockText);
    QSvgRenderer otherrender(scbdData);
    QPixmap othergraphic(otherrender.defaultSize());
    ui->Scoreboard->setPixmap(othergraphic);
}

void Overlay::loadScoreboard(QString filepath){
    QFile scoreboard(filepath);
    scoreboard.open(QIODevice::ReadOnly);
    scbdData = scoreboard.readAll();
    QSvgRenderer svgRenderer(scbdData);
    QPixmap graphic(svgRenderer.defaultSize());
    ui->Scoreboard->setFixedSize(400,200);
    ui->Scoreboard->setPixmap(graphic);
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
