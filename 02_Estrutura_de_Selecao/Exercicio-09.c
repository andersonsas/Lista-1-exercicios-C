/*
Faça um programa que receba o preço de um produto e o seu código de orígem e imprima
a sua procedência. A procedência obedece a seguinte tabela:
Código      Procedência
1           Sul
2           Norte
3           Leste
4           Oeste
5 ou 6      Nordeste
7.8 ou 9    Sudeste
10 até 20   Centro-Oeste
21 até 30   Nordeste
*/

#include <stdio.h>

int main()
{
    // declarando variavel
    float preco;
    int codigo;

    // solicitando os dados
    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);

    printf("Digite o codigo de origem do produto: ");
    scanf("%d", &codigo);

    // processando
    switch (codigo)
    {
    case 1: // tratando saidas dos cases de 1 a 9
        printf("Procedencia: Sul\n");
        break;
    case 2:
        printf("Procedencia: Norte\n");
        break;
    case 3:
        printf("Procedencia: Leste\n");
        break;
    case 4:
        printf("Procedencia: Oeste\n");
        break;
    case 5:
    case 6:
        printf("Procedencia: Nordeste\n");
        break;
    case 7:
    case 8:
    case 9:
        printf("Procedencia: Sudeste\n");
        break;
    default: // tratando das saidas dos casos 10 ao 30 e um padrao
        if (codigo >= 10 && codigo <= 20)
        {
            printf("Procedencia: Centro-Oeste\n"); // saida
        }
        else if (codigo >= 21 && codigo <= 30)
        {
            printf("Procedencia: Nordeste\n"); // saida
        }
        else
        {
            printf("Codigo de origem invalido\n"); // saida
        }
        break;
    }

    return 0;
}
