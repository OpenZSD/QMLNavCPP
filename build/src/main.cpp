#include <QApplication>
#include <QDebug>
#include <QWidget>
#include "./banner/Banner.h"

int main(int argc, char **argv)
{
    QApplication a( argc, argv );

  //  auto mainWindow = new MainWindow(&a);
  //  mainWindow->show();
  //  AWid hello;
  //  hello.resize( 1180, 900 );
    Banner w;
    w.presentBanner();
    
    //hello.show();



    
    int fin = a.exec();
   // test.join();
    return fin;
}
