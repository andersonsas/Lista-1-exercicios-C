/*
    Faça um algoritmo que receba dois números, calcule e imprima um elevado ao outro.

*/

#include <stdio.h>
#include <math.h>

int main()
{
    //Criando variaveis.
    int num, resultado = 1;

    printf("Insira um numero: ");
    scanf("%d", &num);

    resultado = pow(num, num);

    printf("Resultado do numero que se auto elevou: %d", resultado);

    return 0;
}