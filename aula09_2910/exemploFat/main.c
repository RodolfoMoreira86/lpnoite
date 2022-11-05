#include <stdio.h>

int fatorial(int n){
    if(n==1)return 1;
    int fat;
    fat = n * fatorial(n - 1);
    return fat;
}
int main() {
    int valor;

    int resultado = fatorial(4);
    printf("Resultado: %d \n", resultado);
    return 0;
}
