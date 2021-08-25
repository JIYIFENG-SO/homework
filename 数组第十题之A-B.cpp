#include<bits/stdc++.h>
using namespace std;
map<long long,long long>num;
int main(void){
    long long n,c,cnt=0,i,a,b,m[1000];
    scanf("%lld%lld",&n,&c);
    for(i=1;i<=n;i++){
        scanf("%lld",&b);
        num[b]++;
        m[i]=b+c;
    }
    for(i=1;i<=n;i++){
        cnt=cnt+num[m[i]];
        if(c==0)
            cnt--;
     }
    printf("%lld",cnt);
    return 0;
}
/*相同的题目看多了也会有审美疲劳，于是我舍弃了大家所熟悉的 A+B Problem，改用 A-B 了哈哈！

好吧，题目是这样的：给出一串数以及一个数字 CC，要求计算出所有 A - B = CA?B=C 的数对的个数（不同位置的数字一样的数对算不同的数对）。*/ 
