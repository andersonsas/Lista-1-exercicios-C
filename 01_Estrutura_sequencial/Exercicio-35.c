/*
    Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de 
    25% na diária. Sendo informados, através do teclado, o número de apartamentos do hotel e o valor da 
    diária por apartamento para o final de semana completo, elabore um programa para calcular: 
    • Valor promocional da diária; 
    • Valor total a ser arrecadado caso a ocupação neste final de semana atinja 100%; 
    • Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%; 
    • Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%.
*/

#include <stdio.h>

int main() {
    //variáveis
    int num_apartamentos;
    float valor_diaria, valor_promocional;
    float valor_total_100, valor_total_70, perda_promocao;

    //entradas de dados
    printf("Digite o numero de apartamentos do hotel: ");
    scanf("%d", &num_apartamentos);

    printf("Digite o valor da diaria por apartamento (final de semana completo): R$ ");
    scanf("%f", &valor_diaria);

    //calculando
    valor_promocional = valor_diaria * 0.75;  // 25% de desconto
    valor_total_100 = valor_promocional * num_apartamentos;
    valor_total_70 = valor_total_100 * 0.7;
    perda_promocao = (valor_diaria * num_apartamentos) - valor_total_100;

    // saída
    printf("Valor promocional da diaria: R$ %.2f\n", valor_promocional);
    printf("Valor total com 100%% de ocupacao: R$ %.2f\n", valor_total_100);
    printf("Valor total com 70%% de ocupacao: R$ %.2f\n", valor_total_70);
    printf("Valor perdido devido a promocao (100%% ocupacao): R$ %.2f\n", perda_promocao);

    return 0;
}
