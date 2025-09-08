/*
    Exibir a soma dos números positivos no intervalo de um a cem.
*/
#include <stdio.h>

int main()
{
    // variavel
    int soma = 0;

    // laco de 1 a 100
    for (int i = 0; i <= 100; i++)
    {
        soma += i; // atualizando a soma
    }

    // Exibindo resultado
    printf("A soma dos numeros positivos no intervalo de 0 a 100\n");
    printf("é de %d", soma);

    return 0;
}