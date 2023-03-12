#include "mainwindow.h"

#include <QApplication>
#include <QStyleFactory>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    app.setStyle(QStyleFactory::create("Fusion"));

    QIcon* icon = new QIcon("://Resources/kotoPaper.ico");
    app.setWindowIcon(*icon);

    MainWindow base;
    base.setWindowTitle("KotoPaper");
    base.show();

    return app.exec();
}
