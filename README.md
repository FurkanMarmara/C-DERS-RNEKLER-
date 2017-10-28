#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
main()
{
    int rastgelesayilar;
    int yuzlerbas;
    int onlarbas;
    int onlarbas1;
    int birlerbas;
    int rakamlartoplami;
    int enbuyuk=0;
    int enbuyukrakamlartoplami;

    srand(time(NULL));

    for(int i=0;i<6;i++)
    {
        rastgelesayilar=100+rand()%900;
        printf("%d",rastgelesayilar);
        yuzlerbas=rastgelesayilar/100;
        birlerbas=rastgelesayilar%10;
        onlarbas=rastgelesayilar%100;
        onlarbas1=onlarbas/10;
        printf("\n");
        rakamlartoplami=onlarbas1+birlerbas+yuzlerbas;

        if(rastgelesayilar>enbuyuk &&rakamlartoplami%2==0)
        {
            enbuyuk=rastgelesayilar;
            enbuyukrakamlartoplami=rakamlartoplami;
        }
    }
    printf("Enbuyuksayi : %d",enbuyuk);
    printf("     ");
    printf("rakamlartoplami : %d",enbuyukrakamlartoplami);


    getch();
}
