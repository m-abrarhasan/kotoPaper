#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();

private slots:
  void on_button_Koto_clicked();
  void on_cmbox_Media_activated(int index);

  void on_spnbox_MediaRate_valueChanged(double arg1);

  void on_cmbox_PrintSize_activated(int index);

  void on_spnbox_OrderSize_valueChanged(int arg1);

private:
  Ui::MainWindow* ui;
};
#endif // MAINWINDOW_H
