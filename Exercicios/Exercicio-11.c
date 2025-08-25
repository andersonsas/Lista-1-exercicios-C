/*
    Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o valor
    do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do salário.
*/

#include <stdio.h>
int main()
{
    float salario, imposto = 0.05; // Definindo variáveis.
    float leao = 0;

    printf("\vDigite o salario do funcionario: "); // Solicitando o salario
    scanf("%f", &salario);

    leao = salario * imposto; // Calculando

    printf("O imposto a pagar é R$ %.2f\n\n", leao); // Saída

    return 0;
}