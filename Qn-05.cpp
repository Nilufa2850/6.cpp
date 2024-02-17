/*Define a c++ function to print all the prime factors of a given numbers.
For example num=36 , prime factors are 2, 3 */

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
