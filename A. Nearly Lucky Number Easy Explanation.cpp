/*
  Basically just count number of 4 and 7 in the number 
  
  then check if there are 4 or 7 digits of 4 or 7 
  
  if yes then yes or no
  
*/

#include<bits/stdc++.h>
using namespace std ;

int main()
{
     long long int num , counter = 0;
    cin >> num ;
    //cout << endl;
    while(num > 0)
    {
        if((num % 10 == 7 )||( num %10 == 4))
        {
            counter++;
           // cout << counter <<endl;
        }
      //  cout << num <<endl;
        num = num / 10 ;
    }
    if((counter == 7) || (counter == 4))
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO"<<endl;
    }

  return 0 ;

}



