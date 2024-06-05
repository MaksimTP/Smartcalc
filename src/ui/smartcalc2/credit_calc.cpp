#include "credit_calc.h"

#include <iostream>

#include "ui_credit_calc.h"

/// @brief Конструктор класса Credit_calc
/// @param parent родитель
Credit_calc::Credit_calc(QWidget *parent)
    : QDialog(parent), ui(new Ui::Credit_calc) {
  ui->setupUi(this);

  connect(ui->btn_calculate, SIGNAL(clicked()), this, SLOT(getTable()));
}

/// @brief Деструктор класса
Credit_calc::~Credit_calc() { delete ui; }

/// @brief Отрисовка таблицы после ввода всех данных
void Credit_calc::getTable() {
  int type = ui->combo_payment_type->currentIndex();
  int term = ui->line_edit_term->text().toInt();
  if (ui->combo_term_credit->currentIndex() == 1) {
    term = ui->line_edit_term->text().toInt() * 12;
  }
  double credit_sum = ui->line_edit_total_credit->text().toDouble();
  double interest_rate = ui->line_edit_interest_rate->text().toDouble();
  double **arr = NULL;
  if (type == 0) {
    arr = (double **)calloc(1, sizeof(double *));
    arr[0] = (double *)calloc(3, sizeof(double));
  } else {
    arr = (double **)calloc(term, sizeof(double *));
    for (int i = 0; i < term; i++) {
      arr[i] = (double *)calloc(4, sizeof(double));
    }
  }
  credit_calculation(arr, credit_sum, term, interest_rate, type);

  if (type == 1) {
    ui->table_credit->setRowCount(term);
    ui->table_credit->setColumnCount(4);

    ui->table_credit->setHorizontalHeaderLabels(QStringList() << "main"
                                                              << "%"
                                                              << "main + %"
                                                              << "remainder");

    for (int i = 0; i < ui->table_credit->rowCount(); i++) {
      for (int j = 0; j < ui->table_credit->columnCount(); j++) {
        QTableWidgetItem *tbl =
            new QTableWidgetItem(QString::number(arr[i][j], 'f', 2) + " rub");
        ui->table_credit->setItem(i, j, tbl);
      }
    }

  } else {
    ui->table_credit->setRowCount(1);
    ui->table_credit->setColumnCount(3);

    ui->table_credit->setHorizontalHeaderLabels(QStringList()
                                                << "Monthly payment"
                                                << "Overpayment"
                                                << "Full payment");
    for (int i = 0; i < ui->table_credit->rowCount(); i++) {
      for (int j = 0; j < ui->table_credit->columnCount(); j++) {
        QTableWidgetItem *tbl =
            new QTableWidgetItem(QString::number(arr[i][j], 'f', 2) + " rub");
        ui->table_credit->setItem(i, j, tbl);
      }
    }
  }
}
