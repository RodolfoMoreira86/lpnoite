#include <stdio.h>

int main() {
    int vetor[100] = {0};
    int primo;
    int num = 2;
    int cont = 0;
    do{
        primo = 1;
        for (int i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }
        if(primo){
            vetor[cont] = num;
            cont++;
        }
        num++;
    }while(cont < 100);
    for (int i = 0; i < 100; ++i) {
        printf("[%4d] ", vetor[i]);
    }
    return 0;
}
