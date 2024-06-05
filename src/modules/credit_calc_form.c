#include "calc_module.h"

void credit_calculation(double **arr, double credit_sum, int term_month,
                        double rate, int type) {
  if (type == 0) {
    rate /= 1200;
    double monthly_payment = credit_sum * rate * powl((1 + rate), term_month) /
                             (powl((1 + rate), term_month) - 1);
    arr[0][0] = monthly_payment;
    arr[0][1] = monthly_payment * term_month - credit_sum;
    arr[0][2] = monthly_payment * term_month;
  } else {
    double main_payment = credit_sum / (double)term_month;
    for (int i = 0; i < term_month; i++) {
      double perc_payment = (credit_sum * rate / 100 * 30.) / 365.;
      credit_sum -= main_payment;
      arr[i][0] = main_payment;
      arr[i][1] = perc_payment;
      arr[i][2] = main_payment + perc_payment;
      arr[i][3] = credit_sum;
    }
  }
}
