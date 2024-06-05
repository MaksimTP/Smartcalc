#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
extern "C" {
#include "../../modules/calc_module.h"
}

#include "askrangewindow.h"
#include "credit_calc.h"
#include "my_plot.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  void mainGetPlot(double from_X, double to_X, double from_Y, double to_Y);

 private slots:
  void add_str();
  void clear_line_result();
  void ignore_whitespaces();
  void delete_one_char();
  void click_equal_sign();
  void ask_for_range();
  void getCredit();

 private:
  Ui::MainWindow *ui;
  bool validate_input_empty_line(QString str);
  bool validate_double_oper_input(QString str);
};

void getPlot(double from_X, double to_X, double from_Y, double to_Y);

#endif  // MAINWINDOW_H
