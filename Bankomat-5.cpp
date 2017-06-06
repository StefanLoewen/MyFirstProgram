#include <iostream>
#include <stdlib.h>

using namespace std;

int kontostand[10];
char handynummer[11];
int kontonummer[10];

int multiplikation(int a, int b){

    int c;
    c=a*b;
    return c;
}

int devision(int a, int b){

    int c;
    c=a/b;
    return c;
}

int summe(int a, int b){

    int c;
    c=a+b;
    return c;
}

int minus1(int a, int b){

    int c;
    c=a-b;
    return c;
}

int kursabfrage(){

    int rubeln = 1;
    int euro = 60;
    int dollar = 55;
    int eingabe;
    int ergebnis;

    cout<<"1: узнать курс евро" <<endl;
    cout<<"2: узнать курс доллара" <<endl;
    cout<<"3: Узнать сколько у вас на счету Евро"<<endl;
    cout<<"4: Узнать сколько у вас на счету Долларов"<<endl;
    cin>>eingabe;
    cout<<endl;

    if (eingabe==1)
    {
        cout<<"Евро = "<< multiplikation(rubeln, euro)<<endl;

    }

    if (eingabe==2)
    {

        cout<<"Доллар = "<<multiplikation(rubeln, dollar)<<endl<<endl;
    }
    if (eingabe==3)
    {
            ergebnis=*kontostand*euro;
            cout<<"У вас на Счету "<<ergebnis<< " Евро"<<endl;
            return ergebnis;
    }
    if (eingabe==4)
    {
            ergebnis=*kontostand*dollar;
            cout<<"У вас на Счету "<<ergebnis<< " Долларов"<<endl;
            return ergebnis;
    }
    else{

    return 0;
    }
}

int bankoperation(){

    int eingabe;
    int eingabe2;
    int ergebnis;

    cout<<"1: Узнать сколько на счету"<<endl;
    cout<<"2: Пополнить счет"<<endl;
    cout<<"3: Снять денег"<<endl;
    cout<<"4: Перевод денег на другой Счет"<<endl;
    cout<<"10: Выход"<<endl;
    cin>>eingabe;

    if (eingabe==1)
{
    cout<<"У вас на счету "<<*kontostand<<endl;

}
    if (eingabe==2){
    cout<<"Сколько вы хотите положить на счет?"<<endl;
    cin>>eingabe2;
    ergebnis=*kontostand+eingabe2;
    cout<<ergebnis<<endl;
    return *kontostand=ergebnis;

    }
    if(eingabe==3)
    {

    cout<<"Сколько вы хотите снять?"<<endl;
    cin>>eingabe2;
    ergebnis=*kontostand-eingabe2;
    cout<<ergebnis<<endl;
    return *kontostand=ergebnis;

    }

    if(eingabe==4)
    {

    cout<<"Задайте номер целевого Счета: ";
    cin>>*kontonummer;
    cout<<endl;
    cout<<"Сколько денежных средст вы хотите перевесьти?: ";
    cin>>eingabe2;
    cout<<endl;
    cout<<"Вы перевели на Счет под номером "<<*kontonummer<<" "<<eingabe2<<" рублей!"<<endl;

    ergebnis=*kontostand-eingabe2;
    return *kontostand=ergebnis;

    }

    if(eingabe=10)
    {
    return 0;
    }
    }

int handyaufladen(){
    int eingabe;
    int eingabe2;


    cout<<"1: Узнать свой номер мобильного телефона"<<endl;
    cout<<"2: Пополнить счет мобильного телефона"<<endl;
    cout<<"3: Выход"<<endl;
    cin>>eingabe;

    if(eingabe==1)
    {
        cout<<"Ваш мобильный номер: "<<handynummer<<endl;

        return 0;
    }
    if(eingabe==2)
    {
        int a;
        cout<<"Сколько вы хотите положить на номер вашего мобильного?"<<endl;
        cin>>eingabe2;
        a=*kontostand-eingabe2;
        return *kontostand=a;
    }
    if(eingabe==3)
    {
        cout<<"Выход"<<endl;
        return 0;
    }


}

int main()
{

    int eingabe;

    cout<<"Банкомат версия 6.0 на С++"<<endl;

    cout<<"Задайте свой номер мобильного телефона: "<<endl;
    cin>>handynummer;

    cout<<"Задайте сколько у вас денежных средств на счету: "<<endl;
    cin>>*kontostand;

    while(1){
    cout<<"1: Узнать курс валюты"<<endl;

    cout<<"2: Провесьти банковскую операцию"<<endl;

    cout<<"3: Провесьти операцию с мобилным устройством"<<endl;

    cout<<"4: Выход"<<endl;

    cin>>eingabe;

    switch(eingabe)
{

    case 1:
    kursabfrage();
    continue;

    case 2:
    bankoperation();
    continue;

    case 3:
    handyaufladen();
    continue;

    case 4:
    exit(0);
    }
  return 0;
}
}








