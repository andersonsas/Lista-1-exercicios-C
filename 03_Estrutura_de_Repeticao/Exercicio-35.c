/*
    Elaborar um programa para ler três valores distintos e exibir o maior deles.
*/

#include <stdio.h>

int main()
{
    // variáveis
    int a, b, c;

    // entrada
    printf("Digite o valor A: ");
    scanf("%d", &a);
    printf("Digite o valor B: ");
    scanf("%d", &b);
    printf("Digite o valor C: ");
    scanf("%d", &c);

    // verifica se os valores são distintos
    if (a == b || a == c || b == c) {
        printf("Os valores devem ser distintos.\n");
        return 1;
    }

    // processa e exibe saída
    if (a > b && a > c) {
        printf("A = %d", a);
    }
    else if (b > a && b > c) {
        printf("B = %d", b);
    }
    else {
        printf("C = %d", c);
    }

    return 0;
}