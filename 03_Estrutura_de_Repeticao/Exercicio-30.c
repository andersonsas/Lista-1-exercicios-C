/*
    Construa um algoritmo que leia um número inteiro n e verifique se n é triangular ou não. Um
    numero é triangular se ele é o produto de três números inteiros consecutivos. Exemplo: 120
    é triangular, pois 4 x 5 x 6 = 120.
*/

#include <stdio.h>

int main()
{
    int n; // variaveis
    int produto = 1;

    printf("Digite um numero inteiro positivo: "); // solicita dados
    scanf("%d", &n);
    
    // avalia todos os produtos de tres numeros consecutivos
    for (int t = 1; t <= n; t++)
    {
        produto = t * (t + 1) * (t + 2); // produto de tres numeros consecutivos
        if (produto < n)                 // se produto for menor que n
            produto = 0;                 // zera produto para continuar o laço
        else if (produto == n)
        {
            // saída de quando é triangular
            printf("\n%d é triangular: %d x %d x %d", n, t, t + 1, t + 2);
            return 0;
        }
        else
        {
            // saída de quando não é triangular
            printf("%d não é triangulo.\n", n);
            return 0;
        }
    }
    
    return 0;
}