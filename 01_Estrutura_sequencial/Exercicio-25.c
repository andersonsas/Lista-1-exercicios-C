/*
    Faça um algoritmo que após a entrada de uma determinada distância entre dois pontos (em KM) e
    uma determinada velocidade (km/h), diga qual o tempo médio que levará para chegada a esse local e
    qual a velocidade em metros/segundo.
*/

#include <stdio.h>

int main()
{
    //Declarando valores
    float distancia_km, velocidade_kmh, velocidade_ms = 0;
    float tempo_medio = 0;

    //Solicitando os valores
    printf("\nDigite, repectivamente, a distância de dois pontos em (km) e a velocidade em (km/h).");
    printf("\nExemplo 1 - Digitando os dois valores separadas por espaços.\n\t\t320 60 <Enter>");
    printf("\nExemplo 2 - Digitando cada valor por vez.\n\t\t320 <Enter> 60 <Enter>\n");
    scanf("%f%f", &distancia_km, &velocidade_kmh);

    //Calculando
    tempo_medio = distancia_km / velocidade_kmh;
    velocidade_ms = (velocidade_kmh * 1000) / (1 * 60 * 60);

    //Saída
    printf("\nNa distância de %.0f km com velocidade de %.1f km/h,", distancia_km, velocidade_kmh);
    printf("\nO tempo médio é de %.2f horas.", tempo_medio);
    printf("\nA velocidade média em metros por segundos é de %.2f m/s.\n\n", velocidade_ms);

    return 0;
}