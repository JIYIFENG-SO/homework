#include<stdio.h>
#include<math.h>
int main(void){
   int x[1002],y[1002];
   int n,i,max=0,d,j;
   scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d%d",&x[i],&y[i]);
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++){
            d=pow(x[i]-x[j],2)+pow(y[i]-y[j],2);
            if(d>max)
                max=d;
        }
    printf("%d",max);
    return 0;
}
/*首歌曲描述的是海岸边上的灯塔，可以把灯塔的灯光想象为一个圆锥形投射到海面上的船帆上（船帆可以想象为一个二维平面）。下面给定船帆上的n个点坐标，n<=1000。求解灯塔的灯光垂直打在这个船帆上，需要直径至少多大的圆，才能够将所有点包含在其中（圆心不一定在原点）。*/
