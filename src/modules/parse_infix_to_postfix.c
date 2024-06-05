#include "calc_module.h"

/// @brief - Эта функция переводит алгебраическое выражение в инфиксной нотации
/// - в постфиксную.
/// @param expression - алгебраическое выражение в инфиксной нотации
/// @return  - алгебраическое выражение в постфиксной нотациии
char *parse_infix_expr(char *expression) { // 3+3 -> 3 3 +
  char *str = calloc(EXPRESSION_MAX_LENGTH, 1);
  int count_digits = 0;
  char *expr = calloc(strlen(expression) + 1, 1);
  strcpy(expr, expression);
  for (int i = 0; i < (int)strlen(expr); i++) {
    if (expr[i] == ' ') {
      count_digits = 0;
      continue;
    }
    if ((expr[i] == '-' && i == 0))
      expr[i] = '~';

    else if (i > 0) {
      if (expr[i - 1] == '(' && expr[i] == '-') {
        expr[i] = '~';
      }
    }
    if (s21_isdigit(expr[i])) { // 32+3
      add_char(str, expr[i]); // 32 3 +
      count_digits = 1; // +
    } else if (isfunction(expr, i)) {
      int offset = 0;
      char func_to_add = determine_function(expr, i, &offset);
      push(func_to_add); // asin 
      count_digits = 0;
      i += offset - 1;
    } else if (expr[i] == '(')
      push(expr[i]);

    else if (isoperator(expr[i])) {
      if (top != NULL) {
        while (get_priority(top->data) >= get_priority(expr[i])) {
          add_char(str, ' ');
          add_char(str, pop());
          if (!top) break;
        }
      }
      push(expr[i]);
      count_digits = 0;

    } else if (expr[i] == ')') {
      while (top->data != '(') {
        add_char(str, ' ');
        add_char(str, pop());
        count_digits = 0;
      }
      pop();
      if (top != NULL) {
        if (isfunction_stack(top->data)) {
          add_char(str, ' ');
          add_char(str, pop());
          count_digits = 0;
        }
      }
    }
    if (!count_digits) {
      add_char(str, ' ');
    }
  }

  while (top != NULL) {
    add_char(str, ' ');
    add_char(str, pop());
  }
  free(expr);
  return str;
}

int main(){

  printf("%s\n", parse_infix_expr("sin(4)*cos(3)"));

  return 0;
}