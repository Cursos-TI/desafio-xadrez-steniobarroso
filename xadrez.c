#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main()
{

    // Movimento torre 5 casas para direita
    printf("\n----------Movimento torre-----------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("moveu-se para direita\n");
    }
    // Movimento bispo 5 casas para cima e direita
    printf("\n\n----------Movimento Bispo-----------\n");
    int contador = 0;
    while (contador < 5)
    {
        printf("moveu-se para cima\n");
        printf("moveu-se para direita\n");
        contador++;
    }
    printf("\n\n----------Movimento Rainha-----------\n");
    // Movimento rainha 8 casas para esquerda
    contador = 0;
    do
    {
        printf("moveu-se para esquerda\n");
        contador++;
    } while (contador < 8);

    return 0;
}
