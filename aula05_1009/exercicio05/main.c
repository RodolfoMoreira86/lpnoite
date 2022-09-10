#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int v[3];
    int m[3][3], r[3][3];
    //gerar os valores para o vetor
    for (int i = 0; i < 3; ++i) {
        v[i] = rand() % 10;
    }
    //gerar os valores para a matriz
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            m[i][j] = rand() % 10;
        }
    }
    //multiplicar os valores do vetor pelos valores
    //das colunas do vetor.
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            r[i][j]= v[i]  * m[i][j];
        }
    }
    //apresentar os resultados - fica por conta do aluno
    return 0;
}
