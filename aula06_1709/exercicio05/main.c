#include <stdio.h>
/*
 * Faça um programa para ler a nota da prova de 15 alunos
 * e armazene num vetor, calcule e imprima a média geral.
 * */
int main() {
    double nota[15] = {0.0};
    double total = 0.0;
    for (int i = 0; i < 15; i++) {
        printf("Entre com a nota do aluno %d \n", i+1);
        scanf("%lf", &nota[i]);
        total+= nota[i];
    }
    printf("Media geral da sala: %.2lf \n", total/15.0);
    return 0;
}
