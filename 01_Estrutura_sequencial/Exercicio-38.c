/*
    Considerando uma eleição de apenas 2 candidatos, elabore um algoritmo que leia do teclado o
    número total de eleitores, o número de votos do primeiro candidato e o número de votos do segundo
    candidato. Em seguida, o algoritmo deverá apresentar o percentual de votos de cada um dos candidatos
    e o percentual de votos nulos.
*/

#include <stdio.h>
int main()
{
    // declarando variáveis
    int eleitores_total, votos_candidato_1, votos_candidato_2;
    float percentual1 = 0, percentual2 = 0, percentual0 = 0; // percentual dos nulos

    printf("\nInforme o numero total de eleitores: ");
    scanf("%d", &eleitores_total);
    printf("Informe o numero de votos do candidato 1: ");
    scanf("%d", &votos_candidato_1);
    printf("Informe o numero de votos do candidato 2: ");
    scanf("%d", &votos_candidato_2);

    // calculando
    percentual1 = ((float)votos_candidato_1 / eleitores_total) * 100;
    percentual2 = ((float)votos_candidato_2 / eleitores_total) * 100;
    percentual0 = 100 - percentual1 - percentual2;

    // saida
    printf("\nPercentual do candidato 1: %.2f%%", percentual1);
    printf("\nPercentual do candidato 2: %.2f%%", percentual2);
    printf("\nPercentual dos votos nulos: %.2f%%", percentual0);

    return 0;
}
