#include <stdio.h>

// Desafio de Xadrez - MateCheck
void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("moveu-se para direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas)
{
    if (casas > 0)
    {
        printf("moveu-se para cima\n");
        printf("moveu-se para direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("moveu-se para esquerda\n");
        moverTorre(casas - 1);
    }
}
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

    // Movimento cavalo para baixo
    printf("\n----------Movimento cavalo-----------\n");
    contador = 0;
    for (int i = 0; i < 1; i++)
    {
        do
        {
            printf("moveu-se para baixo\n");
            contador++;
        } while (contador < 2);

        printf("moveu-se para esquerda\n");
    }

    printf("\n----------Movimento torre por recursividade-----------\n");
    moverTorre(5);
    printf("\n----------Movimento bispo por recursividade-----------\n");
    moverBispo(5);
    printf("\n----------Movimento rainha por recursividade-----------\n");
    moverRainha(8);

    // Movimento bispo aninhado
    printf("\n----------Movimento bispo aninhado-----------\n");
    contador = 0;
    int i;
    for (int a = 0; a < 5; a++)
    {
        for (i = 0; i < 1; i++)
        {
        while(contador < 1)
        {
            printf("moveu-se para baixo ↓\n");
            contador++;
        };
        printf("moveu-se para esquerda ←\n");
        }
        i=0;
        contador = 0;
    }

    return 0;
}
