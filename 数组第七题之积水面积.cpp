#include<stdio.h>
int max(int i,int j){
	if(i>=j)
	return i;
	else 
	return j;
}
int min(int i,int j){
	if(i<=j)
	return i;
	else
	return j;
}

int main(void){
    int a[100],n,z[100],y[100],i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        z[i]=max(a[i],z[i-1]);
    }
    for(i=n;i>=1;i--)
        y[i]=max(a[i],y[i+1]);
    for(i=1;i<=n;i++)
        sum+=min(z[i],y[i])-a[i];
    printf("%d",sum);
    return 0;
}
/*һ�����������ֱ��ʾ���������������ӵĸ߶ȡ���ĳ�߶�ֵΪx����ʾ��x���������ķ����������ͼ��0<=x<=5000�����ҳ����п��ܻ�ˮ�ĵط���ͼ����ɫ���֣���ͳ�����ǿ��ܻ�ˮ������ܺͣ��������ͼ�еĺ�������һ���������λ�ã�Ϊһ����λ�������

��ͼ�����Ӹ߶ȱ仯Ϊ 0 1 0 2 1 2 0 0 2 0*/
