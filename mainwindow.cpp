#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "media.hpp"
#include "prints.hpp"
#include <QDebug>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for (Paper val : medias) {
        ui->cmbox_Media->addItem(QString::fromStdString(val.getName()));
    }
    for (Paper val : prints) {
        ui->cmbox_PrintSize->addItem(QString::fromStdString(val.getName()));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_cmbox_Media_activated(int index)
{
    qDebug() << QString::fromStdString(medias[index].getName())
             << " index : "
             << index
             << "\n";
}
