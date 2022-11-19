#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

struct Produto{
    int codigo;
    char descricao[51];
    int quantidade;
    double preco;
};


void inicializar(p_produto pProduto[], int tamanho){
    for(int i=0; i<tamanho; i++){
        pProduto[i] = NULL;
    }
}

void cadastrar(p_produto pProduto[], int posicao){
    //reservar 1 (um) espaco na memoria para um produto
    pProduto[posicao] = (p_produto) malloc(sizeof(struct Produto));
    printf("Digite o codigo do produto: \n");
    scanf("%d", &pProduto[posicao]->codigo);

    fflush(stdin);
    printf("Digite a descricao do produto: \n");
    gets(pProduto[posicao]->descricao);

    printf("Digite o preco do produto: \n");
    scanf("%lf", &pProduto[posicao]->preco);

    pProduto[posicao]->quantidade = 0;

}

void imprimir(p_produto pProduto[], int tamanho){
    //passar pelo vetor, listando cada item pelo ponteiro
    for(int i=0; i<tamanho; i++){
        printf("\n");
        printf("Codigo: %d \n", pProduto[i]->codigo);
        printf("Descricao: %s \n", pProduto[i]->descricao);
        printf("Quantidade em Estoque: %d \n", pProduto[i]->quantidade);
        printf("Preco: %.2lf \n", pProduto[i]->preco);
        printf("-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    }
}

void atualizar(p_produto pProduto[], int tamanho){
    int codProcurado;
    printf("Digite o codigo do produto a ser alterado: \n");
    scanf("%d", &codProcurado);
    for(int i = 0; i<tamanho; i++){
        if(codProcurado == pProduto[i]->codigo){
            fflush(stdin);
            printf("Digite a nova descricao: \n");
            gets(pProduto[i]->descricao);
            printf("Digite o novo preco: \n");
            scanf("%lf", &pProduto[i]->preco);
            printf("Produto atualizado com sucesso \n");
            system("pause");
            return; //sai da funcao
        }
    }
    printf("Produto nao encontrado\n");
    system("pause");
}

void verificarPatrimonio(p_produto pProduto[], int tamanho){
    double total = 0.0;
    for(int i=0; i<tamanho; i++){
        total+= pProduto[i]->preco * pProduto[i]->quantidade;
    }
    imprimir(pProduto, tamanho);
    printf("Total do patrimonio em Reais: %.2lf \n", total);
}
void comprar(p_produto pProduto[], int tamanho) {
    int codProcurado;
    printf("Digite o codigo do produto comprado: \n");
    scanf("%d", &codProcurado);
    for(int i = 0; i<tamanho; i++){
        if(codProcurado == pProduto[i]->codigo){
            fflush(stdin);
            printf("Digite a quantidade comprada: ");
            int qtd;
            scanf("%d", &qtd);
            if(qtd <=0 ){
                printf("Valor indevido. Informar corretamente\n");
                system("pause");
                return;
            }
            pProduto[i]->quantidade += qtd;
            printf("Quantidade lancada no estoque.");
            system("pause");
            return; //sai da funcao
        }
    }
    printf("produto nao encontrado");
    system("pause");

}

void vender(p_produto pProduto[], int tamanho) {
    int codProcurado;
    printf("Digite o codigo do produto vendido: \n");
    scanf("%d", &codProcurado);
    for(int i = 0; i<tamanho; i++){
        if(codProcurado == pProduto[i]->codigo){
            fflush(stdin);
            printf("Digite a quantidade vendida: ");
            int qtd;
            scanf("%d", &qtd);
            if(qtd > pProduto[i]->quantidade){
                printf("Quantidade indisponivel \n");
                system("pause");
                return;
            }
            pProduto[i]->quantidade -= qtd;
            printf("Quantidade lancada no estoque.");
            system("pause");
            return; //sai da funcao
        }
    }
    printf("produto nao encontrado");
    system("pause");

}

void listarProdutoUnico(p_produto pProduto[], int tamanho){
    int codProcurado;
    printf("Digite o codigo do produto desejado: \n");
    scanf("%d", &codProcurado);
    for(int i = 0; i<tamanho; i++){
        if(codProcurado == pProduto[i]->codigo){
            printf("Codigo: %d \n", pProduto[i]->codigo);
            printf("Descricao: %s \n", pProduto[i]->descricao);
            printf("Quantidae: %d \n", pProduto[i]->quantidade);
            printf("Preco: %.2f \n", pProduto[i]->preco);
            system("pause");
            return;
        }
    }
    printf("Produto nao encontrado");
    system("pause");
}