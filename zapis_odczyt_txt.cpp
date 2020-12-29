#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <fstream>

using namespace std;
string imie, nazwisko;
int nr_tel;
//int main()
//{
//    cout<<"podaj imie:  "<<endl;
//    cin>>imie;
//    cout<<"podaj nazwisko:  "<<endl;
//   cin>>nazwisko;
//   cout<<"podaj nr_tel:  "<<endl;
//   cin>>nr_tel;
//   fstream plik;
    
//   plik.open("wizytowka.txt", ios::out | ios::app);
//   plik<<imie<<endl;
//   plik<<nazwisko<<endl;
//   plik<<nr_tel<<endl;
//   plik.close();
//   return 0;
//}
int main()
{
    fstream plik;
       
    plik.open("/Users/kamilflak/Desktop/wizytowka.txt", ios::in);
    if(plik.good()==false)
    {
        cout<<"Plik nie istnieje!";
        exit (0);
    }
    string linia;
    int nr_linii=1;
    while(getline(plik,linia))
    {
        switch(nr_linii)
        {
            case 1:imie = linia; break;
            case 2:nazwisko = linia; break;
            case 3:nr_tel=atoi(linia.c_str()); break;
        }
        nr_linii++;
    }
    cout<<imie<<endl;
    cout<<nazwisko<<endl;
    cout<<nr_tel<<endl;
    plik.close();
    return 0;
    
}



