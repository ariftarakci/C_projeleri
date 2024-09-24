#ifndef SWITCH_FONKSIYONU_H_INCLUDED
#define SWITCH_FONKSIYONU_H_INCLUDED

void sayi_bulma()
{
switch(int durum)
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
#endif // SWITCH_FONKSIYONU_H_INCLUDED
