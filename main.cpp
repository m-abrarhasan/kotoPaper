#include "mainwindow.h"

#include <QApplication>
#include <QStyleFactory>

int
main(int argc, char* argv[])
{
  QApplication a(argc, argv);
  // a.setStyle(QStyleFactory::create("Fusion"));

  MainWindow w;
  w.setWindowTitle("KotoPaper");
  w.show();

  return a.exec();
}
