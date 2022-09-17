#include <stdio.h>
//Exercicio 03 da lista
int main() {
    int vetor[10];
    //ler valores para o Vetor
    for(int i = 0; i <10; i++) {
        printf("Digite o dado: \n");
        scanf("%d", &vetor[i]);
    }
    //imprimir na ordem inversa da entrada
    for (int i = 9; i >=0; i--) {
        printf("[%2d ] ", vetor[i]);
    }
    return 0;
}
