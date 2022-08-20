#include <stdio.h>

int main() {
    int operador;
    int gerenteTipo;
    printf("Digite o nivel do funcionario [1, 2, 3]\n");
    scanf("%d", &operador);
    switch (operador) {
        case 1:
            printf("Nivel: Gerente \n");
            printf("Nivel do gerente [1 - master, 2 - operacao ] \n");
            scanf("%d", &gerenteTipo);
            switch (gerenteTipo) {
                case 1:
                    printf("Gerente Master \n");
                    break;
                case 2:
                    printf("Gerente de Operacoes \n");
                    break;
                default:
                    printf("Nivel de gerente errado\n");
            }
            break;
        case 2:
            printf("Nivel Supervisor \n");
            break;
        case 3:
            printf("Nivel Operador \n");
            break;
        default:
            printf("Nivel nao encontrado \n");
    }
    return 0;
}
