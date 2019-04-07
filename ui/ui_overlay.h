/********************************************************************************
** Form generated from reading UI file 'overlay.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERLAY_H
#define UI_OVERLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Overlay
{
public:
    QLabel *Scoreboard;

    void setupUi(QDialog *Overlay)
    {
        if (Overlay->objectName().isEmpty())
            Overlay->setObjectName(QString::fromUtf8("Overlay"));
        Overlay->resize(1920, 1080);
        Overlay->setLayoutDirection(Qt::LeftToRight);
        Overlay->setAutoFillBackground(false);
        Overlay->setStyleSheet(QString::fromUtf8("background: transparent"));
        Overlay->setSizeGripEnabled(true);
        Overlay->setModal(false);
        Scoreboard = new QLabel(Overlay);
        Scoreboard->setObjectName(QString::fromUtf8("Scoreboard"));
        Scoreboard->setGeometry(QRect(50, 10, 1471, 141));
        Scoreboard->setStyleSheet(QString::fromUtf8("background-image: url(/home/bainer/Downloads/scoreboard-01.svg)"));

        retranslateUi(Overlay);

        QMetaObject::connectSlotsByName(Overlay);
    } // setupUi

    void retranslateUi(QDialog *Overlay)
    {
        Overlay->setWindowTitle(QApplication::translate("Overlay", "Overlay", nullptr));
        Scoreboard->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Overlay: public Ui_Overlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERLAY_H
