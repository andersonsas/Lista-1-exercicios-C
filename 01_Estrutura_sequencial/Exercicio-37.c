/*
    Elabore um algoritmo para efetuar o cálculo da quantidade de combustível gasto em uma viagem,
    utilizando-se um automóvel que faz 12 Kms por litro. Para obter o cálculo, o usuário deverá
    fornecer o tempo gasto e a velocidade média durante a viagem. Desta forma, será possível obter
    a distância percorrida (distância = tempo * velocidade).
*/

#include <stdio.h>
int main()
{
    // variáveis
    float tempo_gasto, distancia = 0, combustivel_gasto = 0;
    int velocidade_media;

    printf("Informe o tempo gasto da viagem em horas: ");
    scanf("%f", &tempo_gasto);
    printf("Informe a velocidade media da viagem em km/h: ");
    scanf("%d", &velocidade_media);

    // calculando
    distancia = tempo_gasto * velocidade_media; // percorrido em quilometro
    combustivel_gasto = distancia / 12;         // 12 km por litro

    // saída
    printf("\nO consumo de combustível foi de %.2f litros.", combustivel_gasto);

    return 0;
}