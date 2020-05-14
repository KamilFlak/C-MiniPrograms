#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int czytajTablice(int tablicaInt[], int maxElementow);
int sumujTablice(int tablicaInt[], int liczbaElementow);
void wyswietlTablice(int tablicaInt[], int liczbaElementow);

int main()
{
    cout<<"Ten program sumuje wprowadzone\n"
    <<"przez uzytkownika wartosci\n"
    <<"Zakoncz petle wprowadajac liczbe ujemna"<<endl;
    
    int wartosciWejsciowe[128];
    int liczbaWartosci = czytajTablice(wartosciWejsciowe, 5);
    wyswietlTablice(wartosciWejsciowe, liczbaWartosci);
    sumujTablice(wartosciWejsciowe, liczbaWartosci);
    cout<<"Suma wartosci wynosi "<<sumujTablice(wartosciWejsciowe,liczbaWartosci)<<endl;
    cin.ignore(10,'\n');
    cin.get();
    return 0;
}

int czytajTablice(int tablicaInt[], int maxElementow)
{
    int liczbaWartosci;
    for (liczbaWartosci=0; liczbaWartosci<maxElementow; liczbaWartosci++)
    {
        int wartoscInt;
        cout<<"wprowadz nastepna liczbe "<<endl;
        cin>>wartoscInt;
        if (wartoscInt<0)
        {
            break;
        }
        tablicaInt[liczbaWartosci]=wartoscInt;
    }
    return liczbaWartosci;
}
void wyswietlTablice(int tablicaInt[], int liczbaElementow)
{
    cout<<"Wartosci przechowywane w tablicy: "<<endl;
    for (int i = 0; i<liczbaElementow; i++)
    {
        cout<<i<<": "<<tablicaInt[i]<<endl;
    }
    cout<<endl;
}
int sumujTablice(int tablicaInt[], int liczbaElementow)
{
    int akumulator =0;
    for (int i = 0; i<liczbaElementow ;i++)
    {
        akumulator += tablicaInt[i];
        
    }
    return akumulator;
}
