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

    for (auto val : medias) {
        ui->cmbox_Media->addItem(QString::fromStdString(val.getName()));
    }
    for (auto val : prints) {
        ui->cmbox_PrintSize->addItem(QString::fromStdString(val.getName()));
    }
    ui->spnbox_MediaRate->setMaximum(99999);
    ui->spnbox_OrderSize->setMaximum(99999);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_cmbox_Media_activated(int index)
{
    index = ui->cmbox_Media->currentIndex();
    qDebug() << QString::fromStdString(medias[index].getName())
             << " index : "
             << index
             << "\n";
}

void MainWindow::on_cmbox_Media_highlighted(int index)
{
    qDebug() << QString::fromStdString(medias[index].getName())
             << " index : "
             << index
             << "\n";

}


void MainWindow::on_button_Koto_clicked()
{
    //Calculation func/class
    int mediaIndex = ui->cmbox_Media->currentIndex();
    int printIndex = ui->cmbox_PrintSize->currentIndex();
    
    double mediaRate = ui->spnbox_MediaRate->value();
    double orderSize= ui->spnbox_OrderSize->value();
    
    QString strCost = ui->lbl_TotalSheet->text();
    double test = 34534.53;
    //Calculation func/class

    strCost.replace("00.00",QString::number(test));
    ui->lbl_TotalCost->setText(strCost);

    qDebug()<<"\n"
            <<strCost
            <<"\n"
            <<test
            <<"\n";

}

