#include <stdio.h>
#include "functions.h"
#define MAX 6

int main() {

  int v[10], menor_valor;
  
  // ENTRADA DE DADOS
  for(int i = 0; i < MAX; i++)
  {
    scanf("%d", &v[i]);
  }

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  menor_valor = menor(v, MAX);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", menor_valor);

  return(0);
}