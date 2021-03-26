#include <stdio.h>
int main()
{

    int A, B, C, D, L;
    float tesouro[7];
    int i;
    int tesourototal;

    scanf(" %d", &A);
    scanf(" %d", &B);
    scanf(" %d", &C);
    scanf(" %d", &D);
    scanf(" %d", &L);

    tesouro[0] = A + C; // A
    tesouro[1] = A + D;
    tesouro[2] = A + C + D;
    tesouro[3] = A + C + B + D;
    tesouro[4] = B + D;
    tesouro[5] = B + C;
    tesouro[6] = B + C + D;

    tesourototal = 0;

    // VERIFICANDO QUAL O MELHOR CAMINHO
    for (i = 0; i <= 6; i++)
    {
        if (tesouro[i] <= L && tesouro[i] >= tesourototal && L > 0)
        {
            tesourototal = tesouro[i];
        }
    }
    if (tesourototal != 0)
    {

        if (tesourototal > 0)
        {
            printf("Tesouro: %d.\n", tesourototal);
        }
        else
        {
            printf("O limite de carga foi excedido");
        }

        if (tesourototal == tesouro[0])
        {
            printf("Caminho: 1, 3, F. \n ");
        }
        if (tesourototal == tesouro[1])
        {
            printf("Caminho: 1, 4, F. \n ");
        }
        if (tesourototal == tesouro[2])
        {
            printf("Caminho: 1, 3, 4, F.\n ");
        }
        if (tesourototal == tesouro[3])
        {
            printf("Caminho: 1, 3, 2, 4, F.\n ");
        }
        if (tesourototal == tesouro[4])
        {
            printf("Caminho: 2, 4, F.\n ");
        }
        if (tesourototal == tesouro[5] && tesourototal != tesouro[1])
        {
            printf("Caminho: 2, 3, F.\n ");
        }
        if (tesourototal == tesouro[6])
        {
            printf("Caminho: 2, 3, 4, F.\n ");
        }
    }
    else
    {
        printf("Tesouro: 0.\nCaminho: F.\n ");
    }

    return 0;
}
