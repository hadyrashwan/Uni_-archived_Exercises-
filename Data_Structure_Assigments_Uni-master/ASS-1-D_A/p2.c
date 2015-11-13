#include<stdio.h>
//void bubble_sort(int [],int);

void bubble_sort(int a[],int n)
{
int i,j,o,t;
    for(i=1;i< n;i++)
    {
         for(j=0;j< n-1;j++)
         if(a[j]>a[j+1])
               {
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
               }
        for(o=0; o<n; o++)
      {
          printf("%d ",a[o]);
      }
      printf("\n");
    }

    printf("this is sorted array : ");
    for(o=0;o<n;o++)
            printf("%5d",a[o]);
            printf("\n");
}
int main()
{
      int size = 11 ;
     int a[11]= {12,34,5,78,4,56,10,23,1,45,65} ;
     bubble_sort(a,size);
     return 0 ;
}
