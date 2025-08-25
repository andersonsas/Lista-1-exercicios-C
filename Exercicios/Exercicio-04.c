/*
    Faça um algoritmo que receba três notas de um aluno,
    calcule e imprima a média aritmética entre essas notas.
*/
#include <stdio.h>

int main(){
    //Criando variáveis
    float nota1, nota2, nota3; float media = 0;
    
    //Inserção das notas do aluno    
    printf("Digite a primeiro nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    //Calcula a soma
    media = (nota1 + nota2 + nota3) / 3;

    //Imprime o resultado
    printf("A media do aluno é %f" , media);

    return 0;
}