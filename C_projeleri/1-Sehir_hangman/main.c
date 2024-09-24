#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



int cikis=0;
int tahmin_sayac=0;
int tahmin_for;
int mukayese;

int main()
{
    int kontrol;
    int a=0;
    int x,y;
    const char* filmler[] = {"adana", "adiyaman", "agri", "aksaray", "amasya", "ankara", "antalya", "ardahan", "artvin", "aydin", "balikesir", "bartin", "batman", "bayburt",
    "bilecik", "bingol","bitlis","bolu", "burdur", "bursa", "canakkale", "cankiri", "corum", "denizli", "diyarbakir", "duzce", "edirne", "elazig", "erzincan", "erzurum", "eskisehir", "gaziantep",
    "giresun","gumushane","hakkari", "hatay", "igdir", "isparta", "istanbul", "izmir", "kahramanmaras", "karabuk","karaman", "kars", "kastamonu", "kayseri", "kilis", "kirikkale", "kirklareli",
    "kirsehir", "kocaeli", "konya", "kutahya", "malatya", "manisa", "mardin", "mersin", "mugla", "mus", "nevsehir", "nigde", "ordu", "osmaniye", "rize", "sakarya", "samsun", "sanliurfa", "siirt",
    "sinop","sirnak", "sivas", "tekirdag", "tokat", "trabzon", "tunceli", "usak", "van", "yalova", "yozgat", "zonguldak"};
    int durum;
    int hak;
    char secim[1];
    srand(time(NULL));
    durum = rand() % 82;
    size_t length = strlen(filmler[durum]);
    char tahmin[length];
    //printf("%s",filmler[durum]);
    hak = (length+1);
    int sayac=0;
    int dogru=0;
    int yanlis=0;
    int puan=0;
    while(hak>0)
    {
    yanlis=0;
    gotoxy(1,1);
    printf("yanlis : %d   ",sayac);
    gotoxy(20,1);
    printf("boyut : %d\n\n\n",length);
    printf("%d harfli sehir ismi icin harf tahmini yapiniz :\n\ntahmin icin 1'i tuslayiniz.",length);
        for(int i=0; i<length;i++)
    {
        y=10;
        x=30+(10*i);
        gotoxy(x,y);
        printf("___  ");
    }
    gotoxy(40,1);
    printf("Kalan hak = %d",hak);
    gotoxy(60,1);
    printf("Puan = %d",puan);
    gotoxy(1, 20);
    printf("Olmayan harfler : ");
    gotoxy(50,4);
    scanf(" %c",&secim[0]);
    if(secim[0]=='1')
    {
        gotoxy(1,25);
        printf("tahmin giriniz : ");
        for(tahmin_for=0; tahmin_for<length; tahmin_for++)
        {
        scanf(" %c",&tahmin[tahmin_for]);
        }
        for(mukayese=0; mukayese<length; mukayese++)
        {
            if(tahmin[mukayese]==filmler[durum][mukayese])
            {
                tahmin_sayac++;
            }
        }
        if(tahmin_for==length)
        {
            if(tahmin_sayac==length)
            {
                puan=(hak*3);
                gotoxy(60,1);
                printf("Puan = %d",puan);
                gotoxy(45,12);
                printf("Tebrikler dogru bildiniz !\n");
                for(int i=0;i<=length;i++)
                    {
                        x = 30+(10*i);
                        y = 9;
                        gotoxy(x,y);
                        printf(" %c ",filmler[durum][i]);
                    }
                     exit(0);
            }
            else
            {
                gotoxy(45,12);
                printf("Yanlis bildiniz ! dogru cevap :");
                    for(int i=0;i<=length;i++)
                    {
                    printf(" %c ",filmler[durum][i]);
                    }
                    exit(0);
                }
        }
    }
    else if(secim[0]!='1')
    {
    for(int i=0; i<length; i++)
        {
        if(filmler[durum][i]== secim[0])
            {
            x = 30+(10*i);
            y = 9;
            gotoxy(x,y);
            printf("%c",filmler[durum][i]);
            //puan = puan+2;
            dogru++;
            hak--;
            if(dogru==length)
                {
                gotoxy(45,12);
                printf("Tebrikler kazandiniz !\n\n");
                exit(0);
                }
            }

        else if(filmler[durum][i]!= secim[0])
            {
            yanlis++;
            if(yanlis==length)
                {
                yanlis=0;
                sayac++;
                hak--;
                a++;
                x=20+(a*5);
                y = 20;
                gotoxy(x,y);
                printf(" - %c - ",secim[0]);
                }
            }
        }
        if(hak==0)
                    {
                    char bitis[1];
                    gotoxy(45,12);
                    printf("Tahmin icin 1'i ; cikmak icin 2'yi tuslayiniz.\n");
                    scanf(" %c",&bitis[0]);
                        if(bitis[0]=='1')
                        {
                            gotoxy(1,25);
                            printf("tahmin giriniz : ");
                            for(tahmin_for=0; tahmin_for<length; tahmin_for++)
                            {
                            scanf(" %c",&tahmin[tahmin_for]);
                            }
                            for(mukayese=0; mukayese<length; mukayese++)
                            {
                                if(tahmin[mukayese]==filmler[durum][mukayese])
                                {
                                    tahmin_sayac++;
                                }
                            printf("tahmin : %c\n",tahmin[mukayese]);
                            printf("film : %c\n",filmler[durum][mukayese]);
                            }
                            printf("tahmin_for = %d\n",tahmin_for);
                            printf("tahmin sayac = %d",tahmin_sayac);
                            if(tahmin_for==length)
                            {
                                if(tahmin_sayac==length)
                                {
                                    puan=(hak*3);
                                    gotoxy(60,1);
                                    printf("Puan = %d",puan);
                                    gotoxy(45,12);
                                    printf("Tebrikler dogru bildiniz !\n");
                                    for(int i=0;i<=length;i++)
                                        {
                                            x = 30+(10*i);
                                            y = 9;
                                            gotoxy(x,y);
                                            printf(" %c ",filmler[durum][i]);
                                        }
                                         exit(0);
                                }
                                else
                                {
                                    gotoxy(45,12);
                                    printf("Yanlis bildiniz ! dogru cevap :");
                                        for(int i=0;i<=length;i++)
                                        {
                                        printf(" %c ",filmler[durum][i]);
                                        }
                                        exit(0);
                                }
                            }
                        }
                        else
                        {
                           printf("Kaybettiniz !\n");
                            printf("Dogru cevap : ");
                            for(int i=0;i<length;i++)
                            {
                            printf(" %c ",filmler[durum][i]);
                            }
                            exit(0);
                        }
                    }//hak = 0
    }
    }
    return 0;
}
