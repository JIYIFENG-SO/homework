#include<bits/stdc++.h>
using namespace std;
int ko(int a,char b,int c){
    int sum=77779;
    if(b=='+')
       sum=a+c;
    else if(b=='-')
        sum=a-c;
    else if(b=='*')
        sum=a*c;
    else{
        if(c!=0)
         if(a%c==0)
            sum=a/c;
        else
            sum=-9999;
     }
    return sum;
}
int main(void){
    int a[10],i,j,x,flag=0,sum1,sum2,sum3,sum,sum4;
    char m[10]={'+','-','*','/',0};
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);
    do{
        for(i=0;i<4&&flag==0;i++)
            for(j=0;j<4&&flag==0;j++)
                for(x=0;x<4&&flag==0;x++){
                    sum1=ko(a[0],m[x],a[1]);
                    sum2=ko(a[1],m[j],a[2]);
                    sum3=ko(a[2],m[i],a[3]);
                    sum=ko(sum1,m[j],sum3);
                    if(sum==24){
                        flag=1;
                        printf("(%d%c%d)%c(%d%c%d)",a[0],m[x],a[1],m[j],a[2],m[i],a[3]);
                        break;
                    }
                    sum=ko(ko(sum1,m[j],a[2]),m[i],a[3]);
                    if(sum==24){
                        flag=1;
                        printf("((%d%c%d)%c%d)%c%d",a[0],m[x],a[1],m[j],a[2],m[i],a[3]);
                        break;
                    }
                    sum=ko(ko(a[0],m[x],sum2),m[i],a[3]);
                        if(sum==24){
                        flag=1;
                        printf("(%d%c(%d%c%d))%c%d",a[0],m[x],a[1],m[j],a[2],m[i],a[3]);
                        break;
                    }
                     sum=ko(a[0],m[x],ko(sum2,m[i],a[3]));
                     if(sum==24){
                        flag=1;
                        printf("%d%c((%d%c%d)%c%d)",a[0],m[x],a[1],m[j],a[2],m[i],a[3]);
                        break;
                    }
                     sum=ko(a[0],m[x],ko(a[1],m[j],sum3));
                     if(sum==24){
                        flag=1;
                        printf("%d%c(%d%c(%d%c%d))",a[0],m[x],a[1],m[j],a[2],m[i],a[3]);
                        break;
                    } 
              }       
      }
    while(next_permutation(a,a+4)&&flag==0);
    if(flag==0)
        printf("-1");
    
    return 0;
}/*һ���˿��Ƶ�ÿ���Ʊ�ʾһ������J��Q��K �ֱ��ʾ 11��12��13������˾���ʾ 6������ȡ4 ���ƣ����õ� 4 �� 1~13 �������������������涨Ϊ��+ ��- ��* ��/ ���֣�ʹ֮��Ϊһ������ʽ��ÿ����ֻ�ܲ���һ�����㣬4 ����˳�����������ϣ�4 �����������ȡ 3 ���ҿ����ظ�ȡ���������һ�����ȼ��𣬿ɼ����ſ��ƣ�����ʹ������Ϊ 24�������һ�ֽ�������ı��ʽ�������ű�ʾ�������ȡ����û��һ�ֽ������������� -1 ��ʾ�޽⡣

�����ʽ��
������һ���и��� 4 ��������ÿ������ȡֵ�� [1, 13]��

�����ʽ��
�����һ�ֽ�������ı��ʽ�������ű�ʾ�������ȡ����û�н������������� -1��*/ 
