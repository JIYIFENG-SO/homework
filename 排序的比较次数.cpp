#include<stdio.h>
int main(void){
    int n,a[1006],i,low,high,flag=0,cnt=0,x,mid;
    scanf("%d",&n);
    low=0;
    high=n-1;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    while(low<=high){
        cnt++;
        mid=(low+high)/2;
        if(a[mid]==x){
            flag=1;
            break;
        }
       if(a[mid]<x){
           low=mid+1;
       }
       if(a[mid]>x)
           high=mid-1;
    }
    if(flag==0)
        printf("-1\n%d\n",cnt);
    else
        printf("%d\n%d\n",mid,cnt);
    return 0;
}
/*����nֵ(1<=n<=1000)��n���ǽ������е������Լ�Ҫ���ҵ���x��ʹ�ö��ֲ����㷨����x�����x���ڵ��±꣨0~n-1�����Ƚϴ�������x�����ڣ����-1�ͱȽϴ�����

�����ʽ:
���빲���У� ��һ����nֵ�� �ڶ�����n�������� ��������xֵ��

�����ʽ:
���x���ڵ��±꣨0~n-1�����Ƚϴ�������x�����ڣ����-1�ͱȽϴ�����*/ 
