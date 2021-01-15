#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    string wyraz;
    cout << "Podaj wyraz ktory chcesz odwrocic" << endl;
    cin >> wyraz;
    int dlugosc = wyraz.length();
    int i;
    for (i = dlugosc - 1; i >= 0; i--)
    {
        cout << wyraz[i];
    }
    return 0;
    
}


