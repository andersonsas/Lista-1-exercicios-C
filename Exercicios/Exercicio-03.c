/*
    Faça um algoritmo que receba dois números inteiros,
    calcule e imprima a divisão do primeiro número pelo segundo.
*/
#include <stdio.h>

int main()
{
    // Criando variáveis
    int num1, num2;
    float divisao = 0;

    // Solicita ao usuário que digite dois números inteiros
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro que não seja 0 (zero): ");
    scanf("%d", &num2);

    // Calcula a divisão
    divisao = (float)num1 / num2;

    // Imprime o resultado
    printf("A divisão de %d por %d é igual a: %.2f", num1, num2, divisao);

    return 0;
}