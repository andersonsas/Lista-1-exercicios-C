/*
    Fazer um programa para achar a série de Bergamacci dos n primeiros termos: 1  1  1  1  3  5
    9  17 ...
*/

#include <stdio.h>

int main()
{
    // variaveis
    int T1 = 1, T2 = 1, T3 = 1, T4, i = 3, n;

    // entrada
    printf("Quantos termos quer mostrar? ");
    scanf("%d", &n);
    printf("%d", T3);

    for (i = 1; i < n; i++)
    {
        T4 = T3 + T2 + T1; // soma dos três último
        T1 = T2;           // deslocamento de valores
        T2 = T3;
        T3 = T4; //

        // saida
        printf(" - %d", T1);
    }
    return 0;
}