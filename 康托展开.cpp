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
	int a[100],n,i,j,sum=0,cnt,now;
	Jie();
	printf("请输入你的排序数的个数\n");
	scanf("%d",&n);
	printf("请输入你的排序数\n");
	for(i=0;i<n;i++) 
	scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		cnt=0;
		now=a[i];
		label[now]=1;
		for(j=1;j<a[i];j++)
		 if(label[j]==0)
		    cnt++;
		sum+=cnt*fact[n-i-1];
	}
	printf("该种排序的序号为%d\n",sum);
}
