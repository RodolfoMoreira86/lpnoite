#include <stdio.h>

int main() {

    int x;
    int y;
    printf("Entre com valores de x e y: \n");
    scanf("%d%d", &x, &y);
    float r =(float)x / y;
    printf("Resultado: %f \n", r);
    return 0;
}
