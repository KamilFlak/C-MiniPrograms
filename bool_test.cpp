#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
cout.setf(cout.boolalpha);
int nArg1;
cout<<"Wartość wejsciowa 1: ";
cin>>nArg1;

int nArg2;
cout<<"Wartość wejsciowa 2: ";
cin>>nArg2;
    bool b;

b = nArg1 == nArg2;

cout << "Wyrazenie " << nArg1
    << " rowna sie " << nArg2
    << " ma wartosc " << b
    << endl;
cout << " Nacisnij enter aby kontynuowac ... " << endl;

cin.ignore(10, 'n');
cin.get();
return 0;
}
