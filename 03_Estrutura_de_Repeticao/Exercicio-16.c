/*
    Fazer um algoritmo para verificar se um número lido é primo ou não. Número primo é aquele
    que é divisível por 1 e por ele mesmo.
*/

#include <stdio.h>

int main()
{
    // variaveis
    int numero, divisores = 0;

    // solicitando dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    // Verificando divisores
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
            divisores++;
    }
    // Um número primo tem exatamente 2 divisores: 1 e ele mesmo
    if (divisores == 2)
        printf("%d é primo! (Divisível apenas por 1 e %d)\n", numero, numero); // saida
    else
        printf("%d não é primo. Tem %d divisores.\n", numero, divisores); // saida

    return 0;
}