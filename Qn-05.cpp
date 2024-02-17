/*Define a c++ function to calculate HCF of two numbers. */

#include<iostream>
using namespace std ;

void prime_factors(int n)
{
    int i , j ;

    for (i=2 ; i<=n ; i++)
    {
        if (n%i==0) // Check factors = i ;
        {
            for (j=2 ; j<i ; j++)
            {
                if (i%j==0)
                    break ;
            }
            if (j==i)
                cout<<i<<", " ;
        }
    }
}
int main ()
{
    int num ;
    cout<<"Enter a number : " ;
    cin>>num ;

    prime_factors(num) ;
    return 0 ;
}
