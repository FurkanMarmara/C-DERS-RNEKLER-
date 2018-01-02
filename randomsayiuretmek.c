#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
main()
{
  int randomsayi;
  srand(time(NULL));
  randomsayi=1+rand()%99;//1 ile 100 arasında bir sayı ürettik %den sonraki kısım toplama olarak ifade ediliyor ornegin 1+99=100 buda
  //1 ile 100 arasında sayı demek 1 dahil 100 dahil olmuyor.
  printf("%d",randomsayi);
  getch();
}
