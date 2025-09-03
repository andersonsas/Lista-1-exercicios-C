/*
    Faça um programa que receba três notas de um aluno, calcule e imprima a média
    aritmética entre essas três notas e uma mensagem que segue a tabela abaixo:
    Média           Mensagem
    0.0 |__         5.0 reprovado
    5.0 |__         7.0 exame
    7.0 |__|        10.0 aprovado
*/
#include <stdio.h>
int main()
{
    // variaveis
    float nota1, nota2, nota3;
    float media = 0;

    // solicitando dados
    printf("Entre com a primeira nota: ");
    scanf("%f", &nota1);
    printf("Entre com a segunda nota: ");
    scanf("%f", &nota2);
    printf("Entre com a terceira nota: ");
    scanf("%f", &nota3);

    // calculando media
    media = (nota1 + nota2 + nota3) / 3;

    int _media = (int)media; // extraindo numero inteiro para o switch

    switch (_media)
    { // saidas
    case 10:
    case 9:
    case 8:
    case 7:
        printf("Nota %.1f - Aprovado", media);
        break;
    case 6:
    case 5:
        printf("Nota %.1f - Exame", media);
        break;
    default:
        printf("Nota %.1f - Reprovado", media);
        break;
    }
}