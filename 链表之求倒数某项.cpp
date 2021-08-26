#include<stdio.h>
#include <iostream>
using namespace std;
typedef struct LNode {
	int  data;
	struct LNode* next;
}LNode,* Linklist;
int main(void){
    int n,num,i,cnt=0;
    Linklist L,p;
    L=new LNode;
    L->next=NULL;
    scanf("%d",&n);
    while(1){
       scanf("%d",&num);
       if(num<0)
       break;
       p=new LNode;
       p->data=num;
       p->next=L->next;
       L->next=p;
       cnt++;
    }
    p=L;
    if(n>cnt)
        printf("NULL");
    else{
    for(i=1;i<=n;i++){
       p=p->next;
    }
    printf("%d",p->data);
    }
}
/*给定一系列正整数，请设计一个尽可能高效的算法，查找倒数第K个位置上的数字。

输入格式:
输入首先给出一个正整数K，随后是若干非负整数，最后以一个负整数表示结尾（该负数不算在序列内，不要处理）。

输出格式:
输出倒数第K个位置上的数据。如果这个位置不存在，输出错误信息NULL*/
