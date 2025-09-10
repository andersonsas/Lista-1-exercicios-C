/*
    Construa um algoritmo que faça a conversão de um número que está na base hexadecimal
    para a base decimal.
*/

#include <stdio.h>

int main()
{
    // variaveis
    char hex[20];
    int decimal = 0, base = 1;
    // entrada de dados
    printf("Digite um número hexadecimal (ex: 1A3F): ");
    scanf("%s", hex);

    // Encontra o tamanho da string
    int tamanho = 0;
    while (hex[tamanho] != '\0')
    {
        tamanho++;
    }

    // Processa da direita para a esquerda
    for (int i = tamanho - 1; i >= 0; i--)
    {
        char c = hex[i];
        int valor;
        // processando dados de letra maiscula e minuscula
        if (c >= '0' && c <= '9')
        {
            valor = c - '0';
        }
        else if (c >= 'A' && c <= 'F')
        {
            valor = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f')
        {
            valor = c - 'a' + 10;
        }
        else
        {
            printf("Caractere inválido encontrado: %c\n", c);
            return 1;
        }

        decimal += valor * base; // calculando valor corrente
        base *= 16; //define proxima base
    }
    // saida
    printf("Valor decimal: %d\n", decimal);

    return 0;
}