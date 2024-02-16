/*Define a c++ function to sort an array of integers in ascending or descending order 
depending on bool type argument (true for ascending and false for descending). 
Use default argument to implement it.*/

#include<iostream>
using namespace std ;

void sort(int [] , int , bool=true) ;

void sort(int a[] , int n , bool x)
{
    int i , j , t ;

    if (x==true)
    {
        cout<<"\nIn Ascending order\n" ;
        for (i=0 ; i<=n-2 ; i++)
            for (j=i+1 ; j<=n-1 ; j++)
                if (a[i]>a[j])
                {
                    t = a[i] ;
                    a[i] = a[j] ;
                    a[j] = t ;
                }
    }
    else if (x==false)
    {
        cout<<"\nIn Descending order\n" ;
        for (i=0 ; i<=n-2 ; i++)
            for (j=i+1 ; j<=n-1 ; j++)
                if (a[i]<a[j])
                {
                    t = a[i] ;
                    a[i] = a[j] ;
                    a[j] = t ;
                }
    }

    for (i=0 ; i<n ; i++)
        cout<<a[i]<<" " ;

    cout<<endl ;
}

int main ()
{
    int n ;
    cout<<"Enter size of an array : " ;
    cin>>n ;

    int ary[n] ;
    cout<<"Enter "<<n<<" valus : " ;

    int i ;
    for (i=0 ; i<n ; i++)
        cin>>ary[i] ;

    sort(ary , n ) ;
    return 0 ;


}
