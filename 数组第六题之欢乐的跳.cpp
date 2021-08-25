#include<bits/stdc++.h>
using namespace std;
int main(void){
int a[1000],b[1000],i,n,flag=1;
scanf("%d",&n);
scanf("%d",&a[0]);
for(i=1;i<n;i++){
scanf("%d",&a[i]);
b[i]=fabs(a[i]-a[i-1]);
}
sort(b+1,b+n);
for(i=1;i<=n-1;i++)
if(b[i]!=i)
flag=0;
if(flag==1)
printf("Jolly");
else
printf("Not jolly");
return 0;
}
/*一个nn个元素的整数数组，如果数组两个连续元素之间差的绝对值包括了[1,n-1][1,n?1]之间的所有整数，则称之符合“欢乐的跳”，如数组1 4 2 31423符合“欢乐的跳”，因为差的绝对值分别为：3,2,13,2,1。

给定一个数组，你的任务是判断该数组是否符合“欢乐的跳”。

输入格式
每组测试数据第一行以一个整数n(1 \le n \le 1000)n(1≤n≤1000)开始，接下来nn个空格隔开的在[-10^8?10 
8
 ,10^810 
8
 ]之间的整数。

输出格式
对于每组测试数据，输出一行若该数组符合“欢乐的跳”则输出"Jolly"，否则输出"Not jolly"。*/
