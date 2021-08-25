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
 }/*在DOTA2中，乞求者卡尔可以召唤三种元素，冰(Quas)，雷(Wex)，火(Exort)，当你按下Q时，他会召唤一个冰元素，按下W召唤雷元素，按下E召唤火元素。所有元素总数量最大为3，这意味着当你已经拥有了3个任意元素时，若你再召唤一个元素，则最先召唤出的元素会消失，新元素诞生。与此同时，他还有一个技能-元素祈唤(R)。元素祈唤可以根据你当前拥有的各类元素数量施放不同的技能，施放技能后，元素并不会消失，当元素数量不足三个的时候不能施放出技能。更详细解释请看样例说明。请你根据卡尔的操作，打印出他放了什么技能,若不能施放出技能，则输出” FFFFFFFK”。技能列表如下图所示：

*/
