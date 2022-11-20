#include <stdio.h>
#include <string.h>

int main()
{
    int a, b;
    char kode1[50], kode2[50];
    printf(""); gets(kode1);
    printf(""); gets(kode2);
    int kata1=strlen(kode1), kata2=strlen(kode2);
    if(kata1 != kata2){
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    else{
        int a=0, b=0 ;
        for (int c=0; c<kata1; c++){
            if (kode2[c]==' ' && kode1[c]==' '){
                continue;
            }
            else if(kode1[c] != kode2[c]){
                printf("#");
                a++;
            }
            else if(kode1[c] == kode2[c]){
                printf("*");
                b++;
            }
        }
        printf("\n*= %d", b);
        printf("\n#= %d", a);
        if (b >= a){
            printf("\nPesan Asli");}
        else{
            printf("\nPesan Palsu");}
    }
}