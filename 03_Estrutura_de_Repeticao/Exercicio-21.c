/*
    Construa um algoritmo que faça a conversão de um número que está na base binária para a
    base decimal.
*/

#include <stdio.h>

int main()
{
    // variaveis
    int binario;
    int decimal = 0, base = 1;
    // solicitando dados
    printf("Digite um número binário (apenas dígitos 0 e 1): ");
    scanf("%d", &binario);

    // processando dados
    while (binario > 0)
    {
        // variavel auxiliar
        int ultimoDigito = binario % 10;
        // verificando valores permitidos
        if (ultimoDigito != 0 && ultimoDigito != 1)
        {
            printf("Erro: número contém dígitos que não são binários.\n");
            return -1;
        }

        decimal += ultimoDigito * base; // calcula o valor significativo atual
        base *= 2; // avança para o proximo valor significativo
        binario /= 10; // elimina o ultimo digito
    }

    if (decimal != -1)
    {
        printf("Valor decimal: %d\n", decimal); // saida
    }

    return 0;
}
