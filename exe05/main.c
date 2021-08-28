#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
  char texto[100];

  fgets(texto, 100, stdin);
  inverte(texto);

  return(0);
}