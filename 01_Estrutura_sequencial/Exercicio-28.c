/*
    A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça
    um algoritmo que receba um valor de uma compra e mostre o valor das prestações.
*/

#include <stdio.h>

int main()
{
    // variaveis
    float valorCompra, valorPrestacao;
    int numPrestacoes = 5;

    // Entrada de dados
    printf("\nDigite o valor total da compra: ");
    scanf("%f", &valorCompra);

    // Processando
    valorPrestacao = valorCompra / numPrestacoes;

    // Saida
    printf("Valor de cada uma das %d prestacoes: R$ %.2f\n\n", numPrestacoes, valorPrestacao);

    return 0;
}
