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
}/*你供职于由一群丑星作为台柱子的信天翁马戏团。你刚完成了一个程序编写，它按明星们姓名字符串的长度非降序（即当前姓名的长度至少与前一个姓名长度一样）顺序输出他们的名单。然而，你的老板不喜欢这种输出格式，提议输出的首、尾名字长度较短，而中间部分长度稍长，显得有对称性。老板说的具体办法是对已按长度排好序的名单逐对处理，将前者放于当前序列的首部，后者放在尾部。如输入样例中的第一个案例，Bo和Pat是首对名字，Jean和Kevin是第二对，余此类推*/
