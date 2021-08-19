#include<stdio.h>
int main(void){
	int n,p,m,result=1;
	printf("请输入三个数n,p,m,求n的p次方对m取模\n");
	scanf("%d%d%d",&n,&p,&m);
	while(p>0){
		if(p%2==1){
			result=(result*n)%m;
		}
		p=p/2;
		n=(n*n)%m;
	}
	printf("结果是%d\n",result);
	return 0;
}
