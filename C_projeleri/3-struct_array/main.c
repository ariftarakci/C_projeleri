#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct kargoBilgileri{
    char il[10];
    char ilce[10];
    char mahalle[10];
    char apartman[10];
    int kat;
    int daire;
    };
    struct kargoBilgileri kargo_bilgileri[2];
    for (int i =0 ; i<2 ; i++){
        printf("adres %d : \n\n",(i+1));
        printf("ilinizi giriniz\n");
        scanf("%s",&(kargo_bilgileri[i].il));
        printf("ilcenizi giriniz\n");
        scanf("%s",&(kargo_bilgileri[i].ilce));
        printf("mahallenizi giriniz\n");
        scanf("%s",&(kargo_bilgileri[i].mahalle));
        printf("apartmaninizi giriniz\n");
        scanf("%s",&(kargo_bilgileri[i].apartman));
        printf("katinizi giriniz\n");
        scanf("%d",&(kargo_bilgileri[i].kat));
        printf("dairenizi giriniz\n\n");
        scanf("%d",&(kargo_bilgileri[i].daire));
    }
    for (int j =0 ; j<2 ; j++){
        printf("il ismi : %s\n",(kargo_bilgileri[j].il));
        printf("ilce ismi : %s\n",(kargo_bilgileri[j].ilce));
        printf("mahalle ismi : %s\n",(kargo_bilgileri[j].mahalle));
        printf("apartman ismi : %s\n",(kargo_bilgileri[j].apartman));
        printf("bulundugu kat : %d\n",(kargo_bilgileri[j].kat));
        printf("bulundugu daire : %d\n",(kargo_bilgileri[j].daire));

}
return 0;
}
