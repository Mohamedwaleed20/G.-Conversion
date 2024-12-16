#include <iostream>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main()
{
    string a ;
    cin >> a ;
    for(int i = 0 ; i < a.size() ; i++)
    {
        if(a[i] == ',')
        {
            cout << " " ;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            cout << (char) (a[i] - 32) ;
        }
         else if (a[i] >= 'A' && a[i] <= 'Z')
        {
             cout << (char) (a[i] + 32) ;
        }
    }


    return 0;
}
