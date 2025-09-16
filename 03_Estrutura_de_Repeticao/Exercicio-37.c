/*
    Escreva um programa que escreva todos o números ímpares entre 100 e 200.
*/

#include <stdio.h>

int main()
{
    // variáveis
    int a = 100, b = 200;

    // processa e exibe
    for (a; a <= b; a++) { //de 100 a 200
        if (a % 2 == 1) // se for ímpar
            printf("%d ", a); // imprime
    }

    return 0;
}