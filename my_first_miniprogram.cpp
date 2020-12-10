#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

void wyswietlWyjasnienie()
{
    cout<<"Ten program oblicza pola roznych figur.\n"
    <<"Zdecyduj którą figurę wybierasz\n"
    <<"1 - kwadrat \n"
    <<"2 - prostokat \n"
    <<"0 - zakoncz program \n"
    <<endl;
    return;
}

void poleTrapezu()

{
    double a,b,h;
    double p;
    cout<<"PROGRAM DO OBLICZANIA POLA TRAPEZU"<<endl;
    cout<<"wprowadz długość dolnej podstawy a"<<endl;
    cin>>a;
    cout<<"wprowadz długosc górnej podstawy b"<<endl;
    cin>>b;
    cout<<"wprowadz wysokosc h"<<endl;
    cin>>h;
    p=((a+b)*h)/2;
    cout<<"POLE TRAPEZU WYNOSI "<<p<<"cm "<<endl;
    
    return ;
}
void poleProstokata()

{
    double bok1, bok2;
    double sumabok1bok2;
    cout<<"PROGRAM DO OBLICZANIA POLA PROSTOKATA"<<endl;
    cout<<"wprowadz długość boku nr 1"<<endl;
    cin>>bok1;
    cout<<"wprowadz długosc boku nr 2"<<endl;
    cin>>bok2;
    sumabok1bok2 = bok1*bok2;
    cout<<"POLE PROSTOKATA WYNOSI "<<sumabok1bok2<<"cm "<<endl;
    
    return ;
}
int main()
{
    int wybor;
    wyswietlWyjasnienie();
    cin>>wybor;
    switch(wybor)
    {
        case 1:
            poleTrapezu();
        case 2:
            poleProstokata();
        case 0:
            break;
        default:
           {
            cout<<"nie wprowadziles zadnego wyboru"<<endl;
            main();
           }
        
                
    }
    cout <<"Nacisnij Enter, aby kontynuowac ... " << endl;
    cin.ignore(10,'\n');
    cin.get();
    return 0;
}
