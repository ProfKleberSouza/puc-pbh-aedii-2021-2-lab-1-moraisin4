#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "functions.h"

bool is_palindromo(char texto[]){
  char texto2[50], aux;

  strcpy(texto2, texto);

  for (int i = 0; i < (strlen(texto) / 2); i++ ) 
  {
    aux = texto2[i];
    texto2[i] = texto2[(strlen(texto) - 1) - i];
    texto2[(strlen(texto) - 1) - i] = aux;
  }
  printf("%s", texto);
  printf("%s", texto2);
  if(strcmp(texto, texto2) == 0)
    return true;

  else
    return false;
}
