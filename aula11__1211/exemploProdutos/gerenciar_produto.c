#include <stdio.h>
#include <stdlib.h>
#include "produto.h"
#define MAX 1000

void comprar(p_produto pProduto[1000], int p);

int main() {
    p_produto vtrProdutos[MAX];
    int p = 0; //indica posicao (quantidade)
    inicializar(vtrProdutos, MAX);
    //montar o menu
    int opcao;
    do{
        printf("Cadastro de produtos \n");
        printf("1. Cadastrar Produto\n");
        printf("2. Atualizar Produto\n");
        printf("3. Comprar Produto\n");
        printf("4. Vender Produto\n");
        printf("5. Estoque de Produto\n");
        printf("6. Patrimonio Estocado \n");
        printf("7. Listar todos os produtos\n");
        printf("9. Sair \n");
        printf("Digite sua opcao:  \n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                cadastrar(vtrProdutos, p);
                p++;
                break;
            case 2:
                atualizar(vtrProdutos, p);
                break;
            case 3:
                comprar(vtrProdutos, p);
                break;
            case 4:
                vender(vtrProdutos, p);
                break;
            case 5:
                listarProdutoUnico(vtrProdutos, p);
                break;
            case 6:
                verificarPatrimonio(vtrProdutos, p);
                break;
            case 7:
                imprimir(vtrProdutos, p);
                break;
            case 9:
                printf("Fim do programa \n");
                exit(0);
        }
    }while(opcao!=9);

    return 0;
}


