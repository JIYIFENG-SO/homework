#include<bits/stdc++.h>
using namespace std;
 const int MAXN = 1e3 + 10;
 int prime[MAXN];
 void isPrime() {
     prime[0] = prime[1] = 1;
     for (long long i = 2; i < MAXN; i++) {
        if (!prime[i]) {
              for (long long j = i * i; j < MAXN; j += i)
                    prime[j] = 1;
              }
      }
}

int main(void){
    int n,m,i,a[1000],b[1000],p=1,x;
    isPrime();
    scanf("%d%d",&n,&m);
    for(i=1;i<=1000;i++)
        if(prime[i]==0){
            a[i]=p;
            b[p]=i;
            p++;
    }
    for(i=n;i<=m;i++){
        if(prime[i]==0){
            x=a[i];
         if(b[x+1]-b[x]==2&&b[x+1]<=m) 
             printf("(%d,%d) ",b[x],b[x+1]);
        }
    }
  
  return 0;
 }
/*如果两个素数之差为2，它们就是一对孪生素数。

输入两个正整数n和m，找到[n,m]闭合区间内的所有孪生素数，并按照规定格式输出。

输入格式:
在一行中输入正整数n和m，两个数都不超过1000。

输出格式:
从小到大的顺序依次输出区间内的所有孪生素数。 如输入 1 10 后，输出 (3,5) 和 (5,7)，各组孪生素数之后都跟一个空格*/ 
