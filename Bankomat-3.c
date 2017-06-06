#include <stdio.h>
#include <stdlib.h>



int main(){

//    int NeurKontostand;
    int Kontostand;
    int GeldEinzahlen;
    int GeldAbheben;
    int Handyaufladen;
    int b;
    int c;

    printf("Wilkommen bei der Bank Second Edition.\n");

do{

printf("Geben Sie ihren Kontostand ein!\n");
scanf("%d",&Kontostand);

}
while(Kontostand<0);

anfang:

printf("Was mochten sie tun?\n");
printf("1: Ihren Kontostand abfragen.\n");
printf("2: Geld einzahlen.\n");
printf("3: Geld abheben.\n");
printf("4: Handy aufladen.\n");


scanf("%d",&b);

int GeldEinzahlenInput(){

    printf("Wie viel mochten sie einzahlen?\n");
    scanf("%d",&GeldEinzahlen);
    printf("Ihr neuer Kontostand ist %d Euro\n\n",GeldEinzahlen + Kontostand);
    int NeuerKontostand = GeldEinzahlen + Kontostand;
    NeuerKontostand = &Kontostand;
    return 0;
}

switch (b)
{

case 1:
    printf("Sie haben %d euro auf ihrem Konto!\n\n",Kontostand);
    goto anfang;



case 2:
    GeldEinzahlenInput();
    goto anfang;
case 3:
    printf("Wie viel Geld mochten sie abheben?\n");
    scanf("%d",&GeldAbheben);
    printf("Sie haben %d euro abgehoben und jetzt ist ihr Kontostand: %d Euro\n\n",GeldAbheben,Kontostand-GeldAbheben);
    goto anfang;

case 4:
    printf("Wie viel mochten Sie auf ihr Hnady aufladen?\n");
    scanf("%d",&Handyaufladen);
    printf("Sie haben %d euro auf ihr Handy aufgeladen.\n",Handyaufladen);
    printf("Ihr momentaner Kontostand ist %d Euro\n\n",Kontostand-Handyaufladen);
    goto anfang;

default:
    printf("Sie haben eine Flasche eingabe gemacht!\n");

return 0;

}
}

