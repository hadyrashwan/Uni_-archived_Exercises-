#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int getMin(const int a[], int index, int size)
{

    int smallest = index;
    int i ;

    for (i = index+1; i < size; i++ )
    {

        if(a[i] > a[smallest])

            smallest = i;

    }

    return smallest;

}
void selectionSort (int a[ ], int size )
{
    int smallest;
    int i,o ;
    for ( i = 0; i < size; i++ )
    {

        /* Find the smallest element in the unsorted part */

        smallest = getMin(a, i, size);

        if(smallest != i)

            swap(a[i], a[smallest]);

    }
   printf("this is sorted array : \n");
    for(o=0; o<size; o++)
    {
        printf("%5d",a[o]);
        printf("\n");
    }

}
int main(void)
{
    int size = 11 ;
   int a[11]= {12,34,5,78,4,56,10,23,1,45,65} ;
    selectionSort(a,size) ;
    return 0;
}
