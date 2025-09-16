/*
    Escreva um programa que escreva todos o números ímpares entre 100 e 200.
*/

#include <stdio.h>

int main()
{
    // variáveis
    int a = 100, b = 200;

    // processa e exibe
    for (a; a <= b; a++) {
        printf("%d ", a);
    }

    return 0;
}