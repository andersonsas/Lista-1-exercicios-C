/*
    Construa um programa que leia dois números inteiros A e B, gere e imprima os números
    ímpares no intervalo [A, B].
*/

#include <stdio.h>

int main()
{
    // variaveis
    int A, B;

    printf("*** ÍMPARES NO INTERVALO ENTRE DOS NÚMEROS ***\n");
    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &A, &B); // solicita dados    

    if (A > B) { // Garante que A seja menor que B
        int temp = A;
        A = B;
        B = temp;
    }

    printf("Os numeros ímpares entre %d e %d é: \n", A, B);
    for (int i = A + 1; i < B; i++) {
        if (i % 2 == 1) printf("%d ", i); // imprime ímpares
    }

    return 0;
}