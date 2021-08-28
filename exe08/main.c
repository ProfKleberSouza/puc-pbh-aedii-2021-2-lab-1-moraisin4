#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int main() {

  char texto[50];
  bool result;
  
  // ENTRADA DE DADOS
  fgets(texto, 100, stdin);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  result = is_palindromo(texto);

  if(result == true)
    printf("SIM\n");
  else
    printf("NAO\n");


  return(0);
}