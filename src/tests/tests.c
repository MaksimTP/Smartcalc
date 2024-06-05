#include <check.h>
#include <math.h>

#include "../modules/calc_module.h"

START_TEST(s21_calculate_expression_0) {
  char *expr = "3+3";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(6.0, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_1) {
  char *expr = "3";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(3.0, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_2) {
  char *expr = "0";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(0.0, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_3) {
  char *expr = "3*3";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(9.0, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_4) {
  char *expr = "3/3";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(1.0, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_5) {
  char *expr = "3/0";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(0, result, 1e-7);
  ck_assert_int_eq(is_error, 2);
}
END_TEST

START_TEST(s21_calculate_expression_6) {
  char *expr = "3+0+3";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(6, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_7) {
  char *expr = "3/(0+1)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(3, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_8) {
  char *expr = "3+3+3";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(9, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST
// checkmk
START_TEST(s21_calculate_expression_9) {
  char *expr = "3*3*3";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(27, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_10) {
  char *expr = "3*(3/2*(5-3.5))";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(6.75, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_11) {
  char *expr = "sin(0)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(0, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_12) {
  char *expr = "sin(3.14)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(0.00159265, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_13) {
  char *expr = "sin(-15)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(-0.65028784, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_14) {
  char *expr = "sin((3*3*3))";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(0.956375928, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_15) {
  char *expr = "tan(5*sin(3*(123+2)))";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(-6.72573965, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_16) {
  char *expr = "asin(0)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(0, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_17) {
  char *expr = "asin(1)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(1.57079633, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_18) {
  char *expr = "asin(1)*acos(1)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(0, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_19) {
  char *expr = "ln(1)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(0, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_20) {
  char *expr = "ln(15.5)*log(23.3)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(3.74770384, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_21) {
  char *expr = "ln(255)*log(255)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(13.3352734, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_22) {
  char *expr = "2^0";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(1, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_23) {
  char *expr = "2^(-1)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(0.5, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_24) {
  char *expr = "2^32";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(4294967296, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_25) {
  char *expr = "sin(2)^2";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(0.82682181043, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_26) {
  char *expr = "sin(2^2)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(-0.7568024953, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_27) {
  char *expr = "(-2)^3";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(-8, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_28) {
  char *expr = "sqrt(3)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(sqrt(3), result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_29) {
  char *expr = "sqrt(0)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(0, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_30) {
  char *expr = "sqrt(16)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(4, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_31) {
  char *expr = "sin(3)*cos(3)*asin(0.5)*acos(0)+3-2*3";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(-3.1149050179481956, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_32) {
  char *expr = "-5";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(-5, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_33) {
  char *expr = "(-5*(-5))^(cos(0))";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(25, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_34) {
  char *expr = "(-5*(-5))^(sin(0))";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(1, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_35) {
  char *expr = "atan(3)";
  double result = 0;
  int is_error = calculate_expression(parse_infix_expr(expr), &result);
  ck_assert_double_eq_tol(1.24904577, result, 1e-7);
  ck_assert_int_eq(is_error, 0);
}
END_TEST

START_TEST(s21_calculate_expression_credit_0) {
  // annuety
  double **test_arr = calloc(1, sizeof(double *));
  test_arr[0] = calloc(3, sizeof(double));
  credit_calculation(test_arr, 1000, 5, 5, 0);
  ck_assert_double_eq_tol(test_arr[0][0], 202.51, 2);
  ck_assert_double_eq_tol(test_arr[0][1], 12.55, 2);
  ck_assert_double_eq_tol(test_arr[0][2], 1012.55, 2);
  free(test_arr[0]);
  free(test_arr);
}
END_TEST

START_TEST(s21_calculate_expression_credit_1) {
  // diff
  double **test_arr = calloc(3, sizeof(double *));
  for (int i = 0; i < 3; i++) {
    test_arr[i] = calloc(4, sizeof(double));
  }
  credit_calculation(test_arr, 1000, 3, 5, 1);

  ck_assert_double_eq_tol(test_arr[0][0], 333.3, 2);
  ck_assert_double_eq_tol(test_arr[1][0], 333.3, 2);
  ck_assert_double_eq_tol(test_arr[2][0], 333.3, 2);

  ck_assert_double_eq_tol(test_arr[0][1], 4.17, 1);
  ck_assert_double_eq_tol(test_arr[1][1], 2.78, 1);
  ck_assert_double_eq_tol(test_arr[2][1], 1.39, 1);

  ck_assert_double_eq_tol(test_arr[0][2], 337.5, 2);
  ck_assert_double_eq_tol(test_arr[1][2], 336.11, 2);
  ck_assert_double_eq_tol(test_arr[2][2], 334.72, 2);

  ck_assert_double_eq_tol(test_arr[0][3], 666.67, 1);
  ck_assert_double_eq_tol(test_arr[1][3], 333.33, 1);
  ck_assert_double_eq_tol(test_arr[2][3], 0, 1);

  for (int i = 0; i < 3; i++) {
    free(test_arr[i]);
  }
  free(test_arr);
}
END_TEST

Suite *s21_calculate_expression(void) {
  Suite *s = suite_create("s21_calculate_expression");
  TCase *tc = tcase_create("s21_calculate_expression");

  suite_add_tcase(s, tc);

  tcase_add_test(tc, s21_calculate_expression_0);
  tcase_add_test(tc, s21_calculate_expression_1);
  tcase_add_test(tc, s21_calculate_expression_2);
  tcase_add_test(tc, s21_calculate_expression_3);
  tcase_add_test(tc, s21_calculate_expression_4);
  tcase_add_test(tc, s21_calculate_expression_5);
  tcase_add_test(tc, s21_calculate_expression_6);
  tcase_add_test(tc, s21_calculate_expression_7);
  tcase_add_test(tc, s21_calculate_expression_8);
  tcase_add_test(tc, s21_calculate_expression_9);
  tcase_add_test(tc, s21_calculate_expression_10);
  tcase_add_test(tc, s21_calculate_expression_11);
  tcase_add_test(tc, s21_calculate_expression_12);
  tcase_add_test(tc, s21_calculate_expression_13);
  tcase_add_test(tc, s21_calculate_expression_14);
  tcase_add_test(tc, s21_calculate_expression_15);
  tcase_add_test(tc, s21_calculate_expression_16);
  tcase_add_test(tc, s21_calculate_expression_17);
  tcase_add_test(tc, s21_calculate_expression_18);
  tcase_add_test(tc, s21_calculate_expression_19);
  tcase_add_test(tc, s21_calculate_expression_20);
  tcase_add_test(tc, s21_calculate_expression_21);
  tcase_add_test(tc, s21_calculate_expression_22);
  tcase_add_test(tc, s21_calculate_expression_23);
  tcase_add_test(tc, s21_calculate_expression_24);
  tcase_add_test(tc, s21_calculate_expression_25);
  tcase_add_test(tc, s21_calculate_expression_26);
  tcase_add_test(tc, s21_calculate_expression_27);
  tcase_add_test(tc, s21_calculate_expression_28);
  tcase_add_test(tc, s21_calculate_expression_29);
  tcase_add_test(tc, s21_calculate_expression_30);
  tcase_add_test(tc, s21_calculate_expression_31);
  tcase_add_test(tc, s21_calculate_expression_32);
  tcase_add_test(tc, s21_calculate_expression_33);
  tcase_add_test(tc, s21_calculate_expression_34);
  tcase_add_test(tc, s21_calculate_expression_35);

  tcase_add_test(tc, s21_calculate_expression_credit_0);
  tcase_add_test(tc, s21_calculate_expression_credit_1);

  return s;
}

void run_testcase(Suite *testcase) {
  static int count_testcase = 1;

  if (count_testcase > 0) {
    printf("\n");
    count_testcase++;
  }

  SRunner *sr = srunner_create(testcase);

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);

  srunner_free(sr);
}

void run_tests(void) {
  Suite *list_cases[] = {s21_calculate_expression(), NULL};

  for (Suite **current_testcase = list_cases; *current_testcase != NULL;
       current_testcase++) {
    run_testcase(*current_testcase);
  }
}

int main(void) {
  run_tests();

  return 0;
}