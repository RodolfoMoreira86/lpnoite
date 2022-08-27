#include <stdio.h>
#include <stdlib.h>

int main() {
    double salarioBruto, salarioLiquido, impostoPagar;
    do{
        printf("Digite o valor da salario bruto: \n");
        scanf("%lf", &salarioBruto);
        if(salarioBruto<=0) printf("Valor positivo, por favor. \n");
    }while(salarioBruto<=0);
    if(salarioBruto < 1000.0){
        impostoPagar = salarioBruto * 0.05;
    }else{
        if(salarioBruto < 5000.0){
            impostoPagar = salarioBruto * 0.11;
        }else{
            impostoPagar = salarioBruto * 0.35;
        }
    }
    salarioLiquido = salarioBruto - impostoPagar;
    printf("Salario Bruto: %.2lf \n", salarioBruto);
    printf("Salario Liquido: %.2lf \n", salarioLiquido);
    printf("Imposto a Pagar: %.2lf \n", impostoPagar);
    return 0;
}
