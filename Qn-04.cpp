/*Define a c++ function to calculate LCM of three numbers */

#include<iostream>
using namespace std ;

int lcm (int x, int y , int z)
{
    int i ;

    int big = x>y&&x>z?x:y>z?y:z ;

    for (i=big ; i<=x*y*z ; i++)
        if (i%x==0 && i%y==0 && i%z==0)
            return i ;
}
int main ()
{
    int a, b , c ;
    cout<<"Enter three numbers : " ;
    cin>>a>>b>>c ;

    cout<<"LCM is "<<lcm(a,b,c) ;
    return 0 ;
}
