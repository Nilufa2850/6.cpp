/*Define a c++ function to sort a string in ascending or descending order 
depending on bool type argument (true for ascending and false for descending). 
Use default argument to implement it.*/

#include<iostream>
using namespace std ;

void sort(char [] , bool=true) ;

void sort(char a[] , bool x)
{
    int i , j ;
    char t ;

    if (x==true)
    {
        cout<<"\nIn Ascending order\n" ;
        for (i=0 ; a[i] ; i++)
            for (j=i+1 ; a[j] ; j++)

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
        for (i=0 ; a[i] ; i++)
            for (j=i+1 ; a[j] ; j++)
                if (a[i]<a[j])
                {
                    t = a[i] ;
                    a[i] = a[j] ;
                    a[j] = t ;
                }
    }

    for (i=0 ; a[i] ; i++)
        cout<<a[i]<<" " ;

    cout<<endl ;
}

int main ()
{
    char str[50] ;
    cout<<"Enter a string  : " ;
    cin.getline(str , 50) ;

    sort(str, false) ;
    return 0 ;


}
