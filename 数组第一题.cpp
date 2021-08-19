#include<stdio.h>
int main(void)
{int n,i;
scanf("%d",&n);
double fib[48]={1,1};
for(i=2;i<n;i++)
fib[i]=fib[i-1]+fib[i-2];
printf("%.2f\n",fib[n-1]);
return 0;
}
