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
    void UpdateScoreboard(QString text);
    void ScoreboardShow(bool);

private:
    Ui::Overlay *ui;
};

#endif // OVERLAY_H
