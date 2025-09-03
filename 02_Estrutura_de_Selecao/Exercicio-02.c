/*
    Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferior a 500
    reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do
    salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento.
*/
#include <stdio.h>

int main()
{
    // declaracao de variaveis.
    float salario;
    float percetagem = 0.3, novo_salario = 0;

    // solicitacao de dados
    printf("Informe o salario do funcionario: ");
    scanf("%f", &salario);

    // processando
    novo_salario = salario + salario * percetagem;

    // saida
    if (salario < 500)
        printf("O novo salário com %.1f %% de aumento: R$ %.2f", percetagem * 100, novo_salario);
    else
        printf("O funcionario não tem direito ao aumento");

    return 0;
}
