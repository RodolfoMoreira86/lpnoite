#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int gerado = rand() % 1000;
    int palpite;
    int cont = 0;
    while(1){
        printf("Digite o seu palpite %d: \n", ++cont);
        scanf("%d", &palpite);

        if (palpite == gerado){
            printf("Acertou \n");
            break;
        }else{
            if(cont==10){
                printf("Acabou suas chances \n");
                break;
            }
            printf("Errou \n");
            if(palpite < gerado){
                printf("palpite foi baixo \n");
            }else{
                printf("palpite foi alto \n");
            }
        }
    }



    return 0;
}
