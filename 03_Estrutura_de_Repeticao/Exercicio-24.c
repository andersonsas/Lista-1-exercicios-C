/*
    Construa um algoritmo que faca a conversão de um número que está na base decimal para
    a base hexadecimal.
*/

#include <stdio.h>

int main()
{
    // variaveis
    int numero, i = 0;
    char hexadecimal[32];
    // solicitando dados
    printf("Digite um número decimal: ");
    scanf("%d", &numero);
    // verificando entrada zero
    if (numero == 0)
    {
        printf("Representação hexadecimal: 0\n");
        return 0;
    }

    // Conversão decimal para hexadecimal
    while (numero > 0)
    {
        int resto = numero % 16;

        if (resto < 10)
            hexadecimal[i] = resto + '0'; // Dígitos 0–9
        else
            hexadecimal[i] = resto - 10 + 'A'; // Letras A–F

        numero /= 16;
        i++;
    }

    // Impressão em ordem reversa
    printf("Representação hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");

    return 0;
}
