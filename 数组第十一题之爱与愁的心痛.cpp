#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,m,i,sum=0,a[3200],small;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=m;i++)
        sum=sum+a[i];
    small=sum;
    for(i=m+1;i<=n;i++){
        sum=sum+a[i]-a[i-m];
        if(sum<small)
            small=sum;
     }
    printf("%d",small);
    return 0;
}
/*����� nn ����ˬ���£�ÿ�仰����һ����������ʹֵ��������������������������֪������ mm ����ʹֵ�ĺ͵���Сֵ�Ƕ��٣���������ҵ��æ����������ֻ�������������������*/
