#include <stdio.h>

int main() {
    int matriz[3][2] ={{0}};
    //Pegar os dados do usuario
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Digite o valor da linha [%d] coluna [%d] \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("[%3d] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
