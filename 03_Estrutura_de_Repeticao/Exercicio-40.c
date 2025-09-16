/*
    Construir um programa que leia uma quantidade desconhecida de valores, e conte quantos
    deles estão no intervalo [10,20] e quantos estão fora do intervalo, escrevendo estas
    informações.
*/

#include <stdio.h>

int main()
{
    // variáveis
    int valor;
    int dentro = 0, fora = 0;

    while (1) {
        printf("Digite um número inteiro (999 para encerrar): ");
        scanf("%d", &valor); // solita dados
        if (valor == 999) break;

        if (valor >= 10 && valor <= 20) {
            dentro++; // conta +1 
        }
        else {
            fora++; // conta +1
        }
    }

    // saída
    printf("%d valores estão entre 10 e 20.\n", dentro);
    printf("%d valores estão fora de 10 e 20", fora);

    return 0;
}