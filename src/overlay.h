#ifndef OVERLAY_H
#define OVERLAY_H

#include <QDialog>
#include <QString>

namespace Ui {
    class Overlay;
}

class Overlay: public QDialog
{
    Q_OBJECT

public:
    explicit Overlay(QWidget *parent = 0);
    ~Overlay();
public slots:
    void Home_Graphic(QString);
    void Away_Graphic(QString);
    void Home_Name(QString);
    void Away_Name(QString);
    void Home_Score(int);
    void Away_Score(int);
    void period(int);
    void Clock(QString);
    void Home_Color(QString);
    void Away_Color(QString);
    void APPText(QString);
    void APPClock(QString);
    void Away_Pen_Back(QString);
    void HPPText(QString);
    void HPPClock(QString);
    void Home_Pen_Back(QString);
    void EvenBack(QString);
    void EvenClock(QString);
    void EvenText(QString);
    void ScoreboardShow(bool);

private:
    Ui::Overlay *ui;
};

#endif // OVERLAY_H
