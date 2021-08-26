#include <stdio.h>
int main(void){
    int n,i,j,max,temp;
    int a[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
       for(j=i+1;j<=n;j++)
         if(a[j]>a[i])
            temp=a[j],a[j]=a[i],a[i]=temp;
    for(i=1;i<n;i++)
        printf("%d ",a[i]);
    printf("%d\n",a[n]);
   
    return 0;
}
/*选择排序之从大到小排序*/ 
