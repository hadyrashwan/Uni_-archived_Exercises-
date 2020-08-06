#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
void bubbleSort (int a[ ], int sze)
{
    int sorted =0;
    int scanned;
    int o ;
    /* Each iteration is one sort pass */
    int i ;
    for( i = 0; i < sze && !sorted; i++){
        sorted = 1;

    for(scanned = sze; scanned >i; scanned--)
        if ( a[scanned ] > a[scanned - 1 ] )
        {

            /* Any exchange means a is not sorted */
           // printf("this is sorted array dasd \n");
            sorted = 0;
            swap(a[scanned], a[scanned-1]);
           // printf("%5d \n ",a[scanned]);
        } /* if */
    }
    printf("this is sorted array : \n");
    for(o=0; o<sze+1; o++)
    {
        printf("%5d",a[o]);
        printf("\n");
    }
}

int main(void)
{
     int size = 11 ;
    int a[11]= {12,34,5,78,4,56,10,23,1,45,65} ;
    bubbleSort(a,size) ;
    return 0;
}
