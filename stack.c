#include "stack.h"
#include <stdlib.h>
#include <assert.h>

extern Stack stack_new(int elementSize)
{
  Stack s = list_new(elementSize);
  return s;
}

extern void stack_destroy(Stack *stack)
{
  assert(stack && *stack);
  list_destroy(stack);
  free(*stack);
  *stack = NULL;
}

extern void* stack_push(Stack stack, void *element)
{
  list_prepend(stack, element);
  return list_peek(stack);
}

extern void* stack_peek(Stack stack)
{
  return list_peek(stack);
}

extern void* stack_pop(Stack stack)
{
  return list_pop(stack);
}

