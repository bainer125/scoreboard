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
static QString clockText = "clockText", homeName = "homeName", awayName = "awayName", homeScore, awayScore;
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

void Overlay::UpdateScoreboard(QString text)
{
}

void Overlay::updateClock(QString clock_text){
    scbdData=svg.updateVal(scbdData,clockText,clock_text);
    QSvgRenderer otherrender(scbdData);
    QPixmap othergraphic(otherrender.defaultSize());
    othergraphic.fill(Qt::transparent);
    QPainter pixPainter(&othergraphic);
    otherrender.render(&pixPainter);
    ui->Scoreboard->setPixmap(othergraphic);
}

void Overlay::updateTeams(QString home_name, QString away_name, QString home_color, QString away_color){
    scbdData=svg.updateVal(scbdData,homeName,home_name);
    scbdData=svg.updateVal(scbdData,awayName,away_name);
    scbdData=svg.updateAttr(scbdData,homeColor,"style",home_color);
    scbdData=svg.updateAttr(scbdData,awayColor,"style",away_color);

    QSvgRenderer otherrender(scbdData);
    QPixmap othergraphic(otherrender.defaultSize());
    othergraphic.fill(Qt::transparent);
    QPainter pixPainter(&othergraphic);
    otherrender.render(&pixPainter);
    ui->Scoreboard->setPixmap(othergraphic);
}

void Overlay::loadScoreboard(QString filepath){
    QFile scoreboard(filepath);
    scoreboard.open(QIODevice::ReadOnly);
    scbdData = scoreboard.readAll();
    QSvgRenderer svgRenderer(scbdData);
    QPixmap graphic(svgRenderer.defaultSize());
    graphic.fill(Qt::transparent);
    // create painter to act over pixmap
    QPainter pixPainter(&graphic);
    // use renderer to render over painter which paints on pixmap
    svgRenderer.render(&pixPainter);
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
