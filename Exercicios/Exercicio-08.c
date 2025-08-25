/*
    Faça um programa que receba um número inteiro, calcule e imprima:
    • a raiz quadrada desse número;
    • esse número elevado ao quadrado.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    //Variaveis
    int n1;
    double qR = 0, q2 = 0;

    //Solicitações
    printf("Insira um numero: ");
    scanf("%d", &n1);

    
    qR = sqrt(n1); //calcula a raiz quadrada
    q2 = pow(n1, 2); //calcula o quadrado

    printf("\nA raiz quadrado é: %f", qR);
    printf("\nO quadrado é: %f", q2);
    
    return 0;
}