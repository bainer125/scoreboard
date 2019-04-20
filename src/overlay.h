#ifndef OVERLAY_H
#define OVERLAY_H

#include <QDialog>
#include <QString>
#include <QFile>
#include <QDir>

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
    void updateTeams(QDir home, QDir away);
    void updateScore(int home_score, int away_score);
    void updatePeriod(int period);
    void updatePenalties(int hp1, int hp2, int ap1, int ap2, int hp1m, int hp1s, int hp2m, int hp2s, int ap1m, int ap1s, int ap2m, int ap2s);
    void clearPenalties(QString shown);
    void updateShots(int home_shots, int away_shots);
    void paintScoreboard(QByteArray scbdbytes);

    void parsescbdConfig(QVector<QString> config);
    void loadTeamConf(QDir homeDir, QDir awayDir);


public slots:
    void ScoreboardShow(bool);

private:
    Ui::Overlay *ui;
};

#endif // OVERLAY_H
