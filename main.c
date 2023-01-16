#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bakiye=1000;
    printf("Bakiyeniz 1000 TL");
    printf("******ISLEMLER********\n");
    printf("1. para cekme\n");
    printf("2. para yatirma\n");
    printf("3. para bakiye sorgulama\n");
    printf("4. kart iade\n");
    int islem;
    printf("isleminizi seciniz:");
    scanf("%d",&islem);
    switch(islem)
    {
        case 1:
            printf("bakiyeniz %d\n",bakiye);
            printf("cekmek istediginiz tutari giriniz:");
            int cekme,yenibakiye;
            scanf("%d",&cekme);
            printf("%d - %d = %d\n",bakiye,cekme,bakiye-cekme);
            yenibakiye=bakiye-cekme;
            printf("Yeni Bakiyeniz:%d",yenibakiye);
            break;
        case 2:
            printf("bakiyeniz %d\n",bakiye);
            printf("yatirmak istediginiz tutari giriniz:");
            int yatirma,yenibakiye2;
            scanf("%d",&yatirma);
            printf("%d + %d = %d\n",bakiye,yatirma,bakiye+yatirma);
            yenibakiye2=bakiye+yatirma;
            printf("Yeni Bakiyeniz:%d\n",yenibakiye2);
            break;
        case 3:
            printf("bakiyeniz 1000 Tl");
            break;
        case 4:
            printf("kart iade ediliyor");
    }
    return 0;
}
