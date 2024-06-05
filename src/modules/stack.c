#include "calc_module.h"

struct node *top = NULL;

/// @brief Функция пушит элемент item на вершину стека
/// @param item
void push(char item) {
  struct node *nptr = malloc(sizeof(struct node));
  nptr->data = item;
  nptr->next = top;
  top = nptr;
}

/// @brief Функция удаляет элемент, находящийся на вершине, если он есть и
/// возвращает его
/// @return элемент с вершины (либо 0, если нет элемента)
char pop() {
  char popped = 0;
  if (top != NULL) {
    struct node *temp;
    temp = top;
    top = top->next;
    popped = temp->data;
    free(temp);
  }
  return popped;
}
