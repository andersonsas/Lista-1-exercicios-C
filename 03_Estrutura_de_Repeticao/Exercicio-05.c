/*
    Fazer um programa que leia 20 idades de pessoas.
    Calcule e escreva a idade média deste grupo.
*/

#include <stdio.h>

int main()
{
    // variaveis
    int idade, soma = 0;
    int quantidade_pessoas = 20;
    float media = 0;

    // Obtendo idades e acumulando
    int i = 1;
    while (i <= quantidade_pessoas)
    {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        soma += idade;
        i++;
    }

    // calculando a media
    media = (float)soma / quantidade_pessoas;

    // saida
    printf("A idade média do grupo: %.2f", media);

    return 0;
}