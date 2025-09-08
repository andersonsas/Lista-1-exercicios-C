/*
     Fazer um algoritmo para achar o fatorial de um número N.
*/

#include <stdio.h>

int main()
{
    // variavel
    int numero, fatorial = 1;

    // entrada
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero < 0) return 0; // encerra o programa pra entrada negativa

    // iteração decrescente
    for (int i = numero; i > 0; i--)
    {
        fatorial *= i; // atualizando valor a cada loop
    }

    // saida
    printf("O fatorial de %d é %d", numero, fatorial);

    return 0;
}