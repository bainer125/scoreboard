#include "dialog.h"
#include "ui_dialog.h"
#include <QGraphicsDropShadowEffect>
#include <QGraphicsEffect>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::APPText(QString text)
{
    ui->APPText->setText(text);
}

void Dialog::APPClock(QString text)
{
    ui->APPClock->setText(text);
}

void Dialog::Away_Pen_Back(QString text)
{
    ui->Away_Pen_Back->setStyleSheet(text);
}

void Dialog::HPPText(QString text)
{
    ui->HPPText->setText(text);
}

void Dialog::HPPClock(QString text)
{
    ui->HPPClock->setText(text);
}

void Dialog::Home_Pen_Back(QString text)
{
    ui->Home_Pen_Back->setStyleSheet(text);
}

void Dialog::EvenText(QString text)
{
    ui->EvenText->setText(text);
}

void Dialog::EvenClock(QString text)
{
    ui->EvenClock->setText(text);
}

void Dialog::EvenBack(QString text)
{
    ui->EvenBack->setStyleSheet(text);
}

void Dialog::Home_Name(QString text)
{
    ui->Home_Name->setText(text);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setBlurRadius(1);
    effect->setXOffset(2);
    effect->setYOffset(2);
    effect->setColor(Qt::black);
    ui->Home_Name->setGraphicsEffect(effect);
}
void Dialog::Away_Name(QString text)
{
    ui->Away_Name->setText(text);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setBlurRadius(1);
    effect->setXOffset(2);
    effect->setYOffset(2);
    effect->setColor(Qt::black);
    ui->Away_Name->setGraphicsEffect(effect);
}
void Dialog::Home_Score(int text)
{
    ui->Home_Score->setText(QString::number(text));
}
void Dialog::Away_Score(int text)
{
    ui->Away_Score->setText(QString::number(text));
}
void Dialog::period(int text)
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

void Dialog::Home_Color(QString text)
{
    ui->Home_Color->setStyleSheet(text);
}

void Dialog::Away_Color(QString text)
{
    ui->Away_Color->setStyleSheet(text);
}

void Dialog::Home_Graphic(QString text)
{
    ui->Home_Graphic->setStyleSheet(text);
}

void Dialog::Away_Graphic(QString text)
{
    ui->Away_Graphic->setStyleSheet(text);
}

void Dialog::Clock(QString text)
{
    ui->Clock->setText(text);
}
