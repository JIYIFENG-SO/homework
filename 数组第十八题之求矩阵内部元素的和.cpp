#include<stdio.h>
int main(void){
   int m,n,i,j,sum=0;
   int a[100][100];
   scanf("%d%d",&m,&n);
  for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
   for(i=1;i<m-1;i++)
       for(j=1;j<n-1;j++)
           sum+=a[i][j];
    printf("%d",sum);
    return 0;
}
/*һ��4��5�����Ͷ�ά���飬�Ӽ����������ݣ����Ը������ÿһ�а���С�����˳�����к������

�����ʽ:
����4��5�еľ���ÿ�е�һ����ǰû�пո�ÿ�е�ÿ����֮�����һ���ո�*/ 
