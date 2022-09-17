#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * Faça um programa que preencha um vetor com 10 números reais,
 * calcule e mostre a quantidade de números negativos e a
 * soma dos números positivos desse vetor*/
int main() {
    srand(time(NULL));
    double v[10] = {0.0};
    //gerar 10 valores reais
    for (int i = 0; i < 10; i++) {
        if(i % 2 ==0 && rand() % 2){
            //gero positivo
            v[i] = (rand() % 98)  + 1;
        }else{
            //gero negativo
            v[i] = ((rand() % 98)  + 1) * -1;
        }
    }
    int qtdNeg = 0;
    int somaPos = 0;
    for (int i = 0; i < 10; ++i) {
        if(v[i] > 0){
            //positivo soma
            somaPos+= v[i];
        }else{
            qtdNeg++;
        }
    }
    printf("Valores do vetor\n");
    for (int i = 0; i < 10; ++i) printf("[%.2lf ] ", v[i]);
    printf("\nSoma dos positivos: %d \n", somaPos);
    printf("Qtd de negativos: %d \n", qtdNeg);
    return 0;
}
