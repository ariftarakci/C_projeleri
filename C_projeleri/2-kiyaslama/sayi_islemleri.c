#include <stdio.h>
#include "sayi_islemleri.h"  // Header dosyasýný dahil ediyoruz

void sayi_bul(int tus, int eleman, int dizi[])
{
    int en_buyuk;
    int en_kucuk;
   switch(tus)
    {
    case 1:
        en_buyuk = dizi[0];
        for(int i=1;i<eleman;i++)
        {
            if(dizi[i]>en_buyuk)
                en_buyuk=dizi[i];
        }
        printf("en buyuk sayi = %d\n",en_buyuk);
        break;
    case 2:
        en_kucuk = dizi[0];
        for(int i=1;i<eleman;i++)
        {
            if(dizi[i]<en_kucuk)
                en_kucuk=dizi[i];
        }
        printf("en kucuk sayi = %d\n",en_kucuk);
        break;
    }
}
