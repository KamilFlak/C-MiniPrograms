#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
int number;
int board[128];
    
for (int i=0; i<128; i++)
{
    cout<<"Wprowadz liczbe do tablicy"<<endl;
    cin>>number;
    if(number<0)
    {
        break;
    }
    board[i]=number;
    cout<<board[i]<<endl;
}
    return 0;
}
