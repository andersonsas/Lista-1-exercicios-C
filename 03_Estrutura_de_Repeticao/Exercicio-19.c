/*
    O número 3025 possui a seguinte característica:
    30 + 25 = 55
    55² = 3025
    Fazer um algoritmo que pesquise e imprima todos os números de quatro dígitos que
    apresentam tal característica.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b; // dezenas
    for (int i = 1000; i < 9999; i++)
    {
        a = i / 100; // obtendo dezena
        b = i % 100;

        if (pow(a + b, 2) == i) // comparando a potencia com o iterando
        {
            printf(" --%d-- ", i); // saida
        }
    }

    return 0;
}