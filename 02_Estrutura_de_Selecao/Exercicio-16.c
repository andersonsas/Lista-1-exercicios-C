/*
Uma companhia de seguros tem três categorias de seguros baseadas na idade e na
ocupação do segurado. Somente pessoas com pelo menos 18 anos e não mais de 70 anos
podem adquirir apólices de seguros. Quanto às classes de ocupações foram definidos três
grupos de risco. A tabela a seguir fornece as categorias em função da caixa de idade e do
grupo de risco:
                   Grupo de risco
idade       Baixo        Médio            Alto
18 a 24     7              8               9
25 a 40     4              5               6
41 a 70     1              2               3

*/

#include <stdio.h>

int main() {
    // variaveis.
    int idade, codigo = 0;
    char grupo_risco;

    //solicitando dados.
    printf("Digite a idade do segurado: ");
    scanf("%d", &idade);

    //Verificando  de imediado os fora de faixa.
    if (idade < 18 || idade > 70) {
        printf("Idade fora da faixa permitida (18 a 70 anos).\n");
        return 0; // encerra o programa.
    }

    // solicitando informações de grupo
    printf("Digite o grupo de risco (b-Baixo, m-Medio, a-Alto): ");
    scanf(" %c", &grupo_risco);

    // analisando as possibilidades.
    switch (grupo_risco) {
        case 'b':
        case 'B':
            if (idade >= 18 && idade <= 24) codigo = 7;// verificando faixa
            else if (idade >= 25 && idade <= 40) codigo = 4;// verificando  idade
            else codigo = 1;
            break;
        case 'm':
        case 'M':
            if (idade >= 18 && idade <= 24) codigo = 8;//
            else if (idade >= 25 && idade <= 40) codigo = 5;//
            else codigo = 2;
            break;
        case 'a':
        case 'A':
            if (idade >= 18 && idade <= 24) codigo = 9;//
            else if (idade >= 25 && idade <= 40) codigo = 6;//
            else codigo = 3;
            break;
        default:
            printf("Grupo de risco invalido.\n");
            return 0;
    }

    // saida
    printf("Codigo do seguro: %d\n", codigo);

    return 0;
}