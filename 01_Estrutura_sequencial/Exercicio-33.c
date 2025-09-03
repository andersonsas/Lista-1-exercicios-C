/*
    Cada degrau de uma escada tem uma altura X. Faça um algoritmo que receba essa altura e a altura
    que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá
    subir para atingir seu objetivo.
*/

#include <stdio.h>

int main()
{
    // variáveis
    float alturaDegrau, alturaEscada;
    int degraus = 0;
    // entrada de dados
    printf("\nInforme a altura do degrau em centimetros: ");
    scanf("%f", &alturaDegrau);
    printf("Informe a altura da escada em centimetros: ");
    scanf("%f", &alturaEscada);
    // calculando
    degraus = alturaEscada / alturaDegrau;
    // saida
    printf("\nA escada vai ter %d degraus.", degraus);

    return 0;
}