#include<stdio.h>
int main(void){
   int m,n,i,j,sum=0;
   int a[100][100];
   scanf("%d%d",&m,&n);
  for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
   for(i=1;i<m-1;i++)
       for(j=1;j<n-1;j++)
           sum+=a[i][j];
    printf("%d",sum);
    return 0;
}
/*一个4×5的整型二维数组，从键盘输入数据，并对该数组的每一列按从小到大的顺序排列后输出。

输入格式:
输入4行5列的矩阵，每行第一个数前没有空格，每行的每个数之间各有一个空格。*/ 
