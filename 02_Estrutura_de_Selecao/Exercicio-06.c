/*
    Faça um programa que receba a altura e o sexo de uma pessoa, calcule e imprima o seu
    peso ideal, utilizando as seguintes fórmulas:
    • para homens: (72.7 * H) - 58;
    • para mulheres: (62.1 * H) – 44.7.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variaveis
    float altura, peso;
    char sexo;

    // solicitacao de dados
    printf("Informe a altura da pessoa (metros): ");
    scanf("%f", &altura);
    printf("Informe a sexo da pessoa (H ou M): ");
    scanf(" %c", &sexo);

    // processando
    if (sexo == 'H' || sexo == 'h')
    {
        peso = (72.7 * altura) - 58;
    }
    else if (sexo == 'M' || sexo == 'm')
    {
        peso = (62.1 * altura) - 44.7;
    }
    else
    {
        printf("Sexo não selecionado\n");
    }
    // saida
    printf("Peso ideal da pessoa: %.2f", peso);

    return 0;
}