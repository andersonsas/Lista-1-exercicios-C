/*
    Faça um programa que receba a quantidade e o valor de três produtos, no seguinte formato:
    quantidade1 valor1 quantidade2 valor2 quantidade3 valor3. O programa deve calcular esses valores
    seguindo a fórmula total = quantidade1* valor1 + quantidade2 * valor2 + quantidade3 * valor3.
    O valor total deve ser apresentado no final da execução do programa.
*/

#include <stdio.h>

int main()
{
    // Iniciando variáveis
    int quantidade1, quantidade2, quantidade3, valor1, valor2, valor3, total = 0;
    // Solicitações
    printf("\vQuantidade do produto 1: ");
    scanf("%d", &quantidade1);
    printf("Valor do produto 1: ");
    scanf("%d", &valor1);

    printf("\nQuantidade do produto 2: ");
    scanf("%d", &quantidade2);
    printf("Valor do produto 2: ");
    scanf("%d", &valor2);

    printf("\nQuantidade do produto 3: ");
    scanf("%d", &quantidade3);
    printf("Valor do produto 3: ");
    scanf("%d", &valor3);

    // Calculando o valor total.
    total = quantidade1 * valor1 + quantidade2 * valor2 + quantidade3 * valor3;

    // Saída
    printf("\nO valor total é de %.2d.\n\n", total);

    return 0;
}