#include <stdio.h>

//Exercicio 02 da lista
int main() {
    int va[10], vb[10];
    //ler valores para o Vetor va
    for(int i = 0; i <10; i++) {
        printf("Digite o dado: \n");
        scanf("%d", &va[i]);
    }
    //verificar a posicao do indice
    for (int i = 0; i < 10; i++) {
        if(i % 2 ==0){
            vb[i] = va[i] * 5;
        }else{
            vb[i] = va[i] + 5;
        }
    }
    //mostrar os dois para vermos o resultado
    printf("Vetor A \n");
    for (int i = 0; i < 10; i++) {
        printf("[%3d] ", va[i]);
    }
    printf("\nVetor B \n");
    for (int i = 0; i < 10; i++) {
        printf("[%3d] ", vb[i]);
    }
    return 0;
}
