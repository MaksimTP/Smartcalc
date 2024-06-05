#include "calc_module.h"

/// @brief Функция производит подсчет алгебраического выражения в постфиксной
/// нотации.
/// @param expr строка, представляющая собой алгебраическое выражение,
/// записанное в постфиксной нотации
/// @param result - переменная, куда будет записываться вычисленное значение
/// @return - код ошибки (0 - норм, 2 - деление на ноль, 1 - выход за границы
/// области определения)
int calculate_expression(char *expr, double *result) { // 3 3 +
  double calc_result = 0;
  int is_error = 0;
  char sep[10] = " ";
  char *istr;
  double tmp_result;
  istr = strtok(expr, sep); /// 33 3 +
  while (istr != NULL) {
    tmp_result = 0;
    if (atof(istr) || strcmp(istr, "0") == 0) { // 3 2
      push_calc(atof(istr)); // 33 3
    } else if (isoperator(istr[0]) && istr[0] != '~') {
      is_error = calculate_binary(pop_calc(), pop_calc(), istr[0], &tmp_result);
      push_calc(tmp_result); // 5
      if (is_error) break;
    } else if (isfunction_stack(istr[0])) {
      is_error = calculate_unary(pop_calc(), istr[0], &tmp_result);
      push_calc(tmp_result);
      if (is_error) break;
    }

    calc_result = tmp_result;
    istr = strtok(NULL, sep);
  }

  if (top_calc != NULL) {
    calc_result = pop_calc();
  }

  *result = calc_result;
  free(expr);
  return is_error;
}

/// @brief Функция совершает операцию между двумя операндами и одним оператором
/// @param value_1 первый операнд
/// @param value_2 второй операнд
/// @param token оператор
/// @param result результат операции
/// @return код ошибки (0 - норм, 2 - не норм, деление на ноль)
int calculate_binary(double value_1, double value_2, char token,
                     double *result) {
  int is_error = 0;
  switch (token) {
    case '+':
      *result = value_1 + value_2;
      break;
    case '-':
      *result = value_1 - value_2;
      break;
    case '*':
      *result = value_1 * value_2;
      break;
    case '/':
      if (value_2 == 0) {
        is_error = 2;
      } else {
        *result = (double)value_1 / (double)value_2;
      }
      break;
    case '^':
      *result = pow(value_1, value_2);
      break;
    case '%':
      if (value_2 == 0) {
        is_error = 2;
      } else {
        *result = fmod(value_1, value_2);
      }
      break;
  }
  return is_error;
}

/// @brief Функция совершает унарную операцию над значением
/// @param value значение, над которым будет производиться операция
/// @param token унарная операция (префиксная функция, унарный минус)
/// @param result значение, результат операции
/// @return код ошибки - (0 норм, 1 - не норм, выход за область определения
/// функции)
int calculate_unary(double value, char token, double *result) {
  int is_error = 0;
  switch (token) {
    case COS_SUB:
      *result = cos(value);
      break;
    case SIN_SUB:
      *result = sin(value);
      break;
    case TAN_SUB:
      *result = tan(value);
      break;
    case ACOS_SUB:
      if (value > 1 || value < -1) {
        is_error = 1;
      } else {
        *result = acos(value);
      }
      break;
    case ASIN_SUB:
      if (value > 1 || value < -1) {
        is_error = 1;
      } else {
        *result = asin(value);
      }
      break;
    case ATAN_SUB:
      *result = atan(value);
      break;
    case SQRT_SUB:
      *result = sqrt(value);
      break;
    case LN_SUB:
      *result = log(value);
      break;
    case LOG_SUB:
      *result = log10(value);
      break;
    case UNARY_MINUS_SUB:
      *result = (-1) * value;
  }
  return is_error;
}
