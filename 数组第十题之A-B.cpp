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
/*��ͬ����Ŀ������Ҳ��������ƣ�ͣ������������˴������Ϥ�� A+B Problem������ A-B �˹�����

�ðɣ���Ŀ�������ģ�����һ�����Լ�һ������ CC��Ҫ���������� A - B = CA?B=C �����Եĸ�������ͬλ�õ�����һ���������㲻ͬ�����ԣ���*/ 
