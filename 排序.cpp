#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,a[251],i,count=0;
    long long high,sum=0;
    scanf("%d%lld",&n,&high);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n,greater<int>());
    for(i=0;sum<=high;i++){
        sum+=a[i];
         count++;
    }
    printf("%d",count);
    return 0;
        
}
/*Farmer John最近为奶牛们的图书馆添置了一个巨大的书架，尽管它是如此的大，但它还是几乎瞬间就被各种各样的书塞满了。现在，只有书架的顶上还留有一点空间。

所有N(1 <= N <= 20,000)头奶牛都有一个确定的身高H_i(1 <= H_i <= 10,000)。设所有奶牛身高的和为S。书架的高度为B，并且保证 1 <= B <= S < 2,000,000,007。

为了够到比最高的那头奶牛还要高的书架顶，奶牛们不得不像演杂技一般，一头站在另一头的背上，叠成一座“奶牛塔”。当然，这个塔的高度，就是塔中所有奶牛的身高之和。为了往书架顶上放东西，所有奶牛的身高和必须不小于书架的高度。

显然，塔中的奶牛数目越多，整座塔就越不稳定，于是奶牛们希望在能够到书架顶的前提下，让塔中奶牛的数目尽量少。 现在，奶牛们找到了你，希望你帮她们计算这个最小的数目。*/
