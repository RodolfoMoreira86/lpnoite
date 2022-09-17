#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Gerar 10 Valores Aleatorios entre 1 e 99\n");
    int vetor[10] = {0};
    srand(time(NULL));
    int cont = 0;
    do{
        int repetido = 0;
        int gerado = (rand() % 99) + 1;
        for(int i=0; i<10; i++){
            if(vetor[i] == gerado){
                repetido = 1;
                break;
            }
        }
        if(!repetido){
            vetor[cont] = gerado;
            cont++;
        }
    }while(cont < 10);
    //imprimir o vetor
    for(int i=0; i<10; i++){
        printf("[%2d ]", vetor[i]);
    }
    return 0;
}
