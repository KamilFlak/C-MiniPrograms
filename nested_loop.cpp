#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
    cout<<"Ten program sumuje wiele ciagow liczb.\n"
    <<"Zakoncz kazda sekwencje wprowadzajac\n"
    <<"liczbe ujemna. Zakoncz ciag, wpisujac\n"
    <<"dwie liczby ujemne z rzedu\n\n";
    int akumulator;
    int nWartosc;
    for(;;)
    {
        cout<<"bebok w pierwszej petli"<<endl;
        akumulator = 0;
        cout <<"Rozpocznamy nastepna sekwencje\n\n";
        for (;;)
        {
            cout<<"bebok w drugiej petli"<<endl;
            nWartosc = 0;
            cout <<"wprowadz liczbe: ";
            cin >>nWartosc;
            if (nWartosc <0)
            {
                break;
            }
            akumulator = akumulator + nWartosc;
            cout<<"Suma wprowadzonych liczb to: "<<akumulator<<endl;
            
        }
        if (akumulator == 10)
        {
            break;
        }
        cout<<"Suma dla tej sekwencji to "<<akumulator <<endl<<endl;
    }
    cout<<"Press enter to continue "<<endl;
    cin.ignore(10,'\n');
    cin.get();
    return 0;
               
}
