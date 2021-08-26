#include<stdio.h>
int main(void){
    int n,i,j,temp;
    int a[106];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
        for(j=n;j>i;j--){
            if(a[j]<a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    for(i=1;i<n;i++)
        printf("%d ",a[i]);
    printf("%d",a[i]);
}
/*编写函数实现插入排序法对数组从小到大排序。在主函数中首先输入一个整数N(1<N<=100),然后再输入N个整数存入数组中，调用你编写的函数排序后输出数组所有元素*/ 
