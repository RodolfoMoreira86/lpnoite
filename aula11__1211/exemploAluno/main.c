#include <stdio.h>
struct Aluno{
    int ra;
    char nome[51];
    char email[61];
};

int main() {
    struct Aluno aluno;
    printf("Digite o ra do aluno: \n");
    scanf("%d", &aluno.ra);
    fflush(stdin);
    printf("Digite o nome do aluno: \n");
    gets(aluno.nome);
    fflush(stdin);
    printf("Digite o email do aluno:  \n");
    gets(aluno.email);
    printf("\n\n=======================\n\n");
    printf("Ra: %d \n", aluno.ra);
    printf("Nome: %s \n", aluno.nome);
    printf("Email: %s \n", aluno.email);

    return 0;
}
