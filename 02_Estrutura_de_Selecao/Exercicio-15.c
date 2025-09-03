/*
    Faça um programa que mostre um menu com as seguintes opções:
    • soma
    • raiz quadrada
    • finalizar
    O programa deve receber a opção desejada, receber os dados necessários para a
    operação de cada opção, realizar a operação e imprimir o resultado. Na opção
    finalizar nada deve acontecer.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // variaveis
    int opcao;
    float num1, num2, resultado;

    // apresentando menu e recebendo entrada
    printf("Menu:\n");
    printf("1 - Soma\n");
    printf("2 - Raiz Quadrada\n");
    printf("3 - Finalizar\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    // processando menu e suas saídas
    switch (opcao)
    {
    case 1: // Soma
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        resultado = num1 + num2;
        printf("Resultado da soma: %.2f\n", resultado);
        break;
    case 2: // Raiz quadrada
        printf("Digite o numero: ");
        scanf("%f", &num1);
        if (num1 < 0)
        {
            printf("Nao e possivel calcular raiz quadrada de numero negativo.\n");
        }
        else
        {
            resultado = sqrt(num1);
            printf("Raiz quadrada: %.2f\n", resultado);
        }
        break;
    case 3: // Finalizar
        // Nada a fazer
        break;
    default:
        printf("Opcao invalida.\n");
        break;
    }

    return 0;
}