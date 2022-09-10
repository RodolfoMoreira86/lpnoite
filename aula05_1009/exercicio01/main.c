#include <stdio.h>

int main() {
    int x[10], soma=0;;
    double media;
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: \n");
        scanf("%d", &x[i]);
        soma += x[i];
    }
    media = soma / 10.0;
    int cont = 0;
    for (int i = 0; i < 10; i++) {
        if(x[i] < media) {
            cont++;
        }
    }
    //impressao dos resultados
    for (int i = 0; i < 10; i++) {
        printf("[ %d] ", x[i]);
    }
    printf("\n");
    printf("Media de valores: %.2f \n", media);
    printf("Qtd de valores abaixo da media: %d \n",cont);
    return 0;
}
