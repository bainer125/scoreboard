/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *Period;
    QLabel *Home_Name;
    QLabel *Away_Name;
    QLabel *Away_Score;
    QLabel *Clock;
    QLabel *Home_Score;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(340, 80);
        Dialog->setLayoutDirection(Qt::LeftToRight);
        Dialog->setAutoFillBackground(false);
        Dialog->setStyleSheet(QStringLiteral("background: url(/home/stream/Desktop/ACHA Graphics/scoreboard.png)"));
        Period = new QLabel(Dialog);
        Period->setObjectName(QStringLiteral("Period"));
        Period->setGeometry(QRect(310, 40, 55, 41));
        QFont font;
        font.setPointSize(72);
        Period->setFont(font);
        Period->setStyleSheet(QStringLiteral("background:transparent"));
        Home_Name = new QLabel(Dialog);
        Home_Name->setObjectName(QStringLiteral("Home_Name"));
        Home_Name->setGeometry(QRect(10, -20, 139, 67));
        QFont font1;
        font1.setPointSize(36);
        Home_Name->setFont(font1);
        Home_Name->setAutoFillBackground(false);
        Home_Name->setStyleSheet(QStringLiteral("background:transparent"));
        Away_Name = new QLabel(Dialog);
        Away_Name->setObjectName(QStringLiteral("Away_Name"));
        Away_Name->setGeometry(QRect(10, 20, 124, 67));
        Away_Name->setFont(font1);
        Away_Name->setStyleSheet(QStringLiteral("background:transparent"));
        Away_Score = new QLabel(Dialog);
        Away_Score->setObjectName(QStringLiteral("Away_Score"));
        Away_Score->setGeometry(QRect(170, 40, 55, 41));
        Away_Score->setFont(font);
        Away_Score->setStyleSheet(QStringLiteral("background:transparent"));
        Away_Score->setAlignment(Qt::AlignCenter);
        Clock = new QLabel(Dialog);
        Clock->setObjectName(QStringLiteral("Clock"));
        Clock->setEnabled(true);
        Clock->setGeometry(QRect(240, 0, 91, 41));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Clock->sizePolicy().hasHeightForWidth());
        Clock->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QStringLiteral("TradeGothic"));
        font2.setPointSize(72);
        font2.setBold(true);
        font2.setWeight(75);
        Clock->setFont(font2);
        Clock->setAutoFillBackground(false);
        Clock->setStyleSheet(QStringLiteral("background:transparent"));
        Clock->setAlignment(Qt::AlignCenter);
        Home_Score = new QLabel(Dialog);
        Home_Score->setObjectName(QStringLiteral("Home_Score"));
        Home_Score->setGeometry(QRect(120, 0, 160, 41));
        Home_Score->setMinimumSize(QSize(160, 0));
        QFont font3;
        font3.setFamily(QStringLiteral("TradeGothic"));
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        Home_Score->setFont(font3);
        Home_Score->setStyleSheet(QStringLiteral("background:transparent"));
        Home_Score->setAlignment(Qt::AlignCenter);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        Period->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:20pt; color:#ffffff;\">0</span></p></body></html>", nullptr));
        Home_Name->setText(QApplication::translate("Dialog", "Home", nullptr));
        Away_Name->setText(QApplication::translate("Dialog", "Away", nullptr));
        Away_Score->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:20pt; color:#ffffff;\">0</span></p></body></html>", nullptr));
        Clock->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:22pt; color:#ffffff;\">00:00</span></p></body></html>", nullptr));
        Home_Score->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:20pt; color:#ffffff;\">0</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
