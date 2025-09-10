/*
    Dizemos que dois números são amigos se cada um deles é igual a soma dos divisores
    próprios do outro. Os divisores próprios de um número positivo N são todos os divisores
    inteiros positivos de N exceto o próprio N.
    Um exemplo de números amigos são 284 e 220, pois os divisores próprios de 220 são
    1, 2, 4, 5 , 10, 11, 20, 22, 44, 55 e 110. Efetuando a soma destes números obtemos o
    resultado 284.
    1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
    Os divisores próprios de 284 são 1, 2, 4, 71 e 142, efetuando-se a soma deste
    números obtemos o resultado 220.
    1 + 2 + 4 + 71 + 142 = 220
*/

#include <stdio.h>

int main()
{
    // variaveis
    int num1, num2;
    int soma1 = 0, soma2 = 0;

    // solicitando dados
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Soma dos divisores próprios de num1
    for (int i = 1; i < num1; i++)
    {
        if (num1 % i == 0)
        {
            soma1 += i;
        }
    }

    // Soma dos divisores próprios de num2
    for (int i = 1; i < num2; i++)
    {
        if (num2 % i == 0)
        {
            soma2 += i;
        }
    }

    // Verifica se são amigos
    if (soma1 == num2 && soma2 == num1)
    {
        printf("%d e %d são números amigos!\n", num1, num2); // Saida
    }
    else
    {
        printf("%d e %d não são números amigos.\n", num1, num2); // Saida
    }

    return 0;
}
