#include<stdio.h>
int main(void){
    int n,i,j,temp;
    int a[106];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
        for(j=n;j>i;j--){
            if(a[j]<a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    for(i=1;i<n;i++)
        printf("%d ",a[i]);
    printf("%d",a[i]);
}
/*��д����ʵ�ֲ������򷨶������С��������������������������һ������N(1<N<=100),Ȼ��������N���������������У��������д�ĺ�������������������Ԫ��*/ 
