# pairs
#include<stdio.h>
main()
{
int a,n,i=1,j,count=0;
scanf("%d",&a);
n=2*a;
while(i<n)
{
for(j=i+1;j<=n;j++)
{
printf("%d%d\n",i,j);
count++;
}
i++;
}
printf("total number of pairs %d",count);
}
