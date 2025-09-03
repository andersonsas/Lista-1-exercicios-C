/*
    No curso de Desenvolvimento de Software, a nota final do estudante é calculada a partir de
    3 notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral
    e a um exame final. As notas variam de 0 a 10 e a nota final é média ponderada das 3 notas
    mencionadas. A tabela a seguir fornece os pesos das notas:
    Laboratório - peso 2
    Av. Semestral - peso 3
    Exame final - peso 5
    Faça um programa que receba as 3 notas do estudante, calcule e imprima a
média final e o conceito desse estudante.
O conceito segue a tabela abaixo:
média final conceito
8.0 |__| 10.0 A
7.0 |__ 8.0 B
6.0 |__ 7.0 C
5.0 |__ 6.0 D
< 5.0 E
*/

#include <stdio.h>

int main()
{
    // declarando variaveis
    float nota_lab, nota_av_semestral, nota_exame, media;
    int faixa;
    // Solicitando os dados
    printf("Digite a nota do trabalho de laboratorio (peso 2): ");
    scanf("%f", &nota_lab);

    printf("Digite a nota da avaliacao semestral (peso 3): ");
    scanf("%f", &nota_av_semestral);

    printf("Digite a nota do exame final (peso 5): ");
    scanf("%f", &nota_exame);

    // calculando a media ponderada
    media = (nota_lab * 2 + nota_av_semestral * 3 + nota_exame * 5) / 10;

    // convertendo a média para um número inteiro de 0 a 10
    faixa = (int)media;

    switch (faixa)
    {
    case 10:
    case 9:
    case 8:
        printf("Media final: %.2f\nConceito: A\n", media); // saida
        break;
    case 7:
        printf("Media final: %.2f\nConceito: B\n", media); // saida
        break;
    case 6:
        printf("Media final: %.2f\nConceito: C\n", media); // saida
        break;
    case 5:
        printf("Media final: %.2f\nConceito: D\n", media); // saida
        break;
    default:
        printf("Media final: %.2f\nConceito: E\n", media); // saida
        break;
    }

    return 0;
}
