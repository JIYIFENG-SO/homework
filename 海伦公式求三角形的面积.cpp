#include<stdio.h>
#include<math.h>
int main(void){
	double a,b,c,p,result; 
	printf("�����������ε����߳����������\n");
    scanf("%lf%lf%lf",&a,&b,&c); 
	p=(a+b+c)/2;
	result=p*(p-a)*(p-b)*(p-c);
	result=sqrt(result);
	printf("�����ε������%f\n",result);
	return 0;
}
