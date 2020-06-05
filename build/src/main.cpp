#include <QApplication>
#include <QDebug>
#include <QWidget>
#include <QPixmap>
#include <QIcon>
#include "./banner/Banner.h"
#include "./editor/MainWindow.h"

int main(int argc, char **argv)
{
    QApplication a( argc, argv );

    a.setWindowIcon(QIcon(QPixmap(":/img/icon.png")));




    MainWindow win;
    win.show();
    Banner b;
    b.presentBanner();
    
    int fin = a.exec();
    return fin;
}
