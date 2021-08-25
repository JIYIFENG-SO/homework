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
/*24点是一种益智游戏，24点是把4个整数（一般是正整数）通过加减乘除以及括号运算，使最后的计算结果是24的一个数学游戏，24点可以考验人的智力和数学敏感性，它能在游戏中提高人们的心算能力。 24点通常是使用扑克牌来进行游戏的，一副牌中抽去大小王后还剩下52张（如果初练也可只用1～10这40张牌），任意抽取4张牌（称为牌组），用加、减、乘、除（可加括号）把牌面上的数算成24。每张牌必须只能用一次，如抽出的牌是3、8、8、9，那么算式为（9－8）×8×3或3×8÷（9－8）或（9－8÷8）×3等。比如 1 5 5 5，算式为 5*(5-(1/5));

输入格式:
第一行输入n，表示n组测试数据，后面n行，每一行输入4个1-10的数字。[数字允许重复，测试用例保证无异常数字]

输出格式:
每组测试数据如果可以满足24点，则输出True,否则输出False，空格间隔后输出下一组结果，所有输出只占一行（行末无多余空格）*/
