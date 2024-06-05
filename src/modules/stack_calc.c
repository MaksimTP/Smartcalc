#include "calc_module.h"

struct node_calc *top_calc = NULL;

/// @brief Эта функция пушит значение item на вершину стека
/// @param item
void push_calc(double item) {
  struct node_calc *nptr = malloc(sizeof(struct node_calc));
  nptr->data = item;
  nptr->next = top_calc;
  top_calc = nptr;
}

/// @brief Эта функция вытаскивает значение с вершины стека (если оно
/// существует)
/// @return значение на вершине стека (либо 0)
double pop_calc() {
  double popped = 0;
  if (top_calc != NULL) {
    struct node_calc *temp;
    temp = top_calc;
    top_calc = top_calc->next;
    popped = temp->data;
    free(temp);
  }
  return popped;
}
