#include <stdio.h>

int main() {

    int n, i, j, somaAcima;

    printf("Qual e a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    somaAcima = 0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            somaAcima = somaAcima + mat[i][j];
        }
    }

    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d\n", somaAcima);

    return 0;

}
