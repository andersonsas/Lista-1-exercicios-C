/*
    Faça um algoritmo que após a entrada de uma determinada distância entre dois pontos (em KM) e
    uma determinada velocidade (km/h), diga qual o tempo médio que levará para chegada a esse local e
    qual a velocidade em metros/segundo.
*/

#include <stdio.h>

int main()
{
    float distancia_km, velocidade_kmh, velocidade_ms = 0;
    float tempo_medio = 0;

    printf("Digite a distancia dos dois pontos (km) e a velocidade (km/h): ");
    scanf("%f%f", &distancia_km, &velocidade_kmh);

    tempo_medio = distancia_km / velocidade_kmh;
    velocidade_ms = (velocidade_kmh * 1000) / (1 * 60 * 60);

    printf("\nO tempo médio é de %.2f horas", tempo_medio);
    printf("\nA velocidade média por metros por segundos é: %.2f\n\n", velocidade_ms);

    return 0;
}