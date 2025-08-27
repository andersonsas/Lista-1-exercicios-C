/*
    Uma determinada pessoa que trabalha com construção de piscinas precisa de um programa que
    calcule o valor das construções solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
    o comprimento, a largura e a profundidade da piscina a ser construída. Leve em consideração que o
    valor da construção é cobrado por m3 de água que a piscina conterá e o preço é de R$ 45.00 por m3.
*/

#include <stdio.h>

int main()
{
    // Variaveis
    float comprimento, largura, profundidade;
    float volume = 0, preco = 0, preco_cubico = 45;

    // Entrada de dados
    printf("\vInforme, na seguinte ordem,\n o comprimeiro, largura e a profundidade da piscina: ");
    scanf("%f%f%f", &comprimento, &largura, &profundidade);

    volume = comprimento * largura * profundidade;
    preco = volume * preco_cubico;

    // Saída
    printf("O preço da piscina sairá de %.2f reais\n\n", preco);
    return 0;
}