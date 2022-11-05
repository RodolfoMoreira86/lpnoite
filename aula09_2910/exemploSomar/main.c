#include <stdio.h>
int somar(int n){
    if(n==0) return 0;
    int valor = 0;
    printf("Digite um valor:  \n");
    scanf("%d", &valor);
    return valor + somar(n - 1);
}
int main() {
    printf("Somar 05 valores: %d \n", somar(5));
    return 0;
}
