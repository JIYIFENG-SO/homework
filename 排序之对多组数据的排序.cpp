#include<stdio.h>
int main(void){
    int n,i,j,a[40],temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
        for(j=n;j>i;j--)
            if(a[j]>a[j-1])
                temp=a[j],a[j]=a[j-1],a[j-1]=temp;
    for(i=1;i<n;i++)
        printf("%d ",a[i]);
    printf("%d",a[i]);
    return 0;
}
/*输入一批未排序的数据，数量不超过30个，请使用选择法或者冒泡法对其排序，并按照规定的要求输出。

输入格式:
先输入待排序的整形数的个数；然后输入所有的待排序的数据。

输出格式:
在一行中按照由大到小的顺序输出排序好的数据。注意：最后一个数据后面没有空格。*/
