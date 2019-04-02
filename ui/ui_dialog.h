/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *Scoreboard;
    QLabel *Home_Score;
    QLabel *Home_Pen_Back;
    QLabel *Home_Color;
    QLabel *Away_Graphic;
    QLabel *Clock;
    QLabel *Home_Name;
    QLabel *Away_Score;
    QLabel *Away_Pen_Back;
    QLabel *EvenBack;
    QLabel *Away_Name;
    QLabel *EvenText;
    QLabel *HPPClock;
    QLabel *HPPText;
    QLabel *Background;
    QLabel *Home_Graphic;
    QLabel *Away_Color;
    QLabel *EvenClock;
    QLabel *Period;
    QLabel *APPText;
    QLabel *APPClock;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1290, 210);
        Dialog->setLayoutDirection(Qt::LeftToRight);
        Dialog->setAutoFillBackground(false);
        Dialog->setStyleSheet(QString::fromUtf8("background: transparent"));
        Scoreboard = new QFrame(Dialog);
        Scoreboard->setObjectName(QString::fromUtf8("Scoreboard"));
        Scoreboard->setGeometry(QRect(0, 0, 1280, 141));
        Scoreboard->setStyleSheet(QString::fromUtf8("background: transparent"));
        Scoreboard->setFrameShape(QFrame::NoFrame);
        Scoreboard->setFrameShadow(QFrame::Raised);
        Home_Score = new QLabel(Scoreboard);
        Home_Score->setObjectName(QString::fromUtf8("Home_Score"));
        Home_Score->setGeometry(QRect(300, 10, 75, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Trade Gothic Next LT Pro"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        Home_Score->setFont(font);
        Home_Score->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        Home_Score->setAlignment(Qt::AlignCenter);
        Home_Pen_Back = new QLabel(Scoreboard);
        Home_Pen_Back->setObjectName(QString::fromUtf8("Home_Pen_Back"));
        Home_Pen_Back->setGeometry(QRect(10, 72, 292, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Trade Gothic Next LT Pro"));
        Home_Pen_Back->setFont(font1);
        Home_Pen_Back->setStyleSheet(QString::fromUtf8("background: transparent"));
        Home_Color = new QLabel(Scoreboard);
        Home_Color->setObjectName(QString::fromUtf8("Home_Color"));
        Home_Color->setGeometry(QRect(172, 272, 195, 42));
        Home_Color->setFont(font1);
        Home_Color->setStyleSheet(QString::fromUtf8("background: black"));
        Away_Graphic = new QLabel(Scoreboard);
        Away_Graphic->setObjectName(QString::fromUtf8("Away_Graphic"));
        Away_Graphic->setGeometry(QRect(475, 5, 289, 70));
        Away_Graphic->setFont(font1);
        Away_Graphic->setStyleSheet(QString::fromUtf8("background:transparent"));
        Clock = new QLabel(Scoreboard);
        Clock->setObjectName(QString::fromUtf8("Clock"));
        Clock->setEnabled(true);
        Clock->setGeometry(QRect(1082, 10, 141, 50));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Clock->sizePolicy().hasHeightForWidth());
        Clock->setSizePolicy(sizePolicy);
        Clock->setFont(font);
        Clock->setAutoFillBackground(false);
        Clock->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        Clock->setAlignment(Qt::AlignCenter);
        Home_Name = new QLabel(Scoreboard);
        Home_Name->setObjectName(QString::fromUtf8("Home_Name"));
        Home_Name->setGeometry(QRect(912, 322, 196, 42));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Trade Gothic Next LT Pro"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setWeight(75);
        Home_Name->setFont(font2);
        Home_Name->setAutoFillBackground(false);
        Home_Name->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        Home_Name->setAlignment(Qt::AlignCenter);
        Away_Score = new QLabel(Scoreboard);
        Away_Score->setObjectName(QString::fromUtf8("Away_Score"));
        Away_Score->setGeometry(QRect(395, 10, 75, 50));
        Away_Score->setFont(font);
        Away_Score->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        Away_Score->setAlignment(Qt::AlignCenter);
        Away_Pen_Back = new QLabel(Scoreboard);
        Away_Pen_Back->setObjectName(QString::fromUtf8("Away_Pen_Back"));
        Away_Pen_Back->setGeometry(QRect(467, 72, 292, 50));
        Away_Pen_Back->setFont(font1);
        Away_Pen_Back->setStyleSheet(QString::fromUtf8("background: transparent"));
        EvenBack = new QLabel(Scoreboard);
        EvenBack->setObjectName(QString::fromUtf8("EvenBack"));
        EvenBack->setGeometry(QRect(939, 72, 310, 50));
        EvenBack->setFont(font1);
        EvenBack->setStyleSheet(QString::fromUtf8("background: transparent"));
        Away_Name = new QLabel(Scoreboard);
        Away_Name->setObjectName(QString::fromUtf8("Away_Name"));
        Away_Name->setGeometry(QRect(172, 322, 195, 42));
        Away_Name->setFont(font2);
        Away_Name->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        Away_Name->setFrameShadow(QFrame::Plain);
        Away_Name->setAlignment(Qt::AlignCenter);
        EvenText = new QLabel(Scoreboard);
        EvenText->setObjectName(QString::fromUtf8("EvenText"));
        EvenText->setGeometry(QRect(977, 73, 119, 42));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Trade Gothic Next LT Pro"));
        font3.setPointSize(22);
        font3.setBold(false);
        font3.setWeight(50);
        EvenText->setFont(font3);
        EvenText->setAutoFillBackground(false);
        EvenText->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        EvenText->setAlignment(Qt::AlignCenter);
        HPPClock = new QLabel(Scoreboard);
        HPPClock->setObjectName(QString::fromUtf8("HPPClock"));
        HPPClock->setGeometry(QRect(176, 73, 120, 42));
        HPPClock->setFont(font2);
        HPPClock->setAutoFillBackground(false);
        HPPClock->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        HPPClock->setAlignment(Qt::AlignCenter);
        HPPText = new QLabel(Scoreboard);
        HPPText->setObjectName(QString::fromUtf8("HPPText"));
        HPPText->setGeometry(QRect(48, 73, 119, 42));
        HPPText->setFont(font3);
        HPPText->setAutoFillBackground(false);
        HPPText->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        HPPText->setAlignment(Qt::AlignCenter);
        Background = new QLabel(Scoreboard);
        Background->setObjectName(QString::fromUtf8("Background"));
        Background->setGeometry(QRect(2, 2, 1255, 75));
        Background->setFont(font1);
        Background->setStyleSheet(QString::fromUtf8("background: url(./Graphics/scbd.png)"));
        Home_Graphic = new QLabel(Scoreboard);
        Home_Graphic->setObjectName(QString::fromUtf8("Home_Graphic"));
        Home_Graphic->setGeometry(QRect(4, 5, 289, 70));
        Home_Graphic->setFont(font1);
        Home_Graphic->setStyleSheet(QString::fromUtf8("background:transparent"));
        Away_Color = new QLabel(Scoreboard);
        Away_Color->setObjectName(QString::fromUtf8("Away_Color"));
        Away_Color->setGeometry(QRect(932, 272, 195, 42));
        Away_Color->setFont(font1);
        Away_Color->setStyleSheet(QString::fromUtf8("background: black"));
        EvenClock = new QLabel(Scoreboard);
        EvenClock->setObjectName(QString::fromUtf8("EvenClock"));
        EvenClock->setGeometry(QRect(1098, 73, 120, 42));
        EvenClock->setFont(font2);
        EvenClock->setAutoFillBackground(false);
        EvenClock->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        EvenClock->setAlignment(Qt::AlignCenter);
        Period = new QLabel(Scoreboard);
        Period->setObjectName(QString::fromUtf8("Period"));
        Period->setGeometry(QRect(950, 10, 95, 50));
        Period->setFont(font);
        Period->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        Period->setAlignment(Qt::AlignCenter);
        APPText = new QLabel(Scoreboard);
        APPText->setObjectName(QString::fromUtf8("APPText"));
        APPText->setGeometry(QRect(473, 73, 119, 42));
        APPText->setFont(font3);
        APPText->setAutoFillBackground(false);
        APPText->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        APPText->setAlignment(Qt::AlignCenter);
        APPClock = new QLabel(Scoreboard);
        APPClock->setObjectName(QString::fromUtf8("APPClock"));
        APPClock->setGeometry(QRect(601, 73, 120, 42));
        APPClock->setFont(font2);
        APPClock->setAutoFillBackground(false);
        APPClock->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        APPClock->setAlignment(Qt::AlignCenter);
        Home_Graphic->raise();
        Home_Pen_Back->raise();
        Home_Color->raise();
        Away_Graphic->raise();
        Home_Name->raise();
        Away_Pen_Back->raise();
        EvenBack->raise();
        Away_Name->raise();
        Background->raise();
        Away_Color->raise();
        Home_Score->raise();
        Period->raise();
        HPPText->raise();
        HPPClock->raise();
        EvenText->raise();
        EvenClock->raise();
        Clock->raise();
        Away_Score->raise();
        APPText->raise();
        APPClock->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Scoreboard", nullptr));
        Home_Score->setText(QApplication::translate("Dialog", "0", nullptr));
        Home_Pen_Back->setText(QString());
        Home_Color->setText(QString());
        Away_Graphic->setText(QString());
        Clock->setText(QApplication::translate("Dialog", "00:00", nullptr));
        Home_Name->setText(QApplication::translate("Dialog", "Home", nullptr));
        Away_Score->setText(QApplication::translate("Dialog", "0", nullptr));
        Away_Pen_Back->setText(QString());
        EvenBack->setText(QString());
        Away_Name->setText(QApplication::translate("Dialog", "Away", nullptr));
        EvenText->setText(QString());
        HPPClock->setText(QString());
        HPPText->setText(QString());
        Background->setText(QString());
        Home_Graphic->setText(QString());
        Away_Color->setText(QString());
        EvenClock->setText(QString());
        Period->setText(QApplication::translate("Dialog", "1st", nullptr));
        APPText->setText(QString());
        APPClock->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
