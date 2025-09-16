/*
    Fazer um programa que leia a nota final de 50 alunos e escreva:
        a) o total de reprovados;
        b) a nota média da turma;
        c) a menor e maior nota da turma;
    É considerado aprovado o aluno com nota final maior ou igual a 6.
*/

#include <stdio.h>

int main()
{
    // variáveis
    float nota, media = 0, maior = 0, menor = 0;
    int reprovados = 0;

    // processa os 50 alunos
    for (int i = 1; i <= 50; i++) {
        printf("Nota final do aluno [%d]: ", i);
        scanf("%f", &nota); // solicita a nota do aluno

        if (nota < 0 || nota > 10) {
            printf("Nota inválida. Digite um valor entre 0 e 10.\n");
            i--; // repete o mesmo aluno
            continue;
        }

        if (nota < 6) reprovados++; // conta a quantidade de reprovados

        if (nota > maior) maior = nota; // atualiza o maior récorde
        if (nota < menor || menor == 0) menor = nota; // atualiza o menor récorde 

        media = ((i - 1) * media + nota) / i; // calcula a média.
    }

    // saída de dados
    printf("\nMÉDIA DA TURMA: %.2f\n", media);
    printf("TOTAL DE REPROVADOS: %d\n", reprovados);
    printf("--MAIOR NOTA: %.2f\n", maior);
    printf("--MENOR NOTA: %.2f\n", menor);

    return 0;
}