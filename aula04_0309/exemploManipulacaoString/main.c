#include <stdio.h>
#include <string.h>

int main() {
    char palavra[] = "Mundo Novo";
    int tam = strlen(palavra);
    printf("Tamanho da palavra: %d \n", tam);
    char outra[] = "Prometido";
    char nova[100] ={'\0'};
    strcpy(nova, palavra);
    strcat(nova, " ");
    strcat(nova, outra);
    puts(palavra);
    puts(outra);
    for (int i = 0; i < tam; ++i) {
        printf("%c\n", palavra[i]);
    }
    puts(nova);
    return 0;
}
