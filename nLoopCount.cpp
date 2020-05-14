#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main ()
{
    int nLiczbaPetli;
    cout<<"Wprowadz liczbe petli" << endl;
    cin >> nLiczbaPetli;
    
    for (int i=1; i<=nLiczbaPetli; i++)
    {
        cout<<"pozostało do wykonania "<< nLiczbaPetli - i <<endl;
    }
    
    
    cout<<"Press enter to contuinue. . . "<<endl;
    cin.ignore(10,'\n');
    cin.get();
    return 0;
}


