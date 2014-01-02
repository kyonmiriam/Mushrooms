#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setOverrideCursor(Qt::BlankCursor);
    MainWindow w;
    w.show();

    return a.exec();
}
