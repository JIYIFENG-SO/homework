#include<stdio.h>
int fact[10];
int label[100];
void Jie(void){
	int i=0;
	fact[0]=1;
	for(i=1;i<=9;i++)
	  fact[i]=fact[i-1]*i;
}
int main(void){
	int cnt,n,m,ys,i,j,now=1; 
	Jie();
	printf("����������������ĸ���\n");
	scanf("%d",&n);
	printf("��������������������\n");
	scanf("%d",&cnt);
	cnt--;
	for(i=0;i<n;i++){
		m=cnt/fact[n-i-1];
		cnt=cnt%fact[n-i-1];
		now=0;
		m=m+1;
		while(m){
			now++;
			if(label[now]==1){
				continue;
			}
			m--;
		}
		label[now]=1;
		printf("%d ",now);
	}
   return 0;
}
