/*
    Faça um algoritmo que receba dois números, calcule e imprima um elevado ao outro.

*/

#include <stdio.h>
#include <math.h>

int main()
{
    // Criando variaveis.
    float num, num2;
    float resultado = 1;

    // Entrada de dados
    printf("Insira o primeiro numero: ");
    scanf("%f", &num);
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);

    //Calculando
    resultado = pow(num, num2);

    //Saída
    printf("Resultado do numero que se auto elevou: %.2f", resultado);

    return 0;
}