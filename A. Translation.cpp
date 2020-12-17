#include<stdio.h>
#include<string.h>
using namespace std ;

int main()
{
    char s[1010],t[1000];
  unsigned long long  int i,c=0,j,k,l1,l2;
    gets(s);
    gets(t);
    l1=strlen(s);
    l2=strlen(t);
   // cout <<l1 << " " <<l2<<endl;
    if(l1 != l2)
    {
        printf("NO\n");
        return 0 ;
    }

    if(l1==l2)
    {
        i = 0 ;
        j = l1 -1 ;
        while( 1 )
        {
           // cout << "s i "<<i<<" " << s[i] <<endl;
           // cout << "t j "<< j <<" "<< t[j] <<endl ;

            if(s[i] != t[j])
            {
                printf("NO\n");
                return 0 ;
            }

            if(i == l1-1 && j == 0)
            {
                break;
            }
            i++;
            j--;

        }
        printf("YES\n");

    }
    return 0;
}

