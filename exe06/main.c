#include <stdio.h>
#include "functions.h"

int main() {

  int a, b, result;
  
  // ENTRADA DE DADOS
  scanf("%d %d", &a, &b);

  result = potencia(a, b);
  printf("%d\n", result);

  return(0);
}