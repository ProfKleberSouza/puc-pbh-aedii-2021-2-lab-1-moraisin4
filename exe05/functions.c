#include <string.h>
#include <stdio.h>
#include "functions.h"

void inverte(char texto[]){
  char aux, texto2[100];

  for (int i = 0; i < ( strlen(texto) / 2); i++ ) {
        aux = texto[i];
        texto[i] = texto[ (strlen(texto) - 1) - i];
        texto[(strlen(texto) - 1) - i] = aux;
    }
  
  for(int i = 0; i < strlen(texto); i++)
  {
    printf("%c", texto[i]);
  }
  printf("\n");
}
