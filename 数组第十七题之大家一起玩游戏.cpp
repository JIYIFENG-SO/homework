#include<bits/stdc++.h>
using namespace std;
double ko(double a,char b,double c){
    double sum=77779;
    if(b=='+')
       sum=a+c;
    else if(b=='-')
        sum=a-c;
    else if(b=='*')
        sum=a*c;
    else{
        if(c!=0)
         sum=a/c;
        else
            sum=-9999;
     }
    return sum;
}
int main(void){
    double a[10],flag=0,sum1,sum2,sum3,sum,sum4;
    int i,j,x,t,first=0;
    char m[10]={'+','-','*','/',0};
    scanf("%d",&t);
    while(t--){
        flag=0;
    for(i=0;i<4;i++)
        scanf("%lf",&a[i]);
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
                        if(first==0)
                          printf("True");
                        else
                          printf(" True");
                        first=1;
                        break;
                    }
                    sum=ko(ko(sum1,m[j],a[2]),m[i],a[3]);
                    if(sum==24){
                        flag=1;
                        if(first==0)
                          printf("True");
                        else
                          printf(" True");
                        first=1;
                        break;
                    }
                    sum=ko(ko(a[0],m[x],sum2),m[i],a[3]);
                        if(sum==24){
                        flag=1;
                        if(first==0)
                          printf("True");
                        else
                          printf(" True");
                        first=1;
                        break;
                    }
                     sum=ko(a[0],m[x],ko(sum2,m[i],a[3]));
                     if(sum==24){
                        flag=1;
                        if(first==0)
                          printf("True");
                        else
                          printf(" True");
                        first=1;
                        break;
                    }
                     sum=ko(a[0],m[x],ko(a[1],m[j],sum3));
                     if(sum==24){
                        flag=1;
                        if(first==0)
                          printf("True");
                        else
                          printf(" True");
                        first=1;
                        break;
                    }
              }       
      }
    while(next_permutation(a,a+4)&&flag==0);
    if(flag==0){
        if(first==0)
            printf("False");
        else
            printf(" False");
                   first=1;
    }
   } 
    return 0;
}
/*24����һ��������Ϸ��24���ǰ�4��������һ������������ͨ���Ӽ��˳��Լ��������㣬ʹ���ļ�������24��һ����ѧ��Ϸ��24����Կ����˵���������ѧ�����ԣ���������Ϸ��������ǵ����������� 24��ͨ����ʹ���˿�����������Ϸ�ģ�һ�����г�ȥ��С����ʣ��52�ţ��������Ҳ��ֻ��1��10��40���ƣ��������ȡ4���ƣ���Ϊ���飩���üӡ������ˡ������ɼ����ţ��������ϵ������24��ÿ���Ʊ���ֻ����һ�Σ�����������3��8��8��9����ô��ʽΪ��9��8����8��3��3��8�£�9��8����9��8��8����3�ȡ����� 1 5 5 5����ʽΪ 5*(5-(1/5));

�����ʽ:
��һ������n����ʾn��������ݣ�����n�У�ÿһ������4��1-10�����֡�[���������ظ�������������֤���쳣����]

�����ʽ:
ÿ��������������������24�㣬�����True,�������False���ո����������һ�������������ֻռһ�У���ĩ�޶���ո�*/
