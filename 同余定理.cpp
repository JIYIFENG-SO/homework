#include<stdio.h>
int main(void){
	int a,b,c; 
    printf("������������a,b,c���ж�a,b��c�Ƿ�ͬ��\n");
	scanf("%d%d%d",&a,&b,&c);
    if(c==0){
    	printf("�κ��������0ͬ��\n");
		return 0; 
	}
	if((a%c)==(b%c))
	    printf("%d��%d��%dͬ��",a,b,c);
	else
	    printf("%d��%d��%d��ͬ��",a,b,c);
    return 0;
}
