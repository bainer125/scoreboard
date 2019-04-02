#include "intermission.h"
#include "ui_intermission.h"
#include <QGraphicsDropShadowEffect>
#include <QGraphicsEffect>

Intermission::Intermission(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Intermission)
{
    ui->setupUi(this);
}

Intermission::~Intermission()
{
    delete ui;
}
void Intermission::Home_Graphic(QString text)
{
    ui->Home_Graphic->setStyleSheet(text);
}
void Intermission::Away_Graphic(QString text)
{
    ui->Away_Graphic->setStyleSheet(text);
}
void Intermission::Home_Name(QString text)
{
    ui->Home_Name->setText(text);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setBlurRadius(1);
    effect->setXOffset(2);
    effect->setYOffset(2);
    effect->setColor(Qt::black);
    ui->Home_Name->setGraphicsEffect(effect);
}
void Intermission::Away_Name(QString text)
{
    ui->Away_Name->setText(text);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setBlurRadius(1);
    effect->setXOffset(2);
    effect->setYOffset(2);
    effect->setColor(Qt::black);
    ui->Away_Name->setGraphicsEffect(effect);
}
void Intermission::Home_Score(int text)
{
    ui->Home_Score->setText(QString::number(text));
}
void Intermission::Away_Score(int text)
{
    ui->Away_Score->setText(QString::number(text));
}
void Intermission::period(int text)
{
    if(text == 1){
        ui->Period->setText(QString::number(text) + "st Intermission");
    }
    else if(text == 2){
        ui->Period->setText(QString::number(text) + "nd Intermission");
    }
    else if(text == 3){
        ui->Period->setText("End of Regulation");
    }
    else if(text < 1){
        ui->Period->setText("");
    }
    else if(text == 4){
        ui->Period->setText("End of OT");
    }
    else if(text == 5){
        ui->Period->setText("End of 2OT");
    }
    else if(text == 6){
        ui->Period->setText("End of 3OT");
    }
    else if(text == 7){
        ui->Period->setText("End of 4OT");
    }
    else if(text == 10){
        ui->Period->setText("Final");
    }
    else if(text == 11){
        ui->Period->setText("Final/OT");
    }
    else if(text == 12){
        ui->Period->setText("Final/2OT");
    }
    else if(text == 13){
        ui->Period->setText("Final/3OT");
    }
    else if(text == 14){
        ui->Period->setText("Final/4OT");
    }
}
