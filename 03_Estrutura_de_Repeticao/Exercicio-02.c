/*
    Exibir o produto dos números inteiros positivos no intervalo de um a cem.
*/

#include <stdio.h>

int main()
{
    //variaveis
    double produto = 1;

    //laco de 1 a 100
    for (int i = 1; i <= 100; i++)
    {
        produto *= i; // atualizando o produto
    }

    
    // exibindo o resultado
    printf("A produto dos numeros inteiros positivos de 0 a 100\n");
    printf("é de %d", produto);

    return 0;
}