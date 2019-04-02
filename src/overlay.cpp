#include "overlay.h"
#include "ui_overlay.h"
#include <QGraphicsDropShadowEffect>
#include <QGraphicsEffect>
#include <QPropertyAnimation>

Overlay::Overlay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Overlay)
{
    ui->setupUi(this);
}

Overlay::~Overlay()
{
    delete ui;
}

void Overlay::APPText(QString text)
{
    ui->APPText->setText(text);
}

void Overlay::APPClock(QString text)
{
    ui->APPClock->setText(text);
}

void Overlay::Away_Pen_Back(QString text)
{
    ui->Away_Pen_Back->setStyleSheet(text);
}

void Overlay::HPPText(QString text)
{
    ui->HPPText->setText(text);
}

void Overlay::HPPClock(QString text)
{
    ui->HPPClock->setText(text);
}

void Overlay::Home_Pen_Back(QString text)
{
    ui->Home_Pen_Back->setStyleSheet(text);
}

void Overlay::EvenText(QString text)
{
    ui->EvenText->setText(text);
}

void Overlay::EvenClock(QString text)
{
    ui->EvenClock->setText(text);
}

void Overlay::EvenBack(QString text)
{
    ui->EvenBack->setStyleSheet(text);
}

void Overlay::Home_Name(QString text)
{
    ui->Home_Name->setText(text);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setBlurRadius(1);
    effect->setXOffset(2);
    effect->setYOffset(2);
    effect->setColor(Qt::black);
    ui->Home_Name->setGraphicsEffect(effect);
}
void Overlay::Away_Name(QString text)
{
    ui->Away_Name->setText(text);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setBlurRadius(1);
    effect->setXOffset(2);
    effect->setYOffset(2);
    effect->setColor(Qt::black);
    ui->Away_Name->setGraphicsEffect(effect);
}
void Overlay::Home_Score(int text)
{
    ui->Home_Score->setText(QString::number(text));
}
void Overlay::Away_Score(int text)
{
    ui->Away_Score->setText(QString::number(text));
}
void Overlay::period(int text)
{
    if(text == 1){
        ui->Period->setText(QString::number(text) + "st");
    }
    else if(text == 2){
        ui->Period->setText(QString::number(text) + "nd");
    }
    else if(text == 3){
        ui->Period->setText(QString::number(text) + "rd");
    }
    else if(text < 1){
        ui->Period->setText("1st");
    }
    else if(text == 4){
        ui->Period->setText("OT");
    }
    else if(text == 5){
        ui->Period->setText("2OT");
    }
    else if(text == 6){
        ui->Period->setText("3OT");
    }
    else if(text == 7){
        ui->Period->setText("4OT");
    }
}

void Overlay::Home_Color(QString text)
{
    ui->Home_Color->setStyleSheet(text);
}

void Overlay::Away_Color(QString text)
{
    ui->Away_Color->setStyleSheet(text);
}

void Overlay::Home_Graphic(QString text)
{
    ui->Home_Graphic->setStyleSheet(text);
}

void Overlay::Away_Graphic(QString text)
{
    ui->Away_Graphic->setStyleSheet(text);
}

void Overlay::Clock(QString text)
{
    ui->Clock->setText(text);
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
