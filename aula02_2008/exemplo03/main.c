#include <stdio.h>

int main() {
    int x;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &x);
    int r = x < 0 ? x * x * -1 : x * x;
    printf("Resultado: %d \n", r);
    return 0;
}
