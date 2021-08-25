#include<stdio.h>
int main(void){
   int a[11][11],sum=0;
   int i,j,m;
   scanf("%d",&m);
   for(i=1;i<=m;i++)
       for(j=1;j<=m;j++)
           scanf("%d",&a[i][j]);
   for(i=1;i<=m;i++)
       sum+=a[i][i];
   printf("%d",sum);
    return 0;
}
/*求一个N×N的整型矩阵主对角线元素之和。*/
