#include "./ui_mainwindow.h"
#include "mainwindow.h"
#include "media.hpp"
#include "prints.hpp"
#include <QDebug>
#include <QPalette>

void
calcOffset(Ui::MainWindow* ui)
{

  double mediaRate = ui->spnbox_MediaRate->value();
  double orderSize = ui->spnbox_OrderSize->value();

  double mArea = mediaStore[ui->cmbox_Media->currentIndex()].getArea();
  double pArea = printStore[ui->cmbox_PrintSize->currentIndex()].getArea();

  double totalSheet = orderSize / (mArea / pArea);
  double totalCost = totalSheet * (mediaRate / 500);

  ui->lbl_TotalSheet->setText(QString::number(totalSheet));
  ui->lbl_TotalSheet->setStyleSheet(
    "QLabel {font-size : 11pt; font-weight : 700; color:#00aa00;}");
  qDebug() << "\n"
           << " :: " << totalSheet << "\n";

  ui->lbl_TotalCost->setText(QString::number(totalCost));
  ui->lbl_TotalCost->setStyleSheet(
    "QLabel {font-size : 11pt; font-weight : 700; color:#00aa00;}");
  qDebug() << " :: " << totalCost << "\n";
}
