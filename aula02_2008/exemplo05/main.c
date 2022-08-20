#include <stdio.h>

int main() {
    char sexo;
    printf("Digite [m] masculino ou [f] feminino \n");
    sexo = getchar();
    switch (sexo) {
        case 'm':
        case 'M':
            printf("Masculino \n");
            break;
        case 'f':
        case 'F':
            printf("Feminino \n");
            break;
        default:
            printf("Opcao nao informada \n");
    }
    return 0;
}
