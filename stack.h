#ifndef STACK_H_
#define STACK_H_

#include "include/list/list.h"

typedef List Stack;

extern Stack stack_new(int elementSize);
extern void stack_destroy(Stack *stack);

extern void* stack_push(Stack stack, void *element);
extern void* stack_peek(Stack stack);
extern void* stack_pop(Stack stack);

#endif
