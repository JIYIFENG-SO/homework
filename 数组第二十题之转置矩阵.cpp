#include<stdio.h>
int main(void){
   int a[11][11],b[11][11];
   int i,j,m;
   scanf("%d",&m);
   for(i=1;i<=m;i++)
       for(j=1;j<=m;j++)
           scanf("%d",&a[i][j]);
   for(i=1;i<=m;i++)
       for(j=1;j<=m;j++)       
            b[i][j]=a[j][i];
    for(i=1;i<=m;i++)
       for(j=1;j<=m;j++) 
            b[i][j]=b[i][j]+a[i][j];
     for(i=1;i<=m;i++){
       for(j=1;j<=m;j++)
          printf("%4d",b[i][j]);
         printf("\n");
     }
    return 0;
}
//×ªÖÃ¾ØÕó 
