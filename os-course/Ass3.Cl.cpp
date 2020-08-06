#include<stdio.h>
int  main()
{
int a[10],b[10],n,i,j,temp,p,s,m,x,t=0;
printf("Enter head pointer position:");
scanf("%d",&a[0]);
a[0]=50;
 n=8;
 m=199 ;
 s=a[0];
//a[1]=95;
//a[2]=180;
//a[3]=34;
//a[4]=119;
//a[5]=11;
//a[6]=123;
//a[7]=62;
//a[8]=64;
 printf("\nEnter max track limit:");
 scanf("%d",&m);
 printf("\nEnter number of processes:");
 scanf("%d",&n);
 printf("\nEnter processes in request order");
 for(i=1;i<=n;i++)
 {
  scanf("%d",&a[i]);
 }
a[n+1]=m;
a[n+2]=0;
 for(i=n+1;i>=0;i--)
 {
  for(j=0;j<=i;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 for(i=1;i<=n+1;i++)
 {
  if(s==a[i])
  x=i;
 }
 j=0;
  printf("\n B: part 1");
  for(i=x;i>1;i--)
  {
   t+=(a[i]-a[i-1]);
   b[j++]=a[i];
   printf("\n B :%d",t);
  }
printf("\n B: part 2");
  for(i=n+1;i>x+1 ;i--)
  {
   t+=(a[i]-a[i-1]);
   b[j++]=a[i];
   printf("\n B :%d",t);
  }
   printf("\nProcessing order:");
 for(i=0;i<=n-1;i++)
 printf("\t%d",b[i]);
 printf("\nTotal Head Movement:%d",t);
 return 0;
}
