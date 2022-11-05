#include <stdio.h>
void trocarLetra(char *s, char l){
    char *p_s = s;
    while(*p_s != '\0'){
        if(*p_s == l) *p_s = 'x';
        p_s++;
    }
}
int main() {
    char frase[200];
    printf("Digite uma frase: \n");
    gets(frase);
    printf("Letra a ser troca: ");
    char letra = (char)getchar();
    printf("Normal: %s \n", frase);
    trocarLetra(frase, letra);
    printf("Depois: %s \n", frase);
    return 0;
}
