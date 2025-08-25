/*
    Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor referente ao
    pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido.
*/

#include <stdio.h>

int main()
{
    // Variáveis.
    float p1, p2, p3, p4, p5;
    float nota, total = 0, troco = 0;

    // Solicitações
    printf("\vDigite os cincos valores de produtos separados por um espaço\nou insire um de cada: \n");
    scanf("%f%f%f%f%f", &p1, &p2, &p3, &p4, &p5);

    printf("Digite o valor de entrada no caixa para o pagamento: ");
    scanf("%f", &nota);

    // Processando
    total = p1 + p2 + p3 + p4 + p5;
    troco = nota - total;

    // Saída
    printf("O troco será de %.2f\n\n", troco);

    return 0;
}