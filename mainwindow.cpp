#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "calcOffset.hpp"
#include "media.hpp"
#include "prints.hpp"
#include <QDebug>

MainWindow::MainWindow(QWidget* parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  for (auto val : mediaStore) {
    ui->cmbox_Media->addItem(QString::fromStdString(val.getName()));
  }
  for (auto val : printStore) {
    ui->cmbox_PrintSize->addItem(QString::fromStdString(val.getName()));
  }

  ui->spnbox_MediaRate->setMaximum(99999);
  ui->spnbox_OrderSize->setMaximum(99999);

  calcOffset(ui);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void
MainWindow::on_cmbox_Media_activated(int index)
{
  calcOffset(ui);
}

void
MainWindow::on_cmbox_PrintSize_activated(int index)
{
  calcOffset(ui);
}

void
MainWindow::on_spnbox_MediaRate_valueChanged(double arg1)
{
  calcOffset(ui);
}

void
MainWindow::on_spnbox_OrderSize_valueChanged(int arg1)
{
  calcOffset(ui);
}

void
MainWindow::on_button_Koto_clicked()
{
  calcOffset(ui);
}
