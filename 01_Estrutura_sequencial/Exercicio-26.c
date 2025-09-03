/*
    Um sistema de equações lineares da forma ax + by = c, pode ser resolvido utilizando-se as
    seguintes fórmulas: y = (af-cd)/(ae-bd) , x = (ce-bf)/(ae-bd).
    Faça um algoritmo para ler os coeficientes (a,b,c,d,e,f) das equações e calcular
    e exibir os valores de x e y.
*/
#include <stdio.h>

int main()
{
    // declarando variaveis
    float a, b, c, d, e, f;
    float x = 0, y = 0;
    // solicitando entrada
    printf("\nInforme de \"a\": ");
    scanf("%f", &a);
    printf("Informe de \"b\": ");
    scanf("%f", &b);
    printf("Informe de \"c\": ");
    scanf("%f", &c);
    printf("Informe de \"d\": ");
    scanf("%f", &d);
    printf("Informe de \"e\": ");
    scanf("%f", &e);
    printf("Informe de \"f\": ");
    scanf("%f", &f);
    // processando
    y = (a * f - c * d) / (a * e - b * d);
    x = (c * e - b * f) / (a * e - b * d);
    // exibindo resultado
    printf("\nvalor de x = %.2f", x);
    printf("\nvalor de x = %.2f\n\n", x);

    return 0;
}
