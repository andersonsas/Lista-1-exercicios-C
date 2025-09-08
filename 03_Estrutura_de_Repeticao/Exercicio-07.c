/*
    Fazer um programa que leia um conjunto de alturas de pessoas. O final do conjunto de valores
    é conhecido através do valor zero. Escreva a menor altura deste conjunto.
*/

#include <stdio.h>

int main()
{
    // variaveis
    float altura, menor_altura, primeira_altura = 1;

    // informando
    printf("Digite as alturas das pessoas (Digite 0 para terminar).\n");

    while (1)
    {
        // solicitando as alturas
        printf("Altura: ");
        scanf("%f", &altura);

        if (altura == 0)
            break;

        if (primeira_altura) // se tem a primeira.
        {
            menor_altura = altura; // atualiza
            primeira_altura = 0;
        }
        else if (altura < menor_altura) // atualizando comparacoes
        {
            menor_altura = altura;
        }
    }

    if (!primeira_altura) // saída
    {
        printf("A menor altura do conjunto é: %.2f\n", menor_altura);// saida
    }
    else
    { // aviso de quando se insere 0 de primeira.
        printf("Nenhuma altura válida foi informada.\n");// saida
    }

    return 0;
}