/*
    Faça um algoritmo que receba o custo de um espetáculo teatral e o preço do convite esse
    espetáculo. Esse programa deve calcular e mostrar:
        •A quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo
        seja alcançado.
        •A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.
*/

#include <stdio.h>

int main()
{
    // variáveis
    float custo, preco;
    int quantidade, quantidade_23;
    // entradas de dados
    printf("Digite o custo: ");
    scanf("%f", &custo);
    printf("Digite o preço: ");
    scanf("%f", &preco);
    // calculando
    quantidade = custo / preco;
    quantidade_23 = quantidade * 1.23 + 1;
    // saida
    printf("\nO custo do espetáculo é pago com %d convites.", quantidade);
    printf("\nO lucro de 23 %% é alcançada com %d convites.", quantidade_23);

    return 0;
}