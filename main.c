#include <stdio.h>


int main()
{

       int N, linha, coluna;
       double somaposi;

       printf("Qual a ordem da matriz? ");
       scanf("%d", &N);

       double mat[N][N];

       for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                 printf("Elemento [%d, %d]: ", i, j);
                 scanf("%lf", &mat[i][j]);
            }
        }

        somaposi = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (mat[i][j] > 0) {
                    somaposi = somaposi + mat[i][j];
                }
            }
        }

        printf("\nSOMA DOS POSITIVOS: %.1lf \n", somaposi);

        printf("\n");
        printf("Escolha uma linha: ");
        scanf("%d", &linha);

        printf("LINHA ESCOLHIDA: ");
        for (int j = 0; j < N; j++) {
             printf("%.1lf  ", mat[linha][j]);
        }

        printf("\n");
        printf("\nEscolha uma coluna: ");
        scanf("%d", &coluna);

        printf("COLUNA ESCOLHIDA: ");
        for (int i = 0; i < N; i++) {
             printf("%.1lf  ", mat[i][coluna]);
        }

       printf("\n");
       printf("\nDIAGONAL PRINCIPAL: ");
       for (int i = 0; i < N; i++) {
            printf("%.1lf  ", mat[i][i]);
       }

       printf("\n");
       for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                 if (mat[i][j] < 0) {
                    mat[i][j] = mat[i][j] * mat[i][j];
                 }
            }
       }

       printf("\nMATRIZ ALTERADA: \n");

       for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                 printf("%.1lf  ", mat[i][j]);
            }
            printf("\n");
       }


    return 0;
}
