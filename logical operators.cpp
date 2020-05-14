#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;

int main (int nNumberfArgs, char* pszArgs[])
{
    //ustaw format wyjsciowy na szesnastkowy
    
    cout.unsetf(cout.dec);
    cout.setf(cout.hex);
    //zainicjuj dwa argumenty
    int nArg1 = 0x78ABCDEF;
    int nArg2 = 0x12345678;
    //teraz wykonuj kazda operacje po koleji
    //najpierw jednoargumentowy operator NOT
    cout << " nArg1 = 0x" << nArg1 <<endl;
    cout << " ~nArg1 = 0x" << ~nArg1 << "\n" <<endl;
    cout << " nArg2 = 0x" << nArg2 <<endl;
    cout << " ~nArg2 = 0x" << ~nArg2 << "\n" <<endl;
    //teraz operator binarny
    cout<< " 0x" << nArg1 << "\n"
    << "&0x" << nArg2 << "\n"
    << "__________" << "\n"
    << " 0x" << (nArg1 & nArg2) << "\n"
    << endl;
    cout<< " 0x" << nArg1 << "\n"
    << "|0x" << nArg2 << "\n"
    << "__________" << "\n"
    << " 0x" << (nArg1 & nArg2) << "\n"
    << endl;
    cout<< " 0x" << nArg1 << "\n"
    << "^0x" << nArg2 << "\n"
    << "__________" << "\n"
    << " 0x" << (nArg1 & nArg2) << "\n"
    << endl;
    //aby pozwolic uzytkownikowi zobaczyc wyniki programu
    //poczekaj az uzytkownik nacisnie klawisz przed zakonczeniem programu
    cout << "Nacisnij enter aby kontynuowac... " << endl;
    cin.ignore(10,'\n');
    cin.get();
    return 0;
}
