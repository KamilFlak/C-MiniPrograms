#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int nLiczbaPetli;

    cout<<"wprowadz liczbe petli"<<endl;
    cin>>nLiczbaPetli;

    for (;nLiczbaPetli>0;)
    {
        nLiczbaPetli=nLiczbaPetli-1;
        cout<<"Oto petla nr: "<<nLiczbaPetli+1<<"Pozostało do wykonania petli"<< nLiczbaPetli<<endl;
    }

    cout<<"Press enter to continuer"<<endl;
    cin.ignore(10,'\n');
    cin.get();
    return 0;
}
