/*
    Fazer um programa que leia um conjunto de dados contendo o sexo e a altura de 50 pessoas.
    Escreva a altura média das mulheres.
*/

#include <stdio.h>

int main()
{
    // variaveis
    char sexo;
    float altura, media = 0;
    int quantidade_pessoa = 50;
    // variveis auxiliar
    float somatorio = 0;
    int contator = 0;

    // exibindo instrucao
    printf("Digite o SEXO e a ALTURA da pessoa.\n");
    printf("Exemplo: F 25 M 24.\n");
    for (int i = 0; i < quantidade_pessoa; i++)
    {   // lendo dados
        scanf(" %c %f", &sexo, &altura);

        // sexo F, buscar media
        if (sexo == 'F' || sexo == 'f')
        {
            somatorio += altura;
            contator++;
        }
    }

    if (contator > 0) // verificando se houve contagem
    {
        media = somatorio / contator;                       // calculando
        printf("A altura media das mulheres: %.2f", media); // saida
    }
    else
    {
        printf("Nenhuma mulher foi cadastrada"); // saida
    }

    return 0;
}