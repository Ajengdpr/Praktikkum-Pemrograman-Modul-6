#include <stdio.h>

int main (void)
{
    int mat1[10][10],mat2[10][10], hasil[10][10];
    int i, j, x, y, jumlah = 0;
    scanf("%i", &y);
    printf("Matriks A\n");
    for (i = 0; i < y; i++){
        for(j = 0; j < y; j++){
            scanf("%i", &mat1[i][j]);
        }
    }
    printf("Matriks B\n");
    for (i = 0; i < y; i++){
        for(j = 0; j < y; j++){
            scanf("%i", &mat2[i][j]);
        }
    }
    for (i = 0; i < y; i++){
        for(j = 0; j < y; j++){
            for(x = 0; x < y; x++){
                jumlah = jumlah + mat1[i][x]*mat2[x][j];}
                hasil[i][j] = jumlah;
                jumlah = 0;}}
                printf("Matriks AXB\n");
                for (i = 0; i < y; i++){
                    for(j = 0; j < y; j++){
                        printf(" %i ", hasil[i][j]);}
                        printf("\n");}
}