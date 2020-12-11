/*
  bascally print out n letter of string 
  where there are k letter of substring 
*/

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int T , i , j , n , k ;

    cin >> T ;
    for(i = 1 ; i <=T ; i++)
    {
        int counter = 1 ;
        string c1 = "a" , c2 = "b" , c3 = "c" , temp ;

        cin >> n >>k ;
       for(j = 1 ; j<= n ; j++ ,counter++ )
       {
           cout << c1 ;

           if(counter == k )
           {
               temp = c1;
               c1 = c2 ;
               c2 = c3 ;
               c3 = temp;
               counter = 0 ;
           }

       }

        cout << endl ;
    }
    return 0 ;
}
