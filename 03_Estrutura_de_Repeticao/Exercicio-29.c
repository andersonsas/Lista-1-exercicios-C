/*
    Sabe-se que um número da forma n³ é igual a soma de n ímpares consecutivos. Exemplo:
    1³ = 1
    2³ = 3 + 5
    3³ = 7 + 9 + 11
    4³ = 13 + 15 + 17 + 19
    Construa um algoritmo que dado N, determine os ímpares consecutivos cuja soma é igual a
    n3, considerando valores de 1 a n.
*/

#include <stdio.h>

int main() //
{
    int n, S = 0; // variaveis
    int proximo = 0;
    int contador = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int n3 = n * n * n;

    printf("Os numeros impares consecutivos cuja soma é igual a n³ são: \n");
    for (int i = 1; i <= n; i++) // n1 n2 n3
    {
        printf("%d^3 --> ", i);
        for (int j = 1; i < n3; j += 2) // inicial
        {
            if (proximo == 1) {
                proximo = 0; 
                break;
            }

            for (int k = j; k < n3; k += 2) {
                S += k;     // soma os impares
                contador++; // conta quantos numeros foram somados
                if (S == i * i * i) {
                    printf(" ");
                    for (int p = j; p < j + 2 * contador; p += 2) {
                        printf("%d ", p); // imprime os numeros somados
                    }
                    printf(" = %d \n", i * i * i); // imprime o resultado da soma
                    S = 0;
                    contador = 0;
                    proximo = 1;
                    break;
                }
                else if (S > n3) {
                    S = 0;
                    contador = 0;
                    break;
                }
            }
        }
    }

    return 0;
}