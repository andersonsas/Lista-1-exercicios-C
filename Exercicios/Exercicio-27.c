/*
    Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de
    conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include <stdio.h>

int main()
{
    // declarando variaveis
    int c, f = 0;

    // solitando informacao do usuario
    printf("\nDigite a temperatura em graus celsius: ");
    scanf("%d", &c);

    // processando
    f = (9 * c + 160) / 5;

    // saida
    printf("\nTemperatura em fahrenheit: %d", f);
    return 0;
}