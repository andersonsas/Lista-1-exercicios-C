/*
    A série de Ricci difere da série de Fibonacci porque os dois primeiros termos podem ser
    definidos pelo usuário. Imprima os n primeiros termos da série de Ricci.
*/

#include <stdio.h>

int main()
{
    // variaveis
    int n;
    int primeiro, segundo, proximo;
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
        proximo = primeiro + segundo;
        printf("%d ", proximo);// saida restante
        primeiro = segundo;
        segundo = proximo;
    }

    return 0;
}