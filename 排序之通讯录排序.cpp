#include<stdio.h>
struct book{
    char name[40];
    long long birth;
    char tele[40];
 };
int main(void){
    struct book nice[40];
    struct book temp;
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%s%lld%s",nice[i].name, &nice[i].birth, nice[i].tele);
    for(i=1;i<=n;i++)
       for(j=n;j>i;j--)
          if(nice[j].birth<nice[j-1].birth)
               temp=nice[j],nice[j]=nice[j-1],nice[j-1]=temp;
       for(i=1;i<=n;i++)
         printf("%s %lld %s\n",nice[i].name,nice[i].birth,nice[i].tele);
    return 0;
 }
 /* ����n�����ѵ���Ϣ���������������ա��绰���룬����Ҫ���д���򣬰�������Ӵ�С��˳���������ͨѶ¼����Ŀ��֤�����˵����վ�����ͬ��

�����ʽ:
�����һ�и���������n��<10�������n�У�ÿ�а��ա����� ���� �绰���롱�ĸ�ʽ����һλ���ѵ���Ϣ�����С��������ǳ��Ȳ�����10��Ӣ����ĸ��ɵ��ַ����������ա���yyyymmdd��ʽ�����ڣ����绰���롱�ǲ�����17λ�����ּ�+��-��ɵ��ַ�����

�����ʽ:
��������Ӵ�С������ѵ���Ϣ����ʽͬ��*/
