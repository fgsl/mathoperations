#include <stdio.h>
#include <assert.h>
#include "multiplicar_function.c"

int main()
{
  int produto = multiplicar(5,3);
  assert(produto == 15);
  printf("1 Teste 1 Assertiva OK");
  return 0;  
}
