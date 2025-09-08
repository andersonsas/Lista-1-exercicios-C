/*
    Construa um algoritmo que leia um número inteiro N e imprima o mesmo na ordem inversa:
    exemplo: dado 23457, a saída será 75432.
*/

#include <stdio.h>

int main()
{
    // variaveis
    int n, invertido = 0, resto;

    // entrada
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    // processando
    while (n != 0)
    {
        resto = n % 10;                     // Pega o último dígito
        invertido = invertido * 10 + resto; // Adiciona o dígito na posição invertida
        n = n / 10;                         // Remove o último dígito do número original
    }

    // exibindo
    printf("Número invertido: %d\n", invertido);

    return 0;
}