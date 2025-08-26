/*
    Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu rendimento,
    ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses.
    Sabendo-se que a fórmula usada para este cálculo é:
    Valor acumulado = (P*(1 +i)^n – 1)/i  em que i = taxa, P = aplicação mensal e n = número de meses.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // Declarando variáveis.
    float valor, resultado = 0;
    int meses, taxa;

    // Lendo informações.
    printf("\vInforme o valor constante: ");
    scanf("%f", &valor);

    printf("Informe um numero inteiro para taxa: ");
    scanf("%d", &taxa);

    printf("Informe um numero inteiro para quantidade de meses: ");
    scanf("%d", &meses);

    // Calculando
    resultado = (valor * pow(1 + ((float)taxa / 100), (float)meses) - 1) / ((float)taxa / 100);

    // Saída
    printf("O valor acumulado será de %.2f reais.\n\n", resultado);

    return 0;
}