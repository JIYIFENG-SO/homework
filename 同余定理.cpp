#include<stdio.h>
int main(void){
	int a,b,c; 
    printf("请输入三个数a,b,c，判断a,b对c是否同余\n");
	scanf("%d%d%d",&a,&b,&c);
    if(c==0){
    	printf("任何数不会对0同余\n");
		return 0; 
	}
	if((a%c)==(b%c))
	    printf("%d与%d对%d同余",a,b,c);
	else
	    printf("%d与%d对%d不同余",a,b,c);
    return 0;
}
