/*
    Qualquer número natural de quatro algarismos pode ser dividido em duas dezenas pelos seus
    dois primeiro e dois últimos dígitos. Exemplo: 1456 : 14 e 56. Construa um algoritmo que
    imprima todos os números de quatro algarismos cuja raiz  quadrada seja a soma das dezenas
    formadas pela divisão acima. Exemplo: raiz de 9801 = 99 = 98 + 01.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Teste dos quatros Algarismo\n");
    // variaveis auxilar
    int dezena_1 = 0, dezena_2 = 0;
    printf("Esses são os números:\n");
    //varrendo no intervalo dos numeros de quatro digitos
    for (int i = 1000; i < 9999; i++)
    {
        dezena_1 = i / 100; // obtendo os dois primeiros digitos
        dezena_2 = i % 100; // obtendo os dois ultimos digitos

        // verificando a raiz quadrada com suas duas dezenas
        if (sqrt(i) == dezena_1 + dezena_2)
        {
            printf(" %d -- ", i); // saida
        }
    }

    return 0;
}