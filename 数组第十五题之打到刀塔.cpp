#include<stdio.h>
int main(void){
    int a[10]={0},i,j=0;
    char m[1006];
    scanf("%s",m);
    for(i=0;m[i]!='\0';i++){
        if(m[i]=='Q')
            a[j++]=1;
        if(m[i]=='W')
            a[j++]=100;
        if(m[i]=='E')
            a[j++]=1000;
        if(m[i]=='R'){
            if(a[0]+a[1]+a[2]==300)
                printf("EMP\n");
            else if(a[0]+a[1]+a[2]==201)
                printf("Tornado\n");
            else if(a[0]+a[1]+a[2]==1200)
                printf("Alacrity\n");
            else if(a[0]+a[1]+a[2]==102)
                printf("Ghost Walk\n");
            else if(a[0]+a[1]+a[2]==1101)
                printf("Deafening Blast\n");
            else if(a[0]+a[1]+a[2]==2100)
                printf("Chaos Meteor\n");
            else if(a[0]+a[1]+a[2]==3)
                printf("Cold Snap\n");
            else if(a[0]+a[1]+a[2]==1002)
                printf("Ice Wall\n");
            else if(a[0]+a[1]+a[2]==2001)
                printf("Forge Spirit\n");
            else if(a[0]+a[1]+a[2]==3000)
                printf("Sun Strike\n");
            else
                printf("FFFFFFFK\n");
        }
        if(j==3)
           j=0;
   }
 return 0;
 }/*��DOTA2�У������߿��������ٻ�����Ԫ�أ���(Quas)����(Wex)����(Exort)�����㰴��Qʱ�������ٻ�һ����Ԫ�أ�����W�ٻ���Ԫ�أ�����E�ٻ���Ԫ�ء�����Ԫ�����������Ϊ3������ζ�ŵ����Ѿ�ӵ����3������Ԫ��ʱ���������ٻ�һ��Ԫ�أ��������ٻ�����Ԫ�ػ���ʧ����Ԫ�ص��������ͬʱ��������һ������-Ԫ����(R)��Ԫ�������Ը����㵱ǰӵ�еĸ���Ԫ������ʩ�Ų�ͬ�ļ��ܣ�ʩ�ż��ܺ�Ԫ�ز�������ʧ����Ԫ����������������ʱ����ʩ�ų����ܡ�����ϸ�����뿴����˵����������ݿ����Ĳ�������ӡ��������ʲô����,������ʩ�ų����ܣ�������� FFFFFFFK���������б�����ͼ��ʾ��

*/
