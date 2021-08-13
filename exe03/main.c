#include <stdio.h>
#include "functions.h"
#define MAX 6

int main() {

  int v[MAX], menor, maior;
  
  // ENTRADA DE DADOS
  for(int i = 0; i < MAX; i++)
  {
    scanf("%d", &v[i]);
  }

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  menor_maior(v, MAX, &menor, &maior);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", menor);
  printf("MAIOR = %d\n", maior);

  return(0);
}