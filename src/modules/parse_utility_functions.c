#include "calc_module.h"

static const char *FUNCTIONS[] = {"cos",  "sin",  "tan", "acos", "asin",
                                  "atan", "sqrt", "ln",  "log",  "~"};
static const char FUNCTIONS_SUBSTITUTIONS[] = {
    COS_SUB,  SIN_SUB, TAN_SUB, ACOS_SUB,        ASIN_SUB, ATAN_SUB,
    SQRT_SUB, LN_SUB,  LOG_SUB, UNARY_MINUS_SUB, '\0'};

static const char OPERATORS[] = "+-*/^%%~";
static const char DIGITS[] = "1234567890.x";

/// @brief Функция проверяет, является ли символ цифрой
/// @param ch - проверяемый символ
/// @return - 1 - True, 0 - False
int s21_isdigit(char ch) {
  int result = 0;
  for (size_t i = 0; i < strlen(DIGITS) && !result; i++) {
    if (ch == DIGITS[i]) {
      result = 1;
    }
  }
  return result;
}

/// @brief Функция добавляет символ в конец строки
/// @param str - строка, к которой будет добавлен символ
/// @param ch - символ
void add_char(char *str, char ch) {
  int len = strlen(str);
  str[len] = ch;
  str[len + 1] = '\0';
}

/// @brief Эта функция проверяет, является ли строка, с заданным смещением,
/// началом какой-либо функции.
/// @param str - Проверяемая строка
/// @param pos - Смещение
/// @return - True/False
int isfunction(char *str, int pos) {
  int result = 0;
  for (size_t i = 0; i < 9 && !result; i++) {
    if (strstr(str + pos, FUNCTIONS[i]) == (str + pos)) {
      result = 1;
    }
  }
  return result;
}

/// @brief Эта функция определяет математическую функцию с заданной позиции
/// строки
/// @param str - проверяемая строка
/// @param pos - заданное смещение строки
/// @param offset - то смещение, на которое нужно сместить строку (дабы считать
/// функцию asin 1 раз, а не два).
/// @return результат - определенная функция (определяется одним символом из
/// массива FUNCTIONS_SUBSTITUTIONS)
char determine_function(char *str, int pos, int *offset) {
  char result = '?';
  for (size_t i = 0; i < 9; i++) {
    if (strstr(str + pos, FUNCTIONS[i]) == str + pos) {
      result = FUNCTIONS_SUBSTITUTIONS[i];
      *offset = strlen(FUNCTIONS[i]);
    }
  }
  return result;
}

/// @brief Функция проверяет, является ли данный символом оператором
/// @param ch - проверяемый символ
/// @return - True/False
int isoperator(char ch) {
  int result = 0;
  for (size_t i = 0; i < strlen(OPERATORS) && !result; i++) {
    if (OPERATORS[i] == ch) {
      result = 1;
    }
  }
  return result;
}

/// @brief Функция проверяет приоритет данного символа
/// @param ch проверямый символ
/// @return значение приоритета оператора.
int get_priority(char ch) {
  int result = -1;
  switch (ch) {
    case '(':
      result = 0;
      break;
    case ')':
      result = 1;
      break;
    case '+':
      result = 2;
      break;
    case '-':
      result = 2;
      break;
    case '*':
      result = 3;
      break;
    case '/':
      result = 3;
      break;
    case '%':
      result = 3;
      break;
    case '^':
      result = 4;
      break;
    case '~':
      result = 5;
      break;
  }

  return result;
}

/// @brief Функция проверяет является ли проверяемый символ функцией
/// @param ch проверяемый символ
/// @return True/False
int isfunction_stack(char ch) {
  int result = 0;
  for (size_t i = 0; i < strlen(FUNCTIONS_SUBSTITUTIONS) && !result; i++) {
    if (ch == FUNCTIONS_SUBSTITUTIONS[i]) {
      result = 1;
    }
  }
  return result;
}
