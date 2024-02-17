/*Define a c++ function to rotate an array by n positions in the d direction ,
implement postion and direction using default arguments , argumnet d can be -1 
or 1 denoting left or right direction , argument n should be the last argument
with default value 1. */

#include<iostream>
using namespace std ;

void rotate (int [] , int , int=-1 , int=1) ;

void rotate (int a[] , int size , int d , int n )
{
    int i ;
    int position  , temp ;

    if (d==1)
    {
        cout<<"Rotate in Right direction"<<endl ;
        for(position=1 ; position<=n ; position++) 
        {
            temp = a[0] ;
            for (i=0 ; i<=size-2 ; i++)
            {
                a[i] = a[i+1] ;
            }
            a[size-1] = temp ; 
        }
    }
    else if (d==-1)
    {
        cout<<"Rotate in Left direction"<<endl ;
        for(position=1 ; position<=n ; position++) 
        {
            temp = a[size-1] ;
            for (i=0 ; i<=size-2 ; i++)
            {
                a[size-1-i] = a[size-2-i] ;
            }
            a[0] = temp ; 
        }
    }

    for (i=0 ; i<=size-1 ; i++)
        cout<<a[i]<<" " ;
    cout<<endl ;

}
int main ()
{
    int n ;
    cout<<"Enter array size : " ;
    cin>>n ;

    int b[n] ;
    cout<<"Enter array values" ;

    int i ;
    for(i=0 ; i<=n-1 ; i++)
        cin>>b[i] ;

    rotate(b , n , 1 , 3) ;
}
