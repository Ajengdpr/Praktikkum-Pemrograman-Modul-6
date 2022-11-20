#include <stdio.h>

int main()
{
    int baris, baris2, a, nilai, hasil;
    scanf("%d %d", &baris, &baris2);
    int angka[baris], angka2[baris2];
    if (baris == baris2) {
    for (a = 0; a < baris; a++ ){ 
        scanf("%d", &nilai);
        angka[a] = nilai;
    }
    for (a = 0; a < baris2; a++ ){ 
        scanf("%d", &nilai);
        angka2[a] = nilai;
        }
    for (a = 0; a < baris; a++ ){ 
        hasil = angka[a] * angka2[a];
        printf("%d ", hasil) ;
        }
    }
    else {
        printf("Jumlah tidak sama");
    }
}