/*
    Faça um algoritmo que receba um número inteiro,
    calcule e imprima a tabuada de multiplicação desse número.
*/

#include <stdio.h>

int main()
{
    //Criando variavel
    int n;

    //Sem laço de repetição
    printf("Insira um numero inteiro para saber sua tabuada: ");
    scanf("%d", &n);

    //Calculo sendo feito dentro do parametro de impressao
    printf("Tabuada de %d\n", n);
    printf("\t%d x 1 = %d", n, n * 1);
    printf("\n\t%d x 2 = %d", n, n * 2);
    printf("\n\t%d x 3 = %d", n, n * 3);
    printf("\n\t%d x 4 = %d", n, n * 4);
    printf("\n\t%d x 5 = %d", n, n * 5);
    printf("\n\t%d x 6 = %d", n, n * 6);
    printf("\n\t%d x 7 = %d", n, n * 7);
    printf("\n\t%d x 8 = %d", n, n * 8);
    printf("\n\t%d x 9 = %d", n, n * 9);
    printf("\n\t%d x 10 = %d", n, n * 10);
    
    return 0;
}