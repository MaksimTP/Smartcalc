#ifndef S21_CREDIT_CALC_H
#define S21_CREDIT_CALC_H

#include <QDialog>

#include "mainwindow.h"
namespace Ui {
class Credit_calc;
}

class Credit_calc : public QDialog {
  Q_OBJECT

 public:
  explicit Credit_calc(QWidget *parent = nullptr);
  ~Credit_calc();

 private slots:
  void getTable();

 private:
  Ui::Credit_calc *ui;
};

#endif  // CREDIT_CALC_H
