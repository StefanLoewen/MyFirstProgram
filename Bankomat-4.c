#include <stdio.h>
#include <stdlib.h>

int a;
int b;
int Geldeingabe;
int Geldabheben;
int HandyGeldEingabe;
int Massiv[1];
int Kontostand;
int GanzNeuerKontostand;


int KontostandAbfragen(){

printf("Ihr Kontostand ist %d", Massiv[0]);

return 0;
}

int KontostandMitGeldFullen(){

    printf("Wie viel mochten sie auf ihr Konto drauf legen?\n");
    scanf("%d",&Geldeingabe);
    int NeuerKontostand = Massiv[0]+Geldeingabe;
    printf("Sie haben %d auf ihr Konto drauf gelegt und haben nun %d Euro auf ihren Kontostand\n",Geldeingabe,NeuerKontostand);
    NeuerKontostand=Massiv[0];
    return 0;
}

int KontoGeldAbheben(){

    printf("Wie viel mochten sie von ihrem Konto abheben?\n");
    scanf("%d",&Geldabheben);
    int NeuerKontostand = Massiv[0]-Geldabheben;
    printf("Sie haben %d Euro von ihrem Konto abgehoben\n",Geldabheben);
    printf("Sie haben nun %d Euro auf ihrem Konto\n",NeuerKontostand);
    NeuerKontostand=Massiv[0];
    return 0;

}

int HandyAufladen(){

    printf("Wie viel Geld mochten sie auf ihr Handy aufladen?\n");
    scanf("%d",&HandyGeldEingabe);
    int NeuerKontostand = Massiv[0]-HandyGeldEingabe;
    printf("Sie haben %d Euro auf ihr Handy drauf gelegt\n",HandyGeldEingabe);
    printf("Ihr Kontostand ist nun %d Euro\n",NeuerKontostand);
    NeuerKontostand=Massiv[0];
    return 0;

}


int main()
{
    printf("Wilkommen beim vierten versuch einen GeldTerminal zu machen\n");
    anfang:
    printf("\nWahlen sie zwieschen zwei optionen aus:\n\n");
    printf("1: Ihr Kontostand ist nicht leer!\n");
    printf("2: Sie mochten ihren Kontostand selber eingeben\n");

    scanf("%d",&b);

    if (b!=1){

    printf("Bitte geben sie ihren Kontostand ein\n");

    scanf("%d",&Massiv[0]);
    }



    printf("\nWelche der folgenden Operationen moechten sie tun?\n\n");
    printf("1: Ihren Kontostand abfragen\n");
    printf("2: Ihren Kontostand mit Geld fullen\n");
    printf("3: Geld von ihrem Konto abheben\n");
    printf("4: Ihr Handy aufladen\n");


    scanf("%d",&a);

    switch (a){

    case 1:
        KontostandAbfragen();

        goto anfang;
    case 2:
        KontostandMitGeldFullen();
        goto anfang;
    case 3:
        KontoGeldAbheben();
        goto anfang;
    case 4:
        HandyAufladen();
        goto anfang;
    default:

     printf("Sie haben eine flasche eingabe gemacht!!!\n");

    }

    return 0;
}


