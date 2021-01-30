#include <stdio.h>
#include <stdlib.h>
char T[8][8];
void ciz(){
    printf(" ");
    for(int i=0;i<8;i++){
        printf("%d ",i);
    }

      printf("\n");
    for(int i=0;i<8;i++){
            printf("%d",i);
        for(int j=0;j<8;j++){
            printf("%c ",T[i][j]);
        }
        printf("\n");
       }


}


void girisIste(){
    char karakter;
    int i,j;



    printf("yazmak istediginiz karakteri giriniz...(S/O)");
    scanf(" %c",&karakter);
    printf("nereye yazmak istiyorsunuz...[?][?]");
    scanf("%d%d",&i,&j);

    if(T[i][j] != '*'){
    printf("dolu alan !! \n");

    printf("yazmak istediginiz karakteri giriniz...(S/O)");
    scanf(" %c",&karakter);
    printf("nereye yazmak istiyorsunuz...[?][?]");
    scanf("%d%d",&i,&j);

    }

    T[i][j] = karakter;

}
int main()
{

    int alan,a;
    char cevap,karakter;

    printf(" ");

    for(int i=1;i<=8;i++){
        printf("%d ",i);
    }
     for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            T[i][j]='*';
        }
       }
      printf("\n");
    for(int i=0;i<8;i++){
            printf("%d",i+1);
        for(int j=0;j<8;j++){
            printf("%c ",T[i][j]);
        }
        printf("\n");
       }

    while(1){

        girisIste();
        ciz();

    }

    return 0;
}
