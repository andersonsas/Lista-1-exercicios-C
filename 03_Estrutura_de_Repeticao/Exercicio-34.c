/*
    Dados três valores a, b e c, calcular e imprimir a média harmônica destes valores:
    média harmônica =
                                    1
                        -----------------------------
                            (1/a) + (1/b) + (1/c)
*/

#include <stdio.h>

int main() {
    // variáveis
    float entrada[3];
    float inverso = 0, resultado = 0;

    for (int i = 0; i < 3; i++) {
        // solicita dados
        printf("Digite valor %c: ", 'A' + i);
        scanf("%f", &entrada[i]);

        if(entrada[i] == 0){
            printf("Valor inserido igual zero");
            return 0;
        }

        // acumulador
        inverso += 1 / entrada[i];
    }

    // calcula
    resultado = 1 / inverso;

    // exibe o resultado
    printf("\nResultado: %.3f", resultado);

    return 0;
}