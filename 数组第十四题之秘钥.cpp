#include<stdio.h>
int main(void){
   int n,a[1003],i,j,max=0,now;
   scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++){
            if(a[i]!=0&&a[j]!=0){
              if(a[i]>=a[j])
                now=a[i]%a[j];
            else
                now=a[j]%a[i];
            if(now>max)
                max=now;
            }
        }
    printf("%d",max);
    return 0;
}
/*某国的安全部门监控了全国的数据流，该部门的程序员接到一个任务，恐怖组织会给手下发送一个数字序列A，其中由n个正整数组成，而其中任何两个值Ai和Aj都可以求它们的余数

x=Ai mod Aj ，（其中1<=i,j<=n，Ai>= Aj）。

所有x中，最大的x就是破译机密的秘钥。程序员的任务就是找到这个最大的x*/
