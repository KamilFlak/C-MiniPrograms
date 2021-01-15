#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    string jeden = "Ala ma";
    transform(jeden.begin(), jeden.end(), jeden.begin(), ::toupper);
    string dwa = " kota";
    string trzy = jeden + dwa;
    trzy.insert(11, " beboka");
    cout << trzy<<endl;
    trzy.replace(4, 2, "nie ma");
    cout << trzy << endl;
    trzy.erase(1, 4);
    cout << trzy << endl;
    return 0;

}


 