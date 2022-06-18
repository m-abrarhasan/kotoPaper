#include "mainwindow.h"

#include <QApplication>
#include <QStyleFactory>

int
main(int argc, char* argv[])
{
  QApplication a(argc, argv);
  a.setStyle(QStyleFactory::create("Fusion"));

  QIcon* icn = new QIcon("://Resources/kotoPaper.ico");
  a.setWindowIcon(*icn);

  MainWindow w;
  w.setWindowTitle("KotoPaper");
  w.show();

  return a.exec();
}
