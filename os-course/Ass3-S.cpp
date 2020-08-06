#include<stdio.h>
int main()
{
 int a[10],b[10],d,n,i,j,temp,s,k=0,x=0,t=0;
 printf(" head  position:");
 scanf("%d",&a[0]);
 printf("\n number of processes:");
 scanf("%d",&n);
 printf("\n processes in request order");
 for(i=1;i<=n;i++)
 {
  scanf("%d",&a[i]);
 }
 b[k++]=a[0];
 for(i=0;i<n;i++)
 {
  s=999;
  for(j=i+1;j<=n;j++)
  {
   if(a[i]>a[j])
   d=a[i]-a[j];
   else
   d=a[j]-a[i];
   if(d<s)
   {
    s=d;
    x=j;
   }
  }
  t+=s;
  temp=a[i+1];
  a[i+1]=a[x];
  a[x]=temp;
  b[k++]=a[i+1];
 }
 printf("\nProcessing order:");
 for(i=0;i<=n;i++)
 printf("\t%d",b[i]);
 printf("\nTotal Head Movement:%d",t);
 return 0 ;
}
