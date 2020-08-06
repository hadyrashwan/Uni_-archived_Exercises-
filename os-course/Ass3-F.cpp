#include<stdio.h>
int main()
{
 int a[10],n,i,t=0;
 printf("Enter head pointer position:");
 scanf("%d",&a[0]);
 printf("\nEnter number of processes:");
 scanf("%d",&n);
 printf("\nEnter processes in request order");
 for(i=1;i<=n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]<a[i+1])
  {
    t+=(a[i+1]-a[i]);
   printf("\n B :%d",t);
  }
  else{  t+=(a[i]-a[i+1]);
   printf("\n B :%d",t);
   }

 }
 printf("\nProcessing order:");
 for(i=0;i<=n;i++)
 printf("\t%d",a[i]);
 printf("\n  Head Movement:%d",t);
 return 0 ;
}
