#include <stdio.h>

int main() {
    int x, y;
    printf("Digite dois valores inteiros: \n");
    scanf("%d%d", &x, &y);
    if (!y) {
        printf("Impossivel dividir por zero \n");
        return 1;
    }
    int r = x / y;
    printf("Resultado: %d \n", r);
    return 0;
}
