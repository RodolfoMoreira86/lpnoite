#include <stdio.h>

int main() {
    int x, y;
    printf("Digite uma letra: \n");
    x = getchar();
    fflush(stdin);
    printf("Digite outra letra: \n");
    y = getchar();

    printf("Digitadas: %d e %d", x, y);

    printf("Tabela ascii \n");
    for (int i = 0; i < 256; ++i) {
        printf("Caractere %c = valor %d \n", i, i);
    }
    return 0;
}
