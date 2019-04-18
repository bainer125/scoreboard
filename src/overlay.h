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
    void updateScore(int home_score, int away_score);
    void updatePeriod(int period);
    void updatePenalties(int hp1, int hp2, int ap1, int ap2, int hp1m, int hp1s, int hp2m, int hp2s, int ap1m, int ap1s, int ap2m, int ap2s);
    void clearPenalties(QString shown);
    void updateShots(int home_shots, int away_shots);
    void paintScoreboard(QByteArray scbdbytes);


public slots:
    void ScoreboardShow(bool);

private:
    Ui::Overlay *ui;
};

#endif // OVERLAY_H
