#include <stdio.h>
#include <string.h>

int main() {
    char palavras[3][15];
    for (int i = 0; i < 3; ++i) {
        fflush(stdin);
        printf("Digite a palavra %d \n", i+1);
        gets(palavras[i]);
    }
    //palavras digitadas
    for (int i = 0; i < 3; ++i) {
        puts(strrev(palavras[i]));
    }
    return 0;
}
