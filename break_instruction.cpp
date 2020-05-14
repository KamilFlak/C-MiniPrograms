#include <cstdlib>
#include <iostream>
#include <cstdio>
using namespace std;

int main()


{
    int akumulator = 0;
    cout << "Ten program sumuje wartosci wprowadzone przez uzytkownikow\n";
    cout<<"Zakoncz wprowadzajac liczbe ujemna"
    <<endl;
    //petla nieskonczona
    for(;;)
    {
        //download another number
        int nWartosc = 0;
        cout<<"Wprowadz liczbe: ";
        cin>>nWartosc;
        // if it's negative
        if (nWartosc < 0)
        {
            break;
        }
        // otherwise, add the number to the variable akumulator
        //akumulator += nWartosc it's the same like akumulator = akumulator + nWartosc
        akumulator += nWartosc;
        // oraz wyswietl wynik na ekranie
        cout<<"\nSuma liczb wynosi "<<akumulator<<endl;        

        
    }
   
    
    cout<<"Press enter to continue ... "<<endl;
    
    
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

