/*
    Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual.
    Calcule e imprima:
    • a idade dessa pessoa;
    • essa idade convertida em semanas.
*/
#include <stdio.h>

int main()
{
    // Variaveis
    int ano_nasc, ano_atual, idade = 0, idade_semanais = 0;

    printf("\vDigite o ano de nascimento: ");
    scanf("%d", &ano_nasc);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    // Obtendo as idades e 1 ano tem 52 semanas
    idade = ano_atual - ano_nasc;
    idade_semanais = idade * 52;

    // Saída
    printf("\nA pessoa tem %d anos ou %d semanas\n\n", idade, idade_semanais);
}