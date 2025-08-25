/*
    Faça um algoritmo que receba duas notas de um aluno e seus respectivos pesos,
    calcule e imprima a média ponderada dessas notas.
*/

#include <stdio.h>

int main()
{
    //criação das variáveis
    float n1,n2,mediap = 0;
    int p1,p2;
    
    //Solicitação das notas e pesos
    printf("Do Aluno insira:\n");
    printf("A primeira nota: ");
    scanf("%f", &n1);

    printf("O peso da primeira nota: ");
    scanf("%d", &p1);

    printf("A segunda nota: ");
    scanf("%f", &n2);

    printf("O peso da segunda nota: ");
    scanf("%d", &p2);

    //Calculando a media ponderada (mediap)
    mediap = (float) (n1*p1 + n2*p2) / (p1 + p2);

    //Exibindo o resultado:
    printf("A media ponderada do aluno é: %f", mediap);        

    return 0;
}
