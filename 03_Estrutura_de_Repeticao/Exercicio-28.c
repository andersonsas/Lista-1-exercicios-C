/*
    Construa um algoritmo que leia dois números inteiros e informe se um número é palíndromo.
    Exemplo: 567765 , 32423 e 567675 são exemplos de números palindromes.
*/

#include <stdio.h>

int main()
{
    // variaveis
    int num1, num2;
    int original1, original2;
    int invertido1 = 0, invertido2 = 0;

    // Solicitando dados
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Copiando
    original1 = num1;
    original2 = num2;

    // Inverte o primeiro número
    while (num1 > 0)
    {
        invertido1 = invertido1 * 10 + num1 % 10;
        num1 /= 10;
    }

    // Inverte o segundo número
    while (num2 > 0)
    {
        invertido2 = invertido2 * 10 + num2 % 10;
        num2 /= 10;
    }

    // Verifica se são palíndromos
    if (original1 == invertido1)
        printf("%d é palíndromo.\n", original1);
    else
        printf("%d não é palíndromo.\n", original1);

    if (original2 == invertido2)
        printf("%d é palíndromo.\n", original2);
    else
        printf("%d não é palíndromo.\n", original2);

    return 0;
}