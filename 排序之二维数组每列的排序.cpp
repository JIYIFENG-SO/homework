#include<stdio.h>
int main(void){
    int a[10][10];
    int i,j,m,temp;
    for(i=0;i<4;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    for(j=0;j<5;j++)
        for(i=0;i<4;i++)
            for(m=3;m>i;m--)
                if(a[m][j]<a[m-1][j])
                    temp=a[m][j],a[m][j]=a[m-1][j],a[m-1][j]=temp;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++)
           printf("%4d",a[i][j]);
        printf("\n");
    }
}
/*һ��4��5�����Ͷ�ά���飬�Ӽ����������ݣ����Ը������ÿһ�а���С�����˳�����к������

�����ʽ:
����4��5�еľ���ÿ�е�һ����ǰû�пո�ÿ�е�ÿ����֮�����һ���ո�*/ 
