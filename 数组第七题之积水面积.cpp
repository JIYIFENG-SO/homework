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
/*一组正整数，分别表示由正方体叠起的柱子的高度。若某高度值为x，表示由x个正立方的方块叠起（如下图，0<=x<=5000）。找出所有可能积水的地方（图中蓝色部分），统计它们可能积水的面积总和（计算的是图中的横截面积。一个立方体的位置，为一个单位面积）。

如图：柱子高度变化为 0 1 0 2 1 2 0 0 2 0*/
