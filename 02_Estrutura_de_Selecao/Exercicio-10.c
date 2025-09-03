/*
    Faça um programa que receba um número, verifique se este número é par ou ímpar e
    imprima a mensagem.
*/

#include <stdio.h>

int main()
{
    // variaveis
    int numero;

    // solicitando dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // processando
    if (numero % 2 == 0)
    {
        printf("Numero digitado é Par"); // saida
    }
    else
    {
        printf("Numero digitado é Impar"); // saida
    }

    return 0;
}