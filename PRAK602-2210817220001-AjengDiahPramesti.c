#include <stdio.h>

int main ()
{
    int baris, a, hasil;
    scanf("%d", &baris);
    int angka[baris];
    for (a = 0; a < baris; a++){
        scanf("%d", &hasil);
        angka[a] = hasil;
    }
    for (a = 0; a < baris; a++){ 
        printf("%d ", angka[a] * (a +1));
    }        
}