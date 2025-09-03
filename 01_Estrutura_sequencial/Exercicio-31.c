/*
    Faça um algoritmo que apresente, para um salário informado pelo usuário,
    um novo salário com aumento de 37%.
*/

#include <stdio.h>

int main()
{
    // declarando variáveis
    float salario, aumento = 0.37;
    // solicitando dados
    printf("\nInforme o seu salário mínimo: R$ ");
    scanf("%f", &salario);
    // calculando
    salario += salario * aumento;
    // saída
    printf("\nO novo salário é: R$ %.2f\n\n", salario);

    return 0;
}