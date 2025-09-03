/*
    Faça um programa que receba a idade de uma pessoa e imprima mensagem
    de maioridade ou não.
*/

#include <stdio.h>
int main()
{
    // declaração de variaveis
    int idade;

    // solicitacao de dados
    printf("Informe a idade da pessoa: ");
    scanf("%d", &idade);

    // verificando e imprimindo
    if (idade > 17)
        printf("A pessoa é maior de idade");
    else
        printf("A pessoa é menor de idade");

    return 0;
}