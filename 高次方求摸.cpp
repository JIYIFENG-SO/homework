#include<stdio.h>
int main(void){
	int n,p,m,result=1;
	printf("������������n,p,m,��n��p�η���mȡģ\n");
	scanf("%d%d%d",&n,&p,&m);
	while(p>0){
		if(p%2==1){
			result=(result*n)%m;
		}
		p=p/2;
		n=(n*n)%m;
	}
	printf("�����%d\n",result);
	return 0;
}
