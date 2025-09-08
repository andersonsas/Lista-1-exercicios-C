/*
    Fazer um programa que leia um conjunto de idades de pessoas. O final do conjunto de valores
    é conhecido através do valor -1. Calcule e escreva a idade média deste conjunto.
*/

#include <stdio.h>

int main()
{
    // variável
    int idade, soma = 0, contador = 0;
    float media;

    // informando
    printf("Digite as idades das pessoas (digite -1 para terminar):\n");

    // laco para solicitacao, somatorio e contagem
    while (1)
    {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade == -1)
        {
            break;
        }

        soma += idade;
        contador++;
    }

    // processando e saida
    if (contador > 0)
    {
        media = (float)soma / contador;
        printf("A idade média do conjunto é: %.2f\n", media);
    }
    else
    {
        printf("Nenhuma idade válida foi informada.\n");
    }

    return 0;
}