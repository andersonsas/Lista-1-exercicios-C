/*
    A série de Fetuccine difere da série de Ricci porque o termo de posição par é resultado da
    subtração dos dois anteriores. Os termos ímpares continuam sendo o resultado da doma dos
    dois elementos anteriores. Imprima os n primeiros termos da série de Fetuccine.
*/

#include <stdio.h>

int main()
{
    // variaveis
    int n, primeiro, segundo, proximo;

    // solicitacoes
    printf("Digite o numeros de termos: ");
    scanf("%d", &n);
    printf("Digite o primeiro termo: ");
    scanf("%d", &primeiro);
    printf("Digite o segundo termo: ");
    scanf("%d", &segundo);

    printf("%d %d ", primeiro, segundo); // saida parcial
    for (int i = 3; i < n; i++)
    {
        if (i % 2 == 0) // se pá
            proximo = segundo - primeiro;
        else
            proximo = segundo + primeiro;

        printf("%d ", proximo); // completa saida

        primeiro = segundo; // deslocamento de valores
        segundo = proximo;
    }

    return 0;
}