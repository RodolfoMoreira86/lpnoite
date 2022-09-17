#include <stdio.h>

//Exercicio 01 - Lista
int main() {
    printf("Ler cinco elementos para um vetor de inteiros\n");
    int v[5] = {0};
    int contPar=0, contImpar=0, somaPar=0, somaImpar=0;
    for(int i=0; i<5; i++){
        printf("Digite o valor: \n");
        scanf("%d", &v[i]);
        if(v[i] % 2 ==0){
            contPar++; //conto pares
            somaPar+= v[i]; //acumulo pares
        }else{
            contImpar++; //conto impares
            somaImpar+= v[i]; //acumulo impares
        }
    }
    printf("Soma dos pares: %d \n", somaPar);
    printf("Soma dos impares: %d \n", somaImpar);
    printf("Soma total: %d \n", somaImpar + somaPar);
    printf("Percentagem de impares: %.2f%%\n", contImpar/5.0 * 100);
    printf("Percentagem de pares: %.2f%%\n", contPar/5.0 * 100);
    return 0;
}
