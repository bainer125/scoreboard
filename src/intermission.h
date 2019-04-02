#ifndef INTERMISSION_H
#define INTERMISSION_H

#include <QDialog>
#include <QString>

namespace Ui {
    class Intermission;
}

class Intermission : public QDialog
{
    Q_OBJECT

public:
    explicit Intermission(QWidget *parent = 0);
    ~Intermission();
public slots:
    void Home_Name(QString);
    void Away_Name(QString);
    void Home_Score(int);
    void Away_Score(int);
    void period(int);
    void Home_Graphic(QString);
    void Away_Graphic(QString);

private:
    Ui::Intermission *ui;
};

#endif // Intermission_H
