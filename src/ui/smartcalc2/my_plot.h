#ifndef MY_PLOT_H
#define MY_PLOT_H

#include <QDialog>
#include <QVector>

extern "C" {
#include "../../modules/calc_module.h"
}

namespace Ui {
class my_plot;
}

class my_plot : public QDialog {
  Q_OBJECT

 public:
  my_plot(QWidget *parent = nullptr, double from_X = -1000, double to_X = 1000,
          double from_Y = -1000, double to_Y = 1000, QString expression = "x");
  ~my_plot();

 private:
  double from_X;
  double to_X;
  double from_Y;
  double to_Y;
  QString expression;
  Ui::my_plot *ui;
  QVector<double> x, y;
};

#endif  // MY_PLOT_H
