#include <stdio.h>
int pegarQuantidadeDeLetras(char *s){
    char *ptr = s;
    while (*ptr != '\0'){
        ptr++;
    }
    return  ptr - s;
}
int main() {
    char palavra[100];
    printf("Digite uma palavra : \n");
    gets(palavra);
    int resultado = pegarQuantidadeDeLetras(palavra);
    printf("Qtd de letras: %d \n", resultado);
    puts(palavra);

    return 0;
}
