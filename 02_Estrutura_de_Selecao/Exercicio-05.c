/*
    Faça um programa que calcule e imprima o salário reajustado de um funcionário de acordo
    com a seguinte regra:
    • salários até 300, reajuste de 50%;
    • salários maiores que 300, reajuste de 30%.
*/

#include <stdio.h>

int main()
{
    // variaveis
    float salario;
    int perc_1 = 50, perc_2 = 30;

    // solicitacao de dados
    printf("Informe o salario: ");
    scanf("%f", &salario);

    // processando
    if (salario <= 300)
        salario += salario * perc_1 / 100;
    else
        salario += salario * perc_2 / 100;

    // saida
    printf("Salario reajustado: R$ %.2f", salario);

    return 0;
}
