#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>	
using namespace std;

float metry;


float ile_cali(float metry_na_cale)
{
	float cale = metry_na_cale * 39.37;
	return cale; 
}
float ile_yardow(float yardy_na_metry)
{
	return yardy_na_metry * 1.0936;
}
void ile_mil(float metry_na_mile)
{
	cout << metry <<" metrow to:" << metry_na_mile * 1.609 << " mil"<<endl;
}
int main()
{
	cout << "wprowadz wartosc w metrach, a ja dokonam konwersji: ";
	cin >> metry;
	cout << " wybierz na jaka wartosc chcesz zamienic metry: 1 - cale 2 - yardy 3 - mile : ";
	int wybor;
	cin >> wybor;  //tutaj zastosowany zostal wybor if,else if. Mazna by takze zastosowac switch
	if (wybor == 1)
	{
		ile_cali(metry);
		cout << metry << " metrow to: " << ile_cali(metry) << " cali" << endl;
	}
	else if (wybor == 2)
	{
		ile_yardow(metry);
		cout << metry << " yardow to: " << ile_yardow(metry) << " yardow" << endl;
	}
	else if (wybor == 3)
	{
		ile_mil(metry);
	}	
	return 0;
}