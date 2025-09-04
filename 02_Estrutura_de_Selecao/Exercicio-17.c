/*
    Faça um programa que receba a medida de um ângulo em graus, um número inteiro.
    Determine e imprima o quadrante em que se localiza este ângulo. Considere os quadrantes
    abaixo:

    Ângulo      Quadrante
    0 |__       90 1o quadrante
    90 |__      180 2o quadrante
    180 |__     270 3o quadrante
    270 |__     360 4o quadrante
    0 __        -90 1o quadrante
    -90 |__     -180 2o quadrante
    -180 |__    -270 3o quadrante
    -270 |__|   -360 4o quadrante

    Para ângulos maiores que 360 graus, reduza ao intervalo de 0 a 360.
*/

#include <stdio.h>

int main() {
    //declarando variaveis
    int angulo, angulo_norm, quadrante;
    //solicitando dados
    printf("Digite o angulo em graus: ");
    scanf("%d", &angulo);

    // Normaliza o angulo para [0,360)
    angulo_norm = angulo % 360;
    if (angulo_norm < 0) {
        angulo_norm += 360;
    }
    // processando os angulos
    if (angulo_norm >= 0 && angulo_norm < 90)
        quadrante = 1;
    else if (angulo_norm >= 90 && angulo_norm < 180)
        quadrante = 2;
    else if (angulo_norm >= 180 && angulo_norm < 270)
        quadrante = 3;
    else
        quadrante = 4;
    //saida
    printf("Angulo: %d graus\n", angulo);
    printf("Quadrante: %d\n", quadrante);

    return 0;
}
