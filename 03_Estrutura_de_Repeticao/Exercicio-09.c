/*
    Fazer um programa que leia a nota final de 50 alunos e escreva o total de aprovados. É
    considerado aprovado o aluno com nota final maior ou igual a 6.
*/

#include <stdio.h>

int main()
{
    // variavel
    float nf_aluno;
    int total_alunos = 50;
    // variaveis auxiliar
    int contador = 0; // contator de aprovados

    // processando a cada entrada
    for (int i = 0; i < total_alunos; i++)
    {
        printf("Nota final do aluno %d: ", i + 1); // entrada
        scanf("%f", &nf_aluno);

        nf_aluno >= 6 ? contador++ : contador; // quantificando os nota 6 ou mais
    }

    // exibindo a saida
    printf("A quantidade de aprovados é de %d alunos", contador);

    return 0;
}