#include <stdio.h>

int main() {
    char s[100];
    char *ptr = &s[0]; /* aponta para o 1o. caractere de s*/
    printf("Introduza uma string: ");
    gets(s);
    if (*ptr == '\0') return 0;
    /*Imprimir string normalmente */
    while(*ptr!='\0')
        putchar(*ptr++);
    printf("\n\n");
    /*Imprimir ao contrário */
    ptr--; //por causa do '\0'
    while(ptr>=s) /*Enquanto ptr for >=que &s[0] */
        putchar(*ptr--);
    printf("\n\n");
    ptr++;
    return 0;
}
