#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>

#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;

int main()
{
    AMAI;

    char a[] = {'q' , 'w' , 'e' , 'r', 't' , 'y' , 'u' , 'i' , 'o' , 'p' , 'a' , 's','d','f','g','h','j','k','l' , ';' , 'z' ,'x','c','v' , 'b','n','m',',' ,'.','/'};
    char choice ;

    cin >> choice ;
    int shift ;
    if(choice == 'R')
    {
        shift = -1 ;
    }
    else if(choice == 'L')
    {
        shift = 1 ;
    }

    string word ;

    cin >> word ;

    int i = 0 , j ;

    while(word[i] != '\0')
    {
        for(j = 0 ; j < 30 ; j++)
        {
            if(a[j] == word[i])
            {
                cout << a[j + shift];
            }
        }

        i++ ;
    }
   // cout << "SGIFT =" << shift <<endl;
    cout << endl;


return 0 ;
}


