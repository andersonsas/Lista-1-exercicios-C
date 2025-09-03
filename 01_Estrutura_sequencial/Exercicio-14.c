/*
    Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e imprima:
    • o peso dessa pessoa em gramas;
    • se essa pessoa engordar 5%, qual será seu novo peso em gramas.
*/
#include <stdio.h>

int main()
{
    int kilo, grama, percetagem = 5; // Variáveis

    printf("\vDigite o peso em kilogramas: ");
    scanf("%d", &kilo);

    grama = kilo * 1000; // convertendo kilo para grama

    printf("\nO peso em gramas é de %.2dg", grama);

    // Incrementando o peso adicional ao peso em gramas
    grama += grama * percetagem / 100;

    printf("\nCom uma engorda de %d %% pesará %dg\n\n", percetagem, grama);

    return 0;
}