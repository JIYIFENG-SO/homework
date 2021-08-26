#include<bits/stdc++.h>
using namespace std;
int main(void){
    double a,b,c,x,x1,x2,der,m,n;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0){
        if(b!=0){
            x=-c/b;
            if(fabs(x)<1e-8)
                x=0;
            printf("x = %g",x);
        }
       if(b==0&&c!=0)
           printf("无解");
       if(b==0&&c==0)
           printf("无穷多解");
    }
    if(a!=0){
        der=b*b-4*a*c;
        //if(fabs(der)<1e-8)
                //der=0;
        if(fabs(der)<1e-8){
            x=-b/(2*a);
            if(fabs(x)<1e-8)
                x=0;
            printf("x1 = x2 = %g",x);
        }
        else if(der>0){
            x1=(-b+sqrt(der))/(2*a);
            x2=(-b-sqrt(der))/(2*a);
             if(fabs(x1)<1e-8)
                x1=0;
             if(fabs(x2)<1e-8)
                x2=0;
            if(x1!=x2)
            printf("x1 = %g, x2 = %g",x1,x2);
        }
       else{
           der=fabs(der);
           m=-b/(2*a);
           n=sqrt(der)/(2*a);
           if(fabs(m)<1e-8)
                m=0;
           if(fabs(n)<1e-8)
                n=0;
           if(n>0)
               printf("x1 = %g+%gi, x2 = %g%gi",m,n,m,-n);
           if(n<0)
               printf("x1 = %g%gi, x2 = %g+%gi",m,n,m,-n);
           if(n==0)
               printf("x1 = %g+%gi, x2 = %g-%gi",m,n,m,n);
        }
    }
   // printf("%g",der);
    return 0;
 }/*解一元二次方程

请编写程序，解一元一次方程 ax 
2
 +bx+c=0 。

一元二次方程的求根公式为：

题图.jpg

要求：

若 a=0，则为一元一次方程。
若 b

=0，则方程有唯一解，输出这个解；
若 b=0,c

=0，则方程无解，输出“无解”；
若 b=0,c=0，则方程有无穷多解，输出“无穷多解”。
若 a

=0，则为一元二次方程。
若 Δ>0，则方程有两个不等的实根，输出这两个根；
若 Δ=0，则方程有两个相等的实根，输出这两个根；
若 Δ<0，则方程有两个共轭的虚根，输出这两个根*/ 
