/*
  Basically count the number of frequency the letter.... store in an array... then check if digit is odd or even 
*/

#include<iostream>
#include<cstring>

using namespace std ;



int main()
{
    string w1 ;
    int a[26], counter = 0;
    int i ,flag = 0;
    memset(a,0,26* sizeof(int));


    cin >> w1;



    for(i = 0 ; i < w1.size() ; i++ )
    {
        a[w1.at(i) -'a']++;
    }
   ///debugging



    /*for(i = 0 ; i < 26 ; i++)
    {
        cout << a[i];
    }*/


    for(i = 0 ; i < 26 ; i++)
    {
        if(a[i] > 0 )
            counter++;
    }

    if( counter & 1)
    {
        cout <<"IGNORE HIM!"<<endl;
    }

    else
    {
        cout << "CHAT WITH HER!"<<endl;

    }
    return 0 ;
}

