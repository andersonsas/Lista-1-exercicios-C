/*
    Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se
    que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário.
*/

#include <stdio.h>

int main()
{
    // declarando variaveis
    float custo;
    int perc;

    // solitando informacao do usuario
    printf("\nDigite o preço de custo do produto: ");
    scanf("%f", &custo);
    printf("Digite um acréscimo percentual inteiro: ");
    scanf("%d", &perc);

    // processando
    custo += custo * (float)perc / 100;

    // saida
    printf("\nValor da venda: %.2f", custo);
    return 0;
}
