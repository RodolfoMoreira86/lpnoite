#include <stdio.h>

int main() {
    int num[100];
    int i;
    for(i = 0; i<100; i++){
        printf("Digite um numero, ou -5 para sair \n");
        scanf("%d", &num[i]);
        if(num[i]==-5) break;
    }
    printf("Total de dados: %d \n", i);
    for(int x=0; x<i; x++){
        printf("%d \n", num[x]);
    }
    return 0;
}
