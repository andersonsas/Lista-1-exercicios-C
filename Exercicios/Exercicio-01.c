/*
    Faça um algoritmo que receba dois números inteiros
    e imprima a soma desses dois números.
*/

#include <stdio.h>

int main()
{
    int num1, num2, soma = 0; // Criando variáveis

    // Solicita ao usuário que digite dois números inteiros
    printf("\vDigite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2; // Calcula a soma
    
    printf("A soma de %d e %d é igual a %d\n\n", num1, num2, soma);// Imprime o resultado
    return 0;
}
