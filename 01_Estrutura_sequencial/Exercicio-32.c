/*
    Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    • A idade dessa pessoa;
    • Quantos anos ela terá em 2028.
*/

#include <stdio.h>
int main()
{
    // variáveis
    int anoNascimento, anoAtual;
    int idade = 0, futuro = 0;

    // entrada de dados
    printf("\nInforme o seu ano de nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Informe o ano atual: ");
    scanf("%d", &anoAtual);

    // calculando
    idade = anoAtual - anoNascimento;
    futuro = 2028 - anoNascimento;

    // saída
    printf("\nA idade é de %d anos.", idade);
    printf("\nEm 2028 a pessoa terá %d anos.", futuro);

    return 0;
}