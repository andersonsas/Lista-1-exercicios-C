/*
    O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
    distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e
    depois a percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor
    seja de 28% e os impostos 45%. Escrever um algoritmo que leia o custo de fábrica de um carro e
    informe o custo ao consumidor do mesmo.
*/

#include <stdio.h>

int main()
{
    // variáveis
    float custoFinal, custoFabrica;
    float percentualDistribuidor = 0.28, percentualImpostos = 0.45, custoParcial = 0;

    // solicitação de dados
    printf("Digite o custo de fabrica do carro: R$ ");
    scanf("%f", &custoFabrica);

    // processando
    custoParcial = custoFabrica + (percentualImpostos * custoFabrica);
    custoFinal = custoParcial + (percentualDistribuidor * custoParcial);

    // saída
    printf("O custo ao consumidor do carro e: R$ %.2f\n", custoFinal);

    return 0;
}