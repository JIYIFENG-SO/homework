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
/*����һϵ���������������һ�������ܸ�Ч���㷨�����ҵ�����K��λ���ϵ����֡�

�����ʽ:
�������ȸ���һ��������K����������ɷǸ������������һ����������ʾ��β���ø��������������ڣ���Ҫ������

�����ʽ:
���������K��λ���ϵ����ݡ�������λ�ò����ڣ����������ϢNULL*/
