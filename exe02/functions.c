
#include "functions.h"

int menor(int v[], int n){

  int menor_valor = v[0];

  //FAZ A VERIFICAÇÃO DO MENOR VALOR
  for(int i = 0; i < n; i++)
  {
    if(v[i] < menor_valor)
      menor_valor = v[i];
  }

  return menor_valor;
}
