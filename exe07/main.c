#include <stdio.h>
#include "functions.h"

int main() {

  int a, b, result;
  
  // ENTRADA DE DADOS
  scanf("%d %d", &a, &b);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  result = mdc(a, b);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MDC = %d\n", result);

  return(0);
}