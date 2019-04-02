/********************************************************************************
** Form generated from reading UI file 'intermission.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERMISSION_H
#define UI_INTERMISSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Intermission
{
public:
    QLabel *Period;
    QLabel *Home_Name;
    QLabel *Away_Name;
    QLabel *Away_Score;
    QLabel *Home_Score;
    QLabel *Home_Graphic;
    QLabel *Away_Graphic;
    QLabel *Bkg_Graphic;

    void setupUi(QDialog *Intermission)
    {
        if (Intermission->objectName().isEmpty())
            Intermission->setObjectName(QString::fromUtf8("Intermission"));
        Intermission->resize(1762, 304);
        Intermission->setLayoutDirection(Qt::LeftToRight);
        Intermission->setAutoFillBackground(false);
        Intermission->setStyleSheet(QString::fromUtf8("background: #00ff00"));
        Period = new QLabel(Intermission);
        Period->setObjectName(QString::fromUtf8("Period"));
        Period->setGeometry(QRect(521, 30, 720, 131));
        QFont font;
        font.setFamily(QString::fromUtf8("Trade Gothic Next LT Pro"));
        font.setPointSize(54);
        font.setBold(true);
        font.setWeight(75);
        Period->setFont(font);
        Period->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        Period->setAlignment(Qt::AlignCenter);
        Home_Name = new QLabel(Intermission);
        Home_Name->setObjectName(QString::fromUtf8("Home_Name"));
        Home_Name->setGeometry(QRect(400, 2, 196, 42));
        QFont font1;
        font1.setFamily(QString::fromUtf8("TradeGothic"));
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        Home_Name->setFont(font1);
        Home_Name->setAutoFillBackground(false);
        Home_Name->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        Home_Name->setAlignment(Qt::AlignCenter);
        Away_Name = new QLabel(Intermission);
        Away_Name->setObjectName(QString::fromUtf8("Away_Name"));
        Away_Name->setGeometry(QRect(324, 2, 195, 42));
        Away_Name->setFont(font1);
        Away_Name->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        Away_Name->setFrameShadow(QFrame::Plain);
        Away_Name->setAlignment(Qt::AlignCenter);
        Away_Score = new QLabel(Intermission);
        Away_Score->setObjectName(QString::fromUtf8("Away_Score"));
        Away_Score->setGeometry(QRect(1285, 16, 101, 151));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Trade Gothic Next LT Pro"));
        font2.setPointSize(120);
        font2.setBold(true);
        font2.setWeight(75);
        Away_Score->setFont(font2);
        Away_Score->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        Away_Score->setAlignment(Qt::AlignCenter);
        Home_Score = new QLabel(Intermission);
        Home_Score->setObjectName(QString::fromUtf8("Home_Score"));
        Home_Score->setGeometry(QRect(375, 16, 101, 151));
        Home_Score->setFont(font2);
        Home_Score->setStyleSheet(QString::fromUtf8("color: white; background: transparent"));
        Home_Score->setAlignment(Qt::AlignCenter);
        Home_Graphic = new QLabel(Intermission);
        Home_Graphic->setObjectName(QString::fromUtf8("Home_Graphic"));
        Home_Graphic->setGeometry(QRect(5, 5, 877, 292));
        Home_Graphic->setFont(font1);
        Home_Graphic->setAutoFillBackground(false);
        Home_Graphic->setStyleSheet(QString::fromUtf8("background: url(./Graphics/Intermission/itmsn_home.png)"));
        Home_Graphic->setAlignment(Qt::AlignCenter);
        Away_Graphic = new QLabel(Intermission);
        Away_Graphic->setObjectName(QString::fromUtf8("Away_Graphic"));
        Away_Graphic->setGeometry(QRect(881, 5, 877, 292));
        Away_Graphic->setFont(font1);
        Away_Graphic->setAutoFillBackground(false);
        Away_Graphic->setStyleSheet(QString::fromUtf8("background: url(./Graphics/Intermission/itmsn_away.png)"));
        Away_Graphic->setAlignment(Qt::AlignCenter);
        Bkg_Graphic = new QLabel(Intermission);
        Bkg_Graphic->setObjectName(QString::fromUtf8("Bkg_Graphic"));
        Bkg_Graphic->setGeometry(QRect(0, 0, 1762, 301));
        Bkg_Graphic->setFont(font1);
        Bkg_Graphic->setAutoFillBackground(false);
        Bkg_Graphic->setStyleSheet(QString::fromUtf8("background: url(./Graphics/Intermission/itmsn.png)"));
        Bkg_Graphic->setAlignment(Qt::AlignCenter);
        Home_Name->raise();
        Away_Name->raise();
        Home_Graphic->raise();
        Away_Graphic->raise();
        Bkg_Graphic->raise();
        Home_Score->raise();
        Period->raise();
        Away_Score->raise();

        retranslateUi(Intermission);

        QMetaObject::connectSlotsByName(Intermission);
    } // setupUi

    void retranslateUi(QDialog *Intermission)
    {
        Intermission->setWindowTitle(QApplication::translate("Intermission", "Intermission", nullptr));
        Period->setText(QApplication::translate("Intermission", "Pre-Game", nullptr));
        Home_Name->setText(QApplication::translate("Intermission", "Home", nullptr));
        Away_Name->setText(QApplication::translate("Intermission", "Away", nullptr));
        Away_Score->setText(QApplication::translate("Intermission", "0", nullptr));
        Home_Score->setText(QApplication::translate("Intermission", "0", nullptr));
        Home_Graphic->setText(QString());
        Away_Graphic->setText(QString());
        Bkg_Graphic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Intermission: public Ui_Intermission {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERMISSION_H
