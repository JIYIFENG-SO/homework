#include<bits/stdc++.h>
using namespace std;
int main(void){
    map<int,string> pretty;
    int n,count=0,i;
    string name;
    scanf("%d",&n);
    while(n){
        count++;
        printf("SET %d\n",count);
        for(i=1;i<=n;i++){
            cin>>name;
            pretty[i]=name;
        }
        for(i=1;i<=n;i=i+2){
            name=pretty[i];
            cout<<name;
            printf("\n");
        }
        if(n%2==0)
            for(i=n;i>=2;i=i-2){
            name=pretty[i];
            cout<<name;
            printf("\n");
            }
        else
            for(i=n-1;i>=2;i=i-2){
            name=pretty[i];
            cout<<name;
            printf("\n");
            }
        scanf("%d",&n);
     }
 return 0;
}/*�㹩ְ����һȺ������Ϊ̨���ӵ���������Ϸ�š���������һ�������д�����������������ַ����ĳ��ȷǽ��򣨼���ǰ�����ĳ���������ǰһ����������һ����˳��������ǵ�������Ȼ��������ϰ岻ϲ�����������ʽ������������ס�β���ֳ��Ƚ϶̣����м䲿�ֳ����Գ����Ե��жԳ��ԡ��ϰ�˵�ľ���취�Ƕ��Ѱ������ź����������Դ�����ǰ�߷��ڵ�ǰ���е��ײ������߷���β���������������еĵ�һ��������Bo��Pat���׶����֣�Jean��Kevin�ǵڶ��ԣ��������*/
