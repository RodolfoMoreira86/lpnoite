#include <stdio.h>

int main() {
    int a=10, b=5, c=0;
    c = a + ++b;
    printf("Valor de c: %d \n", c);
    printf("Valor de b: %d \n", b);
    printf("Valor de a: %d \n", a);
    return 0;
}
