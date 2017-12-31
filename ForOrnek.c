#include <stdio.h>
#include <conioh.h>
main()
{
char isim[50];
printf("İsminizi giriniz : ");
scanf("%s",isim);
for(int i=0;i<40;i++)
{
  printf("%s",isim);
}
getch();
//BU ORNEKTE GİRDİGİMİZ İSMİ 40 KERE YAZDIRIYOR...
}
