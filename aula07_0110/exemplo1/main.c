#include <stdio.h>
#include "calculadora.h"

int main() {
    int x, y;
    x = 12;
    y = 23;

    int resultado = somar(x, y);
    printf("Resultado: %d \n", resultado);
    resultado = subtrair(x, y);
    printf("Resultado: %d \n", resultado);
    return 0;
}
