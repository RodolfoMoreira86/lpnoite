#include <stdio.h>

int main() {
    int soma=0;
    int num;
    do{
        do{
            printf("Entre com um dado: ");
            scanf("%d", &num);
        }while(num<1 || num>20);
        soma+= num;
    }while(soma<=100);
    printf("Valor da soma: %d \n", soma);
    return 0;
}
