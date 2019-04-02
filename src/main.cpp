#include "scoreboardmain.h"
#include <QApplication>
#include <sys/stat.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ScoreboardMain w;
    w.show();

    return a.exec();
}
