/*
    Fazer um programa para achar a série de Fibonacci dos n primeiros termos: 1  1  2  3  5  8  13 ...
*/

#include <stdio.h>

int main()
{
    // variaveis
    int n, i;
    int t1 = 1, t2 = 1, proximo;
    // entrada
    printf("Digite a quantidade de termos da serie de Fibonacci: ");
    scanf("%d", &n);
    // analisando entradas
    if (n <= 0)
    {
        printf("Quantidade invalida.\n");
        return 0;
    }

    printf("Serie de Fibonacci com %d termos:\n", n);

    //processando
    if (n == 1)
    {
        printf("%d\n", t1);
    }
    else
    {
        printf("%d %d ", t1, t2); // imprime os dois primeiros termos
        for (i = 3; i <= n; i++)
        {
            proximo = t1 + t2;
            printf("%d ", proximo); // completa a saida
            t1 = t2;
            t2 = proximo;
        }
        printf("\n");
    }

    return 0;
}