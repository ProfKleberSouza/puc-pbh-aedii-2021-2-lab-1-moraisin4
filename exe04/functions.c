#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "functions.h"

void numero_vogais(char texto[]){
  int a = 0, e = 0, i = 0, o = 0, u = 0;
  
  for(int j = 0; j < strlen(texto); j++)
  {
    texto[j] = tolower(texto[j]);
    
    if(texto[j] == 'a')
      a++;

    else if(texto[j] == 'e')
      e++;

    else if(texto[j] == 'i')
      i++;

    else if(texto[j] == 'o')
      o++;

    else if(texto[j] == 'u')
      u++;
  }

  printf("A = %d\n", a);
  printf("E = %d\n", e);
  printf("I = %d\n", i);
  printf("O = %d\n", o);
  printf("U = %d\n", u);
}
