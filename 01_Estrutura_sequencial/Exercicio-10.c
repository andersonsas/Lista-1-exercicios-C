/*
    Calcular e exibir a área de um quadrado a partir do valor de sua diagonal que será digitado.

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float diag, area = 0; // Definindo variáveis.
    float lado;

    // Entrada de dados
    printf("\vInsira um valor da diagonal do quadrado: ");
    scanf("%f", &diag);

    lado = diag / sqrt(2); // Calculando o lado
    area = lado * lado;    // Calculando área

    printf("A área do quadrado é %.2f\n\n", area); // Saída

    return 0;
}