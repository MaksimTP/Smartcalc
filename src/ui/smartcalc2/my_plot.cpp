#include "my_plot.h"

#include <iostream>

#include "ui_my_plot.h"

/// @brief Конструктор класса
/// @param parent родитель
/// @param from_X - левая граница области определения
/// @param to_X - правая граница области определения
/// @param from_Y - нижняя граница области значений
/// @param to_Y - верхняя граница области значений
/// @param expression - функция
my_plot::my_plot(QWidget *parent, double from_X, double to_X, double from_Y,
                 double to_Y, QString expression)
    : QDialog(parent), ui(new Ui::my_plot) {
  this->from_X = from_X;
  this->to_X = to_X;
  this->from_Y = from_Y;
  this->to_Y = to_Y;
  this->expression = expression;
  ui->setupUi(this);

  if (expression != "") {
    ui->widget->xAxis->setRange(from_X, to_X);
    ui->widget->yAxis->setRange(from_Y, to_Y);
    double step = (fabs(to_X - from_X) / 50000.0);
    int k_vec = 0;
    int is_error_graph = 0;
    for (int i = 0; i < 50000; i++) {
      if (fabs(from_X) < 1e-6) from_X = 0.0;
      QString i_str = QString::number(from_X);
      i_str = i_str.replace("-", "~");
      QString tmp = expression.mid(0).replace("x", i_str).replace("-~", "");
      double y_res = 0;
      int is_error = calculate_expression(
          parse_infix_expr(tmp.toLocal8Bit().data()), &y_res);
      if (is_error != 2) {
        x.push_back(from_X);
        y.push_back(y_res);
        k_vec++;
      } else {
        is_error_graph = is_error;
      }
      from_X += step;
    }
    ui->widget->addGraph();
    if (expression.contains("tan") || is_error_graph == 2) {
      QCPScatterStyle myScatter;
      myScatter.setShape(QCPScatterStyle::ssCircle);
      myScatter.setPen(QPen(Qt::blue));
      myScatter.setBrush(Qt::blue);
      myScatter.setSize(3);
      ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone);
      ui->widget->graph(0)->setScatterStyle(myScatter);
    }
    ui->widget->graph(0)->addData(x, y);
    ui->widget->replot();
    x.clear();
    y.clear();
  }
}

/// @brief Деструктор класса
my_plot::~my_plot() { delete ui; }
