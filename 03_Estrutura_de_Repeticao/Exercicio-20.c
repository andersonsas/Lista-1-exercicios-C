/*
    Construa um algoritmo que faça a conversão de um número que está na base decimal para
    a base binária.
*/

#include <stdio.h>

int main()
{
    // variaveis
    int num, copia, binario[32], i = 0;

    printf("Digite um número decimal: ");
    scanf("%d", &num);
    // verificando entrada zero
    if (num == 0)
    {
        printf("Número em binário: 0\n");
        return 0;
    }

    copia = num; // faz uma copia do usuario

    // extrai os restos da divisão por 2 (bits), armazenando na ordem inversa
    while (copia > 0)
    {
        binario[i] = copia % 2;
        copia /= 2;
        i++; // contagem dos digitos binarios
    }

    printf("Número %d em binário: ", num);

    // Imprime os bits na ordem correta (invertendo o vetor)
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binario[j]); // saida
    }
    printf("\n");

    return 0;
}
