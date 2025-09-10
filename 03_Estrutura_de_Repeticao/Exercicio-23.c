/*
    Construa um algoritmo que faca a conversão de um número que está na base octal para a 
    base decimal.
*/

#include <stdio.h>

int main() {
    int octal, decimal = 0, base = 1;

    printf("Digite um número octal (apenas dígitos de 0 a 7): ");
    scanf("%d", &octal);

    while (octal > 0) {
        int digito = octal % 10;

        if (digito < 0 || digito > 7) {
            printf("Erro: dígito inválido encontrado (%d). Octal só pode conter dígitos de 0 a 7.\n", digito);
            return 0; // encerra o programa;
        }

        decimal += digito * base;
        base *= 8;
        octal /= 10; // elimina o ultimo digito
    }

    printf("Valor decimal: %d\n", decimal);

    return 0;
}
