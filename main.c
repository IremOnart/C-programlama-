#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct kitap {
    char ad[50];
    int basimyili;
    char yazar[10];
    float fiyat;
}kitapdizisi[5] = {{"masumiyetmuzasi",1980,"orhan pamuk",23.5 },
 {"kar",1985,"orhan pamuk",27.65},
 {"sefiller",1890,"victor hugo",50.75},
 {"ask",2005,"elif safak",32},
 {"mavigozyasi",2002,"ahmet gunbay yildiz",19.5}};


int main()
{
    char kitapadi[20];
    char cevap1 = 'E',cevap2;
    int sayac1=0,sayac2=1;
    float toplam=0;


    while(cevap1=='E'){


        printf("almak istediginiz kitabi yaziniz...");
    scanf("%s",kitapadi);
   for(int i=0;i<5;i++){
        if(strcmp(kitapadi,kitapdizisi[i].ad)==0){
            printf("kitap bulundu...\n");
            sayac1++;
        }else{
        sayac2++;}
        if(sayac1==1) break;


    }
     printf("%d \n",sayac2);
     printf("%s %d %s %f\n",kitapdizisi[sayac2-1].ad,kitapdizisi[sayac2-1].basimyili,kitapdizisi[sayac2-1].yazar,kitapdizisi[sayac2-1].fiyat);

     printf("almak istiyor musunuz?...");
     scanf(" %c",&cevap2);

     if(cevap2 == 'E')
    toplam += kitapdizisi[sayac2-1].fiyat;

        printf("almaya devam etmek istiyor musunuz?..");
        scanf(" %c",&cevap1);

       sayac2 = 1;
       sayac1 = 0;

    }

   printf("toplam fiyat : %f dir",toplam);


    return 0;
}

