#include<bits/stdc++.h>
using namespace std;
int main(void){
    int m,n,p,one,two,three,flag=0;
    int a[20]={1,2,3,4,5,6,7,8,9};
    scanf("%d%d%d",&m,&n,&p);
    do{
        one=100*a[0]+10*a[1]+a[2];
        two=100*a[3]+10*a[4]+a[5];
        three=100*a[6]+10*a[7]+a[8];
        if((one*1.0)/two==(m*1.0)/n&&(one*1.0)/three==(m*1.0)/p){
            flag=1;
            printf("%d %d %d\n",one,two,three);
            }
    }
    while(next_permutation(a,a+9));
    if(flag==0)
        printf("No!!!");
    return 0;
}
/*�� 1, 2,\ldots, 91,2,��,9 �� 99 �����ֳ����飬�ֱ����������λ������ʹ��������λ���ı����� A:B:CA:B:C���������������������������λ�������޽⣬��� No!!!��*/
