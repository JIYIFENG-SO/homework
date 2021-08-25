#include<stdio.h> 
int main(void)
{double a[1000];
 double b[1000]={0}; 
int i,n,count=1,max=0;
scanf("%d",&n);
scanf("%lf",&a[0]);
for(i=1;i<n;i++){
scanf("%d",&a[i]);
if(a[i]>a[i-1]){
count++;
b[i]=count;}
else{
b[i]=count;
count=1;}
}
for(i=1;i<n;i++)
if(b[i]>b[max])
max=i;
printf("%.0f",b[max]);
return 0;
}
/*炎热的夏日，KC 非常的不爽。他宁可忍受北极的寒冷，也不愿忍受厦门的夏天。最近，他开始研究天气的变化。他希望用研究的结果预测未来的天气。

经历千辛万苦，他收集了连续 N(1 \leq N \leq 10^6)N(1≤N≤10 
6
 ) 的最高气温数据。

现在，他想知道最高气温一直上升的最长连续天数。

输入格式
第 1 行：一个整数 NN 。1 \leq N \leq 10^61≤N≤10 
6
 

第 2 行：NN个空格隔开的整数，表示连续 NN 天的最高气温。0 \leq0≤ 最高气温 \leq 10^9≤10 
9
  。

输出格式
1 行：一个整数，表示最高气温一直上升的最长连续天数。设置一个变量统计即可*/ 
