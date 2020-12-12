/*
  check each charecter and the next if it same counter++ 
*/

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int N , i , counter = 0;
    string a ;

    cin >> N ;

    cin >> a ;
    i = 0 ;
    while( a[i] != '\0')
    {
        if(a[i] == a[i+1])
        {
            counter++;
        }
        i++ ;
    }

    cout << counter <<endl;
return 0 ;
}


