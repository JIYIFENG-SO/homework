#include<stdio.h>
int main(void){
    long long n,x,count,i,m,y;
    scanf("%lld%lld",&n,&x);
    for(i=1;i<=n;i++){
        m=i;
        while(m){
            y=m%10;
            if(y==x)
                count++;
            m=m/10;
        }
    }
    printf("%lld",count);
}
/*计算在区间 11 到 nn 的所有整数中，数字 xx（0\le x\le90≤x≤9）共出现了多少次？例如，在 11 到 1111 中，即在 1,2,3,4,5,6,7,8,9,10,111,2,3,4,5,6,7,8,9,10,11 中，数字 11 出现了 44 次。

输入格式
22 个整数 n,xn,x，之间用一个空格隔开。

输出格式
11 个整数，表示 xx 出现的次数.对其取余即可*/
