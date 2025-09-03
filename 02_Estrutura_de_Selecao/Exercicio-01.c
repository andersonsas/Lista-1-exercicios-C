/*
    Faça um programa que receba quatro notas de um aluno, calcule e imprima a média aritmética
    das notas e a mensagem de aprovado para média superior ou igual a 7.0 ou a mensagem de
    reprovado para média inferior a 7.0.
*/

#include <stdio.h>

int main()
{
    // declaração de variaveis
    float n1, n2, n3, n4;
    float media = 0;

    // entrada de dados
    printf("Entre com as quatros notas:\n");
    printf("Entre com a primeira nota: ");
    scanf("%f", &n1);
    printf("Entre com a segunda nota: ");
    scanf("%f", &n2);
    printf("Entre com a terceira nota: ");
    scanf("%f", &n3);
    printf("Entre com a quarta nota: ");
    scanf("%f", &n4);

    // calculo
    media = (n1 + n2 + n3 + n4) / 4;
    if (media >= 7)
    {
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
    
    return 0;
}