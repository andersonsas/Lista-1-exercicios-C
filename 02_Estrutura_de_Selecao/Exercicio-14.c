/*
    Faça um programa que receba o código correspondente ao cargo de um funcionário e
    imprima seu cargo e o percentual de aumento ao qual este funcionário tem direito seguindo
    a tabela:

    Código  Cargo           Percentual
    1       Escriturário    50,00%
    2       Secretário      35,00%
    3       Caixa           20,00%
    4       Gerente         10,00%
    5       Diretor         Não tem aumento
*/

#include <stdio.h>

int main() {
    // variaveis
    int codigo;
    float percentual;

    // solicitando dados
    printf("Digite o codigo do cargo do funcionario: ");
    scanf("%d", &codigo);

    // processando casos
    switch (codigo) {
        case 1:
            printf("Cargo: Escriturario\n");
            percentual = 50.0;
            break;
        case 2:
            printf("Cargo: Secretario\n");
            percentual = 35.0;
            break;
        case 3:
            printf("Cargo: Caixa\n");
            percentual = 20.0;
            break;
        case 4:
            printf("Cargo: Gerente\n");
            percentual = 10.0;
            break;
        case 5:
            printf("Cargo: Diretor\n");
            printf("Nao tem aumento\n");
            return 0; // Encerrar programa
        default:
            printf("Codigo invalido\n");
            return 0; // Encerrar programa
    }

    // imprimindo a saida
    printf("Percentual de aumento: %.2f%%\n", percentual);

    return 0;
}
