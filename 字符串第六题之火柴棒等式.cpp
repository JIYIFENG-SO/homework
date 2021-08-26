#include<stdio.h>
int main(void){
    int a[1000]={6,2,5,5,4,5,6,3,7,6};
    int n,i,count=0,j,m,p;
    scanf("%d",&n);
    for(i=10;i<1000;i++){
        j=i;
        while(j!=0){
            m=j%10;
            a[i]=a[i]+a[m];
            j=j/10;
        }
    }
    for(i=0;i<1000;i++)
        for(j=0;j<1000;j++){
            p=i+j;
            if(p<1000){
            if(a[i]+a[j]+a[p]+4==n)
                count++;
            }
        }
    printf("%d",count);
    return 0;
}    
/*给你n根火柴棍，你可以拼出多少个形如“A+B=C”的等式？等式中的AA、BB、CC是用火柴棍拼出的整数（若该数非零，则最高位不能是00）。用火柴棍拼数字0-90?9的拼法如图所示：
加号与等号各自需要两根火柴棍*/
