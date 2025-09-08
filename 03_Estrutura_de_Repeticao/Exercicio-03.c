/*
    Elaborar um programa que apresente no final o somatório dos valores pares existentes
    entre 1 e 500.
*/

#include <stdio.h>

int main()
{
    // variavel 
    int soma = 0;

    //laco de 1 a 100
    for (int i = 0; i <= 500; i++)
    {
        if (i % 2 == 0) // filtrando os pares
        {
            soma += i; // atualizando a soma
        }
    }

    // Exibindo resultado
    printf("A soma dos numeros pares no intervalo de 0 a 100\n");
    printf("é de %d", soma);

    return 0;    
}