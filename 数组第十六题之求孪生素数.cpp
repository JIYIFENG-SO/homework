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
/*�����������֮��Ϊ2�����Ǿ���һ������������

��������������n��m���ҵ�[n,m]�պ������ڵ��������������������չ涨��ʽ�����

�����ʽ:
��һ��������������n��m����������������1000��

�����ʽ:
��С�����˳��������������ڵ��������������� ������ 1 10 ����� (3,5) �� (5,7)��������������֮�󶼸�һ���ո�*/ 
