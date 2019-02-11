#include "scoreboardmain.h"
#include <QApplication>
#include <sys/stat.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ScoreboardMain w;
    system("mkdir -p ./Output");
    system("mkdir -p ./Update");
    w.show();

    return a.exec();
}
