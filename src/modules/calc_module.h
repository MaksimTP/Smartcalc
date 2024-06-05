
#ifndef S21_CALC_MODULE

#define S21_CALC_MODULE

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EXPRESSION_MAX_LENGTH 256
#define COS_SUB 'a'
#define SIN_SUB 'b'
#define TAN_SUB 'c'
#define ACOS_SUB 'd'
#define ASIN_SUB 'e'
#define ATAN_SUB 'f'
#define SQRT_SUB 'g'
#define LN_SUB 'h'
#define LOG_SUB 'j'
#define UNARY_MINUS_SUB '~'

char *parse_infix_expr(char *expr);
int s21_isdigit(char ch);
void add_char(char *str, char ch);
int isfunction(char *str, int pos);
char determine_function(char *str, int pos, int *offset);
int isoperator(char ch);
int get_priority(char ch);
int isfunction_stack(char ch);

struct node {
  struct node *next;
  char data;
};

struct node_calc {
  struct node_calc *next;
  double data;
};

extern struct node_calc *top_calc;
extern struct node *top;

void push(char item);
void display();
char pop();

void push_calc(double item);
void display_calc();
double pop_calc();

int calculate_expression(char *expr, double *result);
int calculate_unary(double value, char token, double *result);
int calculate_binary(double value_1, double value_2, char token,
                     double *result);

void credit_calculation(double **arr, double credit_sum, int term_month,
                        double rate, int type);

#endif
