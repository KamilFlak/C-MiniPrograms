#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;
void wyswietlWyjasnienie(void)
{
    cout<<"Ten program sumuje wiele ciagow liczb.\n"
    <<"Zakoncz kazda sekwencje wprowadzajac\n"
    <<"liczbe ujemna. Zakoncz ciag, \n"
    <<"wprowadzajac pusta sekwencje\n"
    <<endl;
    return;
}

int sumujSekwencje()
{
    int akumulator = 0;
    for (;;)
    {
        
        int nWartosc = 0;
        cout<<"Wprowadz nastepna liczbe: ";
        cin >> nWartosc;
        akumulator += nWartosc;

        cout<<"Warotsc wprowadzonych liczb to: "<< akumulator<< endl;
        if (nWartosc <0)
        {
            break;
        }

    }
        return akumulator;
}
int main()
{
    wyswietlWyjasnienie();
    for (;;)
    {
        cout<< "Wprowadz kolejna sekwencje"<<endl;
        int zsumowanaWartosc = sumujSekwencje();
        if (zsumowanaWartosc == 0)
        {
            break;
        }
        cout <<"Suma wynosi "<< zsumowanaWartosc
        <<endl <<endl;
    }
    cout <<"Nacisnij Enter, aby kontynuowac ... " << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
    
}
