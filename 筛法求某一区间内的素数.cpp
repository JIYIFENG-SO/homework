#include<stdio.h>
const int MAXN = 1e6 + 10;
int prime[MAXN];
void isPrime() {
   long long i,j;
   prime[0] = prime[1] = 1;
   for ( i = 2; i * i < MAXN; i++) {
      if (!prime[i]) {
         for ( j = i * i; j < MAXN; j += i)
            prime[j] = 1;
      }
   }
}
int main(void){
	long long a,b,i;
	int flag=0;
	isPrime();
	printf("求某一区间内的素数，请输入下限和上限\n");
	scanf("%lld%lld",&a,&b);
	for(i=a;i<=b;i++){
		if(prime[i]==0){
			flag=1;
			printf("%lld ",i);
		}
	}
	if(flag==0)
	printf("该区间内不存在素数\n");
}


