#include<stdio.h>
int main(void){
   int n,a[1003],i,j,max=0,now;
   scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++){
            if(a[i]!=0&&a[j]!=0){
              if(a[i]>=a[j])
                now=a[i]%a[j];
            else
                now=a[j]%a[i];
            if(now>max)
                max=now;
            }
        }
    printf("%d",max);
    return 0;
}
/*ĳ���İ�ȫ���ż����ȫ�������������ò��ŵĳ���Ա�ӵ�һ�����񣬿ֲ���֯������·���һ����������A��������n����������ɣ��������κ�����ֵAi��Aj�����������ǵ�����

x=Ai mod Aj ��������1<=i,j<=n��Ai>= Aj����

����x�У�����x����������ܵ���Կ������Ա����������ҵ��������x*/
