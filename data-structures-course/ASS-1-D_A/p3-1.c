#include <stdio.h>


void insertionSort(int a[], int size)
{
// Precondition: a is an array with subscripts ranging from 0 to size-1
// Postcondition: array a is sorted

    int current; /* here we’ll store the element to be inserted */
    int scanned; /* index for inner “moving” loop */
    int o ;
    int i;
    for ( i = 1; i < size; i++)
    {

        current = a[i]; /* element to be inserted */

        /* moving array elements up to free space */

        for (scanned = i - 1; scanned >= 0 && current > a[scanned];scanned --)

            a[scanned + 1] = a[scanned];

        /* inserting the element into its right place */

        a [scanned + 1] = current;
        for(o=0; o<size; o++)
        {
            printf("%d ",a[o]);
        }
        printf("\n");

    } /* for i */
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
    insertionSort(a,size) ;
    return 0;
}
