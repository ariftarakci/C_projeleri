#include <stdio.h>
#include <stdlib.h>
#include "sayi_islemleri.h"

int eleman;
int tus;

int main()
{
    printf("dizi eleman sayisini giriniz: \n");
    scanf("%d",&eleman);
    int dizi[eleman];
    printf("dizi elemanlarini giriniz :\n");
    for(int i=0; i<eleman; i++)
    {
        scanf("%d",&dizi[i]);
    }
    printf("en buyuk eleman icin 1 i, en kucuk eleman icin 2 yi tuslayiniz.\n");
    scanf("%d",&tus);
    sayi_bul(tus,eleman,dizi);
    return 0;
}
