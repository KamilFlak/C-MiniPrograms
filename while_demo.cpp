#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;
int main()

{
    //defining a variable
    int nLoopCount;
    //wyswietlanie numeru zmiennej czyli liczby petli
    cout<<"Put number of loop:"<<endl;
    cin>>nLoopCount;
    //definicja petli
    while (nLoopCount > 0)
        //then
    {
        
        nLoopCount=nLoopCount-1;
        if ((nLoopCount-1)>0)
        {
        cout<< "Nr of loop:" <<nLoopCount <<" Until loops remain ... " << nLoopCount - 1<<endl;
        }
        else
        {
        cout<< "Nr of loop:" <<nLoopCount <<" Until loops remain ... 0"<<endl;
        }
    }
    //stop the program by pressing the enter key

    cout<< "press enter to continue"<<endl;
    cin.ignore(10,'\n');
    cin.get();
    return 0;
}
