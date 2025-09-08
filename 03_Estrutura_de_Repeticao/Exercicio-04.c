/*
    Entrar com dois valores via teclado, onde o segundo deverá ser maior que o primeiro.
    Caso contrário solicitar novamente apenas o segundo valor.
*/

#include <stdio.h>

int main()
{
    // variavel
    int primeiro, segundo;

    // primeira entrada
    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro);

    do
    {
        // segunda entrada
        printf("Digite o segundo numero: ");
        scanf("%d", &segundo);
    } while (primeiro >= segundo); // caso primeiro igual segundo, volta para o loop

    // saida
    printf("Valores lidos: %d e %d\n", primeiro, segundo);

    return 0;
}