/*
    count number of 1 2 and 3 in the string 
    
    put them in vecter arrray accordingly by for loop
    
    then print out the vector array .
    
*/

#include<bits/stdc++.h>
#include<vector>
using namespace std ;

int main()
{
    string a   ;
    int one = 0 , two = 0 , three =0 , i ;
    vector<int> ans ;
    cin >> a;

    i = 0 ;
    while (a[i] != '\0')
    {
        if(a[i] == '1')
            one++;
        else if(a[i] == '2')
            two++ ;
        else if(a[i] == '3')
            three++;
        i++;
    }

    for(i = 1 ; i<= one ; i++)
    {
        ans.push_back(1);
    }

    for(i = 1 ; i<= two ; i++)
    {
        ans.push_back(2);
    }

    for(i = 1 ; i<= three ; i++)
    {
        ans.push_back(3);
    }

    for(i = 0 ; i< ans.size() ; i++)
    {
        cout << ans[i];
        if(i != (ans.size() -1) )
            cout << '+';
    }
return 0 ;

}
