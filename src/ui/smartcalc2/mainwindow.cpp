#include "mainwindow.h"

#include <iostream>

#include "ui_mainwindow.h"

/// @brief Конструктор класса MainWindow, наследуется от QWidget. Здесь
/// происходит настройка событий, связанных с нажатием кнопок
/// @param parent Родитель нашего класса - QWidget
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  connect(ui->btn_0, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_1, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_2, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_3, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_4, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_5, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_6, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_7, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_8, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_9, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_dot, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_plus, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_sub, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_div, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_mul, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_mod, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_unary_plus_minus, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_left_bracket, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_right_bracket, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_pow, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_acos, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_cos, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_sin, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_asin, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_tan, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_atan, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_sqrt, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_ln, SIGNAL(clicked()), this, SLOT(add_str()));
  connect(ui->btn_log, SIGNAL(clicked()), this, SLOT(add_str()));

  connect(ui->btn_clear_line, SIGNAL(clicked()), this,
          SLOT(clear_line_result()));
  connect(ui->btn_remove_symbol, SIGNAL(clicked()), this,
          SLOT(delete_one_char()));
  connect(ui->btn_equal, SIGNAL(clicked()), this, SLOT(click_equal_sign()));

  connect(ui->line_result, SIGNAL(textChanged(QString)), this,
          SLOT(ignore_whitespaces()));

  connect(ui->btn_plot, SIGNAL(clicked()), this, SLOT(ask_for_range()));
  connect(ui->btn_credit, SIGNAL(clicked()), this, SLOT(getCredit()));
}

/// @brief Деструктор класса
MainWindow::~MainWindow() { delete ui; }

/// @brief Эта функция добавляет текст кнопки в выходную строку по некоторым
/// правилам
void MainWindow::add_str() {
  QPushButton *btn = (QPushButton *)sender();
  QString btn_text = btn->text();

  if (ui->line_result->text() == "") {
    if (!validate_input_empty_line(btn_text)) {
      ui->line_result->setText(ui->line_result->text() +
                               btn_text.replace("x)", ""));
    }
  } else {
    if (!validate_double_oper_input(btn_text)) {
      if (ui->line_result->text() == "0") {
        clear_line_result();
      }

      ui->line_result->setText(ui->line_result->text() +
                               btn_text.replace("x)", ""));
    }
  }
}

/// @brief Функция очищает строку ввода
void MainWindow::clear_line_result() { ui->line_result->clear(); }

/// @brief Эта функция реагирует на изменение текста и убирает пробелы
void MainWindow::ignore_whitespaces() {
  ui->line_result->setText(ui->line_result->text().replace(" ", ""));
}

/// @brief Эта функция удаляет один символ из строки ввода
void MainWindow::delete_one_char() { ui->line_result->backspace(); }

/// @brief Эта функция производит подсчет алгебраического выражения в инфиксной
/// нотации
void MainWindow::click_equal_sign() {
  ui->label->setText(ui->line_result->text());
  char *expr = ui->line_result->text().toLocal8Bit().data(); // QString
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  if (!is_error && !ui->line_result->text().contains('x')) {
    clear_line_result();
    ui->line_result->setText(QString::number(result, 'f', 7));
  } else {
    clear_line_result();

    ui->line_result->setText("CALCULATION_ERROR");
  }
}

/// @brief Эта функция-валидатор. Проверяет первый введенный символ. Если символ
/// не подчиняется определенным правилам, то он не вводится
/// @param str - строка ввода
/// @return - True/False
bool MainWindow::validate_input_empty_line(QString str) {
  bool is_num = false;
  for (int i = 0; i < 10; i++) {
    if (str == QString::number(i)) {
      is_num = true;
    }
  }
  return str.length() == 1 && str != "-" && !is_num && str != "(" && str != "x";
}

/// @brief Это функция-валидатор, она не позволяет написать несколько операторов
/// подряд
/// @param str - проверяемая строка
/// @return - True/False
bool MainWindow::validate_double_oper_input(QString str) {
  QString characters = "+-%.*^/";
  bool is_double_inp = false;
  if (characters.contains(str) &&
      characters.contains(
          ui->line_result->text()[ui->line_result->text().length() - 1])) {
    is_double_inp = true;
  }
  return is_double_inp;
}

/// @brief Эта функция открывает диалоговое окно askrangewindow
void MainWindow::ask_for_range() {
  AskRangeWindow w;
  double from_X = 0;
  double to_X = 0;
  double from_Y = 0;
  double to_Y = 0;

  w.show();
  w.exec();
  w.get_range_nums(from_X, to_X, from_Y, to_Y);
  mainGetPlot(from_X, to_X, from_Y, to_Y);
}

/// @brief Эта функция вызывает диалоговое окно, изображается график функции из
/// строки ввода и с заданными диапазонами
/// @param from_X - левая граница области определения
/// @param to_X - правая граница области определения
/// @param from_Y - нижняя граница области значений
/// @param to_Y - верхняя граница области значений
void MainWindow::mainGetPlot(double from_X, double to_X, double from_Y,
                             double to_Y) {
  my_plot w(nullptr, from_X, to_X, from_Y, to_Y, ui->line_result->text());
  w.show();
  w.exec();
}

/// @brief Эта функция вызывает диалоговое окно Credit_calc
void MainWindow::getCredit() {
  Credit_calc w;
  w.show();
  w.exec();
}
