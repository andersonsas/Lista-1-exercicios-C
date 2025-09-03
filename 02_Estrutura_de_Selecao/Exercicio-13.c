/*
    Faça um programa que receba a idade de uma pessoa e classifique-a seguindo o critério
    a seguir:

    idade           Classificação
    0 a 2 anos          Recém-nascido
    3 a 11 anos         criança
    12 a 19 anos        adolescente
    20 a 55 anos        adulto
    Acima de 55 anos    idoso
*/

#include <stdio.h>

int main()
{
    // variavel
    int idade;

    // solicitando dados
    printf("Informe a idade da pessoa: ");
    scanf("%d", &idade);

    // processamento e saida
    if (idade < 3)
        printf("Recém nascido");
    else if (idade < 12)
        printf("Criança");
    else if (idade < 20)
        printf("Adolescente");
    else if (idade < 56)
        printf("Adulto");
    else
        printf("Idoso");
}