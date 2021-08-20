#include<stdio.h>
int main(void)
{int a[100000],n,m,i,count=1,sum=0;
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
if(sum>m){
count++;
sum=a[i];
}
else if(sum==m&&i!=n-1){
sum=0;
count++;
}
else;

}
printf("%d",count);
return 0;
}
