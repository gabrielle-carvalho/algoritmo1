#include <stdio.h>

int main()
{
    float n1, n2;
    char op;

    printf("Insira o valor um: ");
    scanf("%f",&n1);

    printf("Insira o valor dois: ");
    scanf("%f",&n2);

    printf("Escolha a operacao desejada: ");
    scanf(" %c",&op);

    //printf("Operacao: %.2f %c %.2f \n", n1 , op, n2);

    if (op == '+'){
        printf("Resultado = %.2f \n", n1+n2);
    }
    if (op == '-'){
        printf("Resultado = %.2f \n", n1-n2);
    }
    if (op == '*'){
        printf("Resultado = %.2f \n", n1*n2);
    }
    if (op == '/'){
        printf("Resultado = %.2f \n", n1/n2);
    }
}
