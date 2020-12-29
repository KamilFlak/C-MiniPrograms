#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main (int nNumberofArgs, char* pszArgs[])
{
    int celsius;
    cout<<"Wprowadz temperature w stopniach celsjusza :";
    cin>>celsius;
    int factor;
    factor = 212-32;
    int fahrenheit;
    fahrenheit = factor *celsius/100+32;
    cout<<"wartosc w stopniach fahrenheita to:";
    cout<< fahrenheit<<endl;
    cout<< "Nacisnij Enter, aby kontynuowac..."<<endl;
    cin.ignore(10,'\n');
    cin.get();
    return 0;
}
