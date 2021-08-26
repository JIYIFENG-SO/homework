#include<stdio.h>
int main(void){
    int n,a[1006],i,low,high,flag=0,cnt=0,x,mid;
    scanf("%d",&n);
    low=0;
    high=n-1;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    while(low<=high){
        cnt++;
        mid=(low+high)/2;
        if(a[mid]==x){
            flag=1;
            break;
        }
       if(a[mid]<x){
           low=mid+1;
       }
       if(a[mid]>x)
           high=mid-1;
    }
    if(flag==0)
        printf("-1\n%d\n",cnt);
    else
        printf("%d\n%d\n",mid,cnt);
    return 0;
}
/*输入n值(1<=n<=1000)、n个非降序排列的整数以及要查找的数x，使用二分查找算法查找x，输出x所在的下标（0~n-1）及比较次数。若x不存在，输出-1和比较次数。

输入格式:
输入共三行： 第一行是n值； 第二行是n个整数； 第三行是x值。

输出格式:
输出x所在的下标（0~n-1）及比较次数。若x不存在，输出-1和比较次数。*/ 
