#include<stdio.h>
int main(void){
	int a,b,yu,temp,ai,bi;
	printf("�������������������Լ��\n");
	scanf("%d%d",&a,&b);
	ai=a;
	bi=b;
	if(a==0||b==0){
		printf("0�����κ����������Լ��\n"); 
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
	printf("%d��%d�����Լ��Ϊ%d\n",ai,bi,b);
}
