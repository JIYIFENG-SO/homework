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
}/*一副扑克牌的每张牌表示一个数（J、Q、K 分别表示 11、12、13，两个司令都表示 6）。任取4 张牌，即得到 4 个 1~13 的数，请添加运算符（规定为加+ 减- 乘* 除/ 四种）使之成为一个运算式。每个数只能参与一次运算，4 个数顺序可以任意组合，4 个运算符任意取 3 个且可以重复取。运算遵从一定优先级别，可加括号控制，最终使运算结果为 24。请输出一种解决方案的表达式，用括号表示运算优先。如果没有一种解决方案，则输出 -1 表示无解。

输入格式：
输入在一行中给出 4 个整数，每个整数取值在 [1, 13]。

输出格式：
输出任一种解决方案的表达式，用括号表示运算优先。如果没有解决方案，请输出 -1。*/ 
