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
    void loadScoreboard(QString filename);
    void updateClock(QString clock_text);
    void updateTeams(QString home_name, QString home_color, QString away_name, QString away_color);


public slots:
    void UpdateScoreboard(QString text);
    void ScoreboardShow(bool);

private:
    Ui::Overlay *ui;
};

#endif // OVERLAY_H
