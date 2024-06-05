#include "askrangewindow.h"

#include <iostream>

#include "ui_askrangewindow.h"
/// @brief Конструктор класса с наследованием
/// @param parent
AskRangeWindow::AskRangeWindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::AskRangeWindow) {
  ui->setupUi(this);

  connect(ui->btn_ok, SIGNAL(clicked()), this, SLOT(close_win_range()));
}

/// @brief Деструктор класса
AskRangeWindow::~AskRangeWindow() { delete ui; }

/// @brief Функция вызывается после нажатия на кнопку btn_ok
/// @param from_X - левая граница области определения (ссылка)
/// @param to_X - правая граница области определения (ссылка)
/// @param from_Y - нижняя граница области значений (ссылка)
/// @param to_Y - верхняя граница области значений (ссылка)
void AskRangeWindow::get_range_nums(double &from_X, double &to_X,
                                    double &from_Y, double &to_Y) {
  from_X = ui->edit_X_from->text().toDouble();
  to_X = ui->edit_X_to->text().toDouble();
  from_Y = ui->edit_Y_from->text().toDouble();
  to_Y = ui->edit_Y_to->text().toDouble();
}

/// @brief Закрытие окна
void AskRangeWindow::close_win_range() { close(); }
