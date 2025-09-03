/*
    Faça um programa que receba dois números e imprima o menor dos dois.
*/

#include <stdio.h>

int main()
{
    // variaveis
    int num1, num2;
    //solicitando dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o primeiro numero: ");
    scanf("%d", &num2);

    //processando
    if (num1 > num2)
        printf("O numero %d é o menor", num2);
    else
        printf("O numero %d", num1);
    
    return 0;
}

