/*
    No momento, por conta da administração pública péssima e da corrupção em todos os setores
    estatais, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um
    algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o
    desconto foi de 9%.
*/

#include <stdio.h>

int main()
{
    float valor_nominal;
    float valor_novo = 0;
    int desconto = 9;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_nominal);

    valor_novo = (1 - (float)desconto / 100) * valor_nominal;

    printf("\nO preço do produto com desconto de %.d %% é de %.2f reais.\n\n", desconto, valor_novo);
    return 0;
}