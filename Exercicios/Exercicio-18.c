/*
    Crie um programa que receba a largura e o comprimento de um lote de terra
    e mostre a área total existente.
*/

#include <stdio.h>

int main()
{
    // Variáveis.
    float comprimento, largura, area = 0;
    // Solicitando as medidas do terreno.
    printf("\vDigite o comprimeiro: ");
    scanf("%f", &comprimento);

    printf("Digite a largura: ");
    scanf("%f", &largura);
    // calculando área
    area = comprimento * largura;
    // Saída
    printf("\nA area do terro é de %.2f\n\n", area);
    return 0;
}