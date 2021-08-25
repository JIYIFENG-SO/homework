#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,m,i,sum=0,a[3200],small;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=m;i++)
        sum=sum+a[i];
    small=sum;
    for(i=m+1;i<=n;i++){
        sum=sum+a[i]-a[i-m];
        if(sum<small)
            small=sum;
     }
    printf("%d",small);
    return 0;
}
/*最近有 nn 个不爽的事，每句话都有一个正整数刺痛值（心理承受力极差）。爱与愁大神想知道连续 mm 个刺痛值的和的最小值是多少，但是由于业务繁忙，爱与愁大神只好请你编个程序告诉他。*/
