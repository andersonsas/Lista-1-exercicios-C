/*
    Faça um algoritmo que receba o peso e a altura de uma pessoa e calcule o índice de massa
    corpórea. Ele mede a relação entre peso e altura (peso em Kg, dividido pelo quadrado da altura em
    metros).
*/
#include <stdio.h>
int main()
{
    int peso;
    float altura, iMassa = 0;

    printf("\nInforme a peso em Kg: ");
    scanf("%d", &peso);

    printf("Informe a altura em metros: ");
    scanf("%f", &altura);

    // calculando
    iMassa = peso / altura * altura;

    //saida
    printf("\n O índice de massa corporea é %.2f", iMassa);

    /* code */
    return 0;
}
