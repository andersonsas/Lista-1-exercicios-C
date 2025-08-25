/*
    Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o novo salário
    sabendo-se que este sofreu um aumento de 25%.
*/

#include <stdio.h>

int main()
{
    float salario, aumento = 0.25; // Definindo variáveis.
    float novo_salario = 0;

    printf("\vDigite o salario do funcionario: "); // Solicitando o salario
    scanf("%f", &salario);

    novo_salario = salario * (1 + aumento); // Calculando

    printf("O novo salario é de R$ %.2f\n\n", novo_salario); // Saída    

    return 0;
}