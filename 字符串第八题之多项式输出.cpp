#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,i,m,flag=0;
    scanf("%d",&n);
    if(n==0){
        scanf("%d",&m);
        printf("%d",m);
    }
    else
    for(i=n;i>=0;i--){
        scanf("%d",&m);
        if(i!=n&&m>0)
            printf("+");
        if(m!=0&&i>=2){
            if(m==1)
                printf("x^%d",i);
            else if(m==-1)
                printf("-x^%d",i);
            else
                printf("%dx^%d",m,i);
        }
        if(m!=0&&i==1){
            if(m==1)
                printf("x");
            else if(m==-1)
                printf("-x");
            else
                printf("%dx",m);
        }
        if(m!=0&&i==0)
            printf("%d",m);
    }
    
    return 0;
            
}/*一元nn次多项式可用如下的表达式表示：



f(x)=a_nx^n+a_{n-1}x^{n-1}+\cdots +a_1x+a_0,a_n\ne 0
f(x)=a 
n
?	
 x 
n
 +a 
n?1
?	
 x 
n?1
 +?+a 
1
?	
 x+a 
0
?	
 ,a 
n
?	
 

=0

其中，a_ix^ia 
i
?	
 x 
i
 称为ii次项，a_ia 
i
?	
  称为ii次项的系数。给出一个一元多项式各项的次数和系数，请按照如下规定的格式要求输出该多项式：

多项式中自变量为xx，从左到右按照次数递减顺序给出多项式。

多项式中只包含系数不为00的项。

如果多项式nn次项系数为正，则多项式开头不出现“+”号，如果多项式nn次项系数为负，则多项式以“-”号开头。

对于不是最高次的项，以“+”号或者“-”号连接此项与前一项，分别表示此项系数为正或者系数为负。紧跟一个正整数，表示此项系数的绝对值（如果一个高于00次的项，其系数的绝对值为11，则无需输出 11）。如果xx的指数大于11，则接下来紧跟的指数部分的形式为“x^bx 
b
 ”，其中 bb为 xx的指数；如果 xx的指数为11，则接下来紧跟的指数部分形式为“xx”；如果 xx 的指数为00，则仅需输出系数即可。

多项式中，多项式的开头、结尾不含多余的空格。*/
