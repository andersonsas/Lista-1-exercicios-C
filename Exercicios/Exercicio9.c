/*
    Faça um algoritmo que calcule e imprima a área das seguintes figuras geométricas:
    • triângulo; quadrado; círculo; trapézio; retângulo; losango.
*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    //Variaveis
    float base, altura, lado, raio, baseMaior, baseMenor, alturaTRP, baseRTG, alturaRTG, diagonal1, diagonal2;
    float areaTriangulo, areaQuadrado, areaCirculo, areaTrapezio, areaRetangulo, areaLosango;

    //solicitando informações do triangulo
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
    
    //as do quadrado
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    
    //as do circulo
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    
    //as do trapézio
    printf("Digite a base maior do trapezio: ");
    scanf("%f", &baseMaior);
    printf("Digite a base menor do trapezio: ");
    scanf("%f", &baseMenor);
    printf("Digite a altura do trapezio: ");
    scanf("%f", &alturaTRP);
    
    //as do retângulo
    printf("Digite a base do retangulo: ");
    scanf("%f", &baseRTG);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &alturaRTG);
    
    //as do lozango
    printf("Digite a diagonal maior do losango: ");
    scanf("%f", &diagonal1);
    printf("Digite a diagonal menor do losango: ");
    scanf("%f", &diagonal2);
    
    //Calculando as áreas das respectivas figuras solicitadas
    areaTriangulo = (base * altura) / 2;
    areaQuadrado = lado * lado;
    areaCirculo = PI * raio * raio;
    areaTrapezio = ((baseMaior + baseMenor) * alturaTRP) / 2;
    areaRetangulo = baseRTG * alturaRTG;
    areaLosango = (diagonal1 * diagonal2) / 2;

    // Imprimindo resultados
    printf("\nÁreas das figuras:\n");
    printf("\tTriângulo: %.2f\n", areaTriangulo);
    printf("\tQuadrado: %.2f\n", areaQuadrado);
    printf("\tCírculo: %.2f\n", areaCirculo);
    printf("\tTrapézio: %.2f\n", areaTrapezio);
    printf("\tRetângulo: %.2f\n", areaRetangulo);
    printf("\tLosango: %.2f\n\n", areaLosango);

    return 0;
}