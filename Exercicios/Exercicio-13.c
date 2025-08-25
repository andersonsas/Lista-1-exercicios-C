/*
    Sabe-se que o kilowatt de energia custa um quinto do salário mínimo. Faça um algoritmo que
    receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. Calcule e
    imprima:
        • o valor, em reais, de cada kilowatt;
        • o valor, em reais, a ser pago por essa residência;
        • o novo valor a ser pago por essa residência, a partir de um desconto de 15%.

*/

#include <stdio.h>

int main()
{
    // Declarando as variáveis
    float salario_minimo, consumo, desconto = 0.15;
    float preco_unitario = 0, conta = 0;

    printf("\vDigite o salario minimo: "); // solicitando o salario minimo
    scanf("%f", &salario_minimo);

    printf("Digite o consumo: "); // solicitando o consumo
    scanf("%f", &consumo);

    preco_unitario = salario_minimo / 5; // calculando o preco de uma unidade de kilowatt
    conta = consumo * preco_unitario;    // calcando a conta

    printf("\nO valor de 1 kilowatt é R$ %.2f", preco_unitario);
    printf("\nO valor da fatura é R$ %.2f", conta);

    conta -= conta * desconto; // atualizando o novo valor da conta
    printf("\nA fatura com desconto: %.2f\n\n", conta);

    return 0;
}