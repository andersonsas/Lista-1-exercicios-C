/*
    Escrever um algoritmo que recebe dois números inteiros positivos, e determine o produto
    dos mesmos, utilizando o seguinte método de multiplicação:
    1. Dividir, sucessivamente , o primeiro número por 2, até que se obtenha 1 como quociente;
    2. Paralelamente, dobrar, sucessivamente, o segundo número;
    3. Somar os números da segunda coluna que tenham um número ímpar na primeira coluna.
       O total obtido é o produto procurado.
    4. Exemplo:
                    9 x 6
                9           6
                4           12
                2           24
                1           48
*/

#include <stdio.h>

int main()
{
    // variaveis
    int a, b, resultado = 0;
    // entrada de dados
    printf("Digite 2 numeros inteiros positivos: ");
    scanf("%d%d", &a, &b);
    // processando
    while (a >= 1)
    {
        if (a % 2 != 0)
        {
            resultado += b; // Soma apenas quando o número dividido é ímpar
        }

        a = a / 2;
        b = b * 2;
    }
    // saida
    printf("Produto calculado pelo método: %d\n", resultado);

    return 0;
}