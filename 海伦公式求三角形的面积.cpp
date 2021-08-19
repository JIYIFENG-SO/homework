#include<stdio.h>
#include<math.h>
int main(void){
	double a,b,c,p,result; 
	printf("请输入三角形的三边长，求其面积\n");
    scanf("%lf%lf%lf",&a,&b,&c); 
	p=(a+b+c)/2;
	result=p*(p-a)*(p-b)*(p-c);
	result=sqrt(result);
	printf("三角形的面积是%f\n",result);
	return 0;
}
