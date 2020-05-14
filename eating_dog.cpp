//
//  main.cpp
//  Ilosc karmy na psa
//
//  Created by Kamil Flak on 17/02/2020.
//  Copyright © 2020 Kamil Flak. All rights reserved.
//

#include <iostream>

using namespace std;

int pies1, karma, z;
float x, y;
int main()


{
    cout << "psow w schornisku mamy " ;
    cin >> pies1;

    cout << "kazdy pies zje 3 kg karmy " << endl;
    cout << "wprowadz ilosc karmy w kilogramach ";
    cin >> karma;
    x = karma/3;
    cout << "karmy wystarczy dla " << x;
    cout << " psow" << endl ;

    y = pies1*3;

    if (x>=pies1)
    {
        cout << "psy beda mialy pelne brzuszki" << endl;
    }
    z = pies1-x;

    if (x<pies1)
    {
        cout << z;
        cout << " psy beda glodowac" << endl;
    }

    return 0;
}
