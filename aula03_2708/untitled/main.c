#include <stdio.h>

int main() {
    //Exemplo while
    int soma = 0;
    int num;
    while(1){
        printf("Digite um numero: \n");
        scanf("%d", &num);
        soma += num;
        if(soma%7==0)break;
    }
    printf("Final: %d \n", soma);
    return 0;
}
