/*
    Crie um programa que receba três nomes quaisquer por meio da linha de execução do programa, e
    os imprima na tela da seguinte maneira: o primeiro e o último nomes serão impressos na primeira linha
    um após o outro, o outro nome (o segundo) será impresso na segunda linha.
*/

#include <stdio.h>
int main()
{
    char nome1[50], nome2[50], nome3[50];

    printf("\vDigite três nomes separados por espaço: ");
    scanf("%s %s %s", nome1, nome2, nome3);

    // Imprime primeiro e terceiro nomes na primeira linha
    printf("\n%s %s\n", nome1, nome3);

    // Imprime o segundo nome na segunda linha
    printf("%s\n\n", nome2);

    return 0;
}
