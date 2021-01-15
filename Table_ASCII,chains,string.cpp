#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main()
{
    string imie ;
    cout << "Podaj imie" << endl;
    cin >> imie ;
    int dlugosc = imie.length();
    if (imie[dlugosc - 1] == 'a')
        cout << "wydaje mi sie ze jestes kobieta" << endl;
    else
        cout << "wydaje mi sie ze jestes facetem" << endl;

    
    return 0;

}


