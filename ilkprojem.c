#include<stdio.h>
int main(){
    int sayi=0;
    int basamak=1;
    int toplam=0;
    int ters=0;
    int gecici=0;
    int gecici2=0;
    int orijinal=0;

    do{
        printf("Bir sayi giriniz: \n");
        scanf("%d" , &sayi);
    }
    while(sayi<=0);

    gecici=sayi;
    while(gecici>9){
        gecici=gecici/10;
        basamak=basamak+1;
    }
    printf("Basamak:%d |" , basamak);

    orijinal=sayi;
    gecici2=sayi;
    while(gecici2>0){
        toplam+=gecici2%10;
        gecici2=gecici2/10;
    }
    printf("Toplam:%d |" , toplam);

    while(sayi>0){
        ters=ters*10+sayi%10;
        sayi=sayi/10;
    }
    printf("Sayinin Tersi:%d | " , ters);

    if(orijinal==ters){
        printf("palindrom");
    }
    else{
        printf("");
    }

    return 0 ;
}