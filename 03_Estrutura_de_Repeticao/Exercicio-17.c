/*
    Fazer um algoritmo para verificar se um número lido é número perfeito. Número perfeito é
    aquele que é igual a soma dos seus divisores. Por exemplo: 6 = 1 + 2 + 3
*/

#include <stdio.h>

int main()
{
    int numero;

    printf("::Quer saber se o numero é perfeito:: \n");
    printf("Digite um número inteiro: \n");
    scanf("%d", &numero);

    int somatorio = 0;

    for (int i = 1; i < numero; i++)
    {
        if (numero % i == 0)
            somatorio += i;
    }

    if (somatorio == numero)
    {
        printf("\nO número %d é um número perfeito", numero);
    }
    else
        printf("\nO número %d não é um número perfeito", numero);

    return 0;
}