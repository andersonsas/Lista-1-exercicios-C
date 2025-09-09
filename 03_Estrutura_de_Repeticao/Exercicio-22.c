/*
    Construa um algoritmo que faca a conversão de um número que está na base decimal para
    a base octal.
*/

#include <stdio.h>

int main()
{
    // variaveis
    int numero, octal[32], i = 0;

    // solicitando dados do usuario 
    printf("Digite um número decimal: ");
    scanf("%d", &numero);

    // verificando entrada zero
    if (numero == 0)
    {
        printf("Representação octal: 0\n");
        return 0; // encerra o programa
    }

    // Conversão decimal para octal
    while (numero > 0)
    {
        octal[i] = numero % 8; // valores do resto guardado
        numero = numero / 8; 
        i++; // contando o tamanho de digito do octal
    }

    // Impressão do número octal
    printf("Representação octal: ");
    for (int j = i - 1; j >= 0; j--)
    {
        // imprimindo de tras pra frente
        printf("%d", octal[j]); // saida
    }
    printf("\n");

    return 0;
}
