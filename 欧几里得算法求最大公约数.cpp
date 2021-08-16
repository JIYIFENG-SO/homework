#include<stdio.h>
int main(void){
	int a,b,yu,temp,ai,bi;
	printf("请输入两个数求其最大公约数\n");
	scanf("%d%d",&a,&b);
	ai=a;
	bi=b;
	if(a==0||b==0){
		printf("0不与任何数存在最大公约数\n"); 
		return 0;
	}
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	yu=a%b;
	while(yu){
		a=b;
		b=yu;
		yu=a%b;
	}
	printf("%d和%d的最大公约数为%d\n",ai,bi,b);
}
