#include<stdio.h>
int main(void){
    int a[10][10];
    int i,j,m,temp;
    for(i=0;i<4;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    for(j=0;j<5;j++)
        for(i=0;i<4;i++)
            for(m=3;m>i;m--)
                if(a[m][j]<a[m-1][j])
                    temp=a[m][j],a[m][j]=a[m-1][j],a[m-1][j]=temp;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++)
           printf("%4d",a[i][j]);
        printf("\n");
    }
}
/*一个4×5的整型二维数组，从键盘输入数据，并对该数组的每一列按从小到大的顺序排列后输出。

输入格式:
输入4行5列的矩阵，每行第一个数前没有空格，每行的每个数之间各有一个空格。*/ 
