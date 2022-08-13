#include <stdio.h>
#include <stdlib.h>
/*
 * Programa: Rainha x Monge
 * Problema: Pagar o empréstimo para o monge
 * Cenário: Um grão de trigo na primeira posição
 * do tabuleiro de xadrez e dobrar nas casas subsequentes
 * Total de grãos de trigo no tabuleiro é o valor do
 * pagamento.
 * */
int main() {
    printf("Rainha X Monge");
    double grao=1, total=1;
    printf("\n%d -> total \n", &total);
    printf("casa 1: 1 grao.\n");
    for (int casa = 2; casa <= 64; ++casa) {
        grao*= 2;
        printf("casa %d: %0.lf graos.\n", casa, grao);
        total+= grao;
    }
    printf("Total em graos: %.0lf \n", total);
    return 0;
}
