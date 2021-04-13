#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int T ;
    cin >> T ;
    string word ;
 
 
    while(T--)
    {
        cin >> word ;
        if(word.size() <= 10)
        {
            cout << word<<endl;
        }
 
        else
        {
            cout << word[0];
            cout << word.size() - 2 ;
            cout << word[word.size() - 1 ];
 
            cout << endl;
        }
 
 
    }
    return 0 ;
}
