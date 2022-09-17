#include <stdio.h>
/*Crie um programa que lê 10 valores inteiros pares e,
 * em seguida, mostre na tela os valores lidos na ordem inversa
 * */
int main() {
    //garantir dentro do vetor só pares
    int v[10];
    int cont=0;
    do{
        int num;
        printf("Digite um valor (PAR) - mas pode sacanear \n");
        scanf("%d", &num);
        if(num % 2 == 1) continue;
        v[cont] = num;
        cont++;
    } while (cont<10);
    //ordem invertida da entrada dos pares
    for (int i = 9; i >= 0; i--) {
        printf("[%d ] ", v[i]);
    }
    printf("\n");
    return 0;
}
