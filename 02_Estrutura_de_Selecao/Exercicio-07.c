/*
    Faça um programa que receba a idade de um nadador
    e imprima a sua categoria seguindo as regras:
    categoria           idade
    infantil A          5 – 7 anos
    infantil B          8 – 10 anos
    juvenil A           11 – 13 anos
    juvenil B           14 – 17 anos
    sênior maiores de 18 anos
*/

#include <stdio.h>

int main()
{
    // variaveis
    int idade;

    // entrada de dados
    printf("Entre com a idade\n");
    scanf("%d", &idade);

    // processando
    switch (idade)
    {
    case 5:
    case 6:
    case 7:
        printf("Infatil A");
        break;
    case 8:
    case 9:
    case 10:
        printf("Infatil B");
        break;
    case 11:
    case 12:
    case 13:
        printf("Juvenil A");
        break;
    case 14:
    case 15:
    case 16:
    case 17:
        printf("Juvenil B");
        break;
    default:
        printf("Senior");
    }

    return 0;
}
