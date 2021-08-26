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
 /* 输入n个朋友的信息，包括姓名、生日、电话号码，本题要求编写程序，按照年龄从大到小的顺序依次输出通讯录。题目保证所有人的生日均不相同。

输入格式:
输入第一行给出正整数n（<10）。随后n行，每行按照“姓名 生日 电话号码”的格式给出一位朋友的信息，其中“姓名”是长度不超过10的英文字母组成的字符串，“生日”是yyyymmdd格式的日期，“电话号码”是不超过17位的数字及+、-组成的字符串。

输出格式:
按照年龄从大到小输出朋友的信息，格式同输*/
