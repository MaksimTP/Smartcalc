#ifndef ASKRANGEWINDOW_H
#define ASKRANGEWINDOW_H

#include <QDialog>

#include "mainwindow.h"

namespace Ui {
class AskRangeWindow;
}

class AskRangeWindow : public QDialog {
  Q_OBJECT

 public:
  explicit AskRangeWindow(QWidget *parent = nullptr);
  ~AskRangeWindow();

 private:
  Ui::AskRangeWindow *ui;
 private slots:
  void close_win_range();
 public slots:
  void get_range_nums(double &from_X, double &to_X, double &from_Y,
                      double &to_Y);
};

#endif  // ASKRANGEWINDOW_H
