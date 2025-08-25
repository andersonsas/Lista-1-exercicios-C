/*
    Escreva um algoritmo para trocar os valores de três variáveis A, B e C de modo que A fique com o
    valor de B, B fique com o valor de C e C fique com o valor de A.
*/

#include <stdio.h>

int main()
{
    int A = 1, B = 2, C = 3;
    int temp = 0;

    printf("\vDigite 3 valores: \n");
    scanf("%d%d%d", &A, &B, &C);

    printf("A = %d, B = %d, C = %d", A, B, C);
    temp = A;
    A = B;
    B = C;
    C = temp;
    printf("\nA = %d, B = %d, C = %d", A, B, C);

    return 0;
}