/*
    Faça um algoritmo que receba dois números reais
    calcule e imprima a subtração do primeiro número pelo segundo.
*/
#include <stdio.h>

int main(){
    //Criando variáveis
    float num1, num2, subtracao = 0;
    
    //Solicita ao usuário que digite dois números reais    
    printf("Digite o primeiro número inteiro:\n");
    scanf("%f", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%f", &num2);

    //Calcula a diferenca
    subtracao = num1 - num2;

    //Imprime o resultado
    printf("A subtração de %f por %f é igual a: %f", num1, num2, subtracao);
    return 0;
}