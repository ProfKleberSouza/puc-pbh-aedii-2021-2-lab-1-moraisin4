#include <stdio.h>
#include "functions.h"

int potencia(int x, int n){
    int aux = x;

    while(n > 1)
    {
      aux *= x;
      n--;
    }

    return aux;
}
