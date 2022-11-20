#include <stdio.h>

int main (){

    int baris, kolom, a, b, hasil;
    scanf("%d %d", &baris, &kolom);
    int angka[baris][kolom];
    for (a = 0; a < baris; a++ ){ 
        for (b = 0; b < kolom; b++ ){
            scanf("%d", &hasil);
            angka[a][b] = hasil;
        }
    }
    for (a = 0; a < baris; a++ ){ 
        for (b = 0; b < kolom; b++ ){
            printf("%d ", angka[a][b]);
        }
        printf("\n");
    }    
}