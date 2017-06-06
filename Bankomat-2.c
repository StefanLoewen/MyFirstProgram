#include <stdio.h>
#include <stdlib.h>




int main()

{
    int a=1000;
    int kontostand[]={a};

    int abgehobenes;
    int eingabeGeldabheben;
    int auswahl;
    int eingabeGeldeinzahlen;
    char telefonnummer [10];


    printf("Willkommen\n");
    printf("Wallen sie bitte zwieschen\n\n");
    printf("1: Geld abheben\n");
    printf("2: Geld einzahlen\n");
    printf("3: Handy aufladen\n");
    printf("4: Kontostand prufen\n");


    scanf("%d",&auswahl);



    if (auswahl<2){



        printf("Sie haben das Geld abheben gewallt!\n");
        printf("Wie viel mochten sie abheben?\n");

        scanf("%d",&eingabeGeldabheben);

        printf("Sie haben %d euro bekommen\n", eingabeGeldabheben);

        int abgehobenes= (kontostand[0] - eingabeGeldabheben);

        printf("Ihr Kontostand ist %d euro\n", abgehobenes);

        int kontostand=5;
    }
     else if (auswahl<3){
        printf("Sie haben das Geld einzahlen gewallt!\n");
        printf("Wie viel mochten sie einzahlen?\n");

        scanf("%d",&eingabeGeldeinzahlen);

        printf("Sie haben %d euro eingezahlt\n",eingabeGeldeinzahlen);
    }
     else if(auswahl<4){
        printf("Sie haben das Handy aufladen gewallt!\n");
        printf("Wie viel mochten sie einzahlen?\n");

        scanf("%d",&eingabeGeldeinzahlen);
        printf("Auf welche Telefonnummer mochten sie Geld einzahlen?\n");

        scanf("%s",&telefonnummer);

        printf("Sie haben %d euro auf die Nummer: %s eingezahlt\n",eingabeGeldeinzahlen, &telefonnummer);
    }
     else if(auswahl<5){
        printf("Sie mochten ihren Kontostand wissen!\n");
        printf("Ihr Kontostand ist %d euro!\n",kontostand[0]);
    }

        else {
            printf("Sie haben die falsche zahl eingegeben!\n");
            printf("Versuchen sie es erneuert!\n");
    }




    return 0;
}
