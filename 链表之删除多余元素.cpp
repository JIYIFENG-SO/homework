#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;



typedef struct LNode {

ElemType data;

struct LNode* next;

}LNode,* LinkList;

void InitLinkList1(LinkList &L) {

    int n;

    int x;

    LinkList p;



    printf("请输入单链表的长度：\n");

    scanf("%d", &n);



    L = new LNode;

    L->next = NULL;



    



    printf("请输入数据元素：\n");

    for (int i = 1; i <= n; i++)

    {

        p = new LNode;

        scanf("%d", &x);

        

        p->data = x;

        p->next = L->next;//头节点永远指向原来的头结点

        L->next = p;

    }

    printf("\n");

}
void LinkListOut(LinkList &L){

    LinkList p=L->next;



    while (p) {

        printf("%d ", p->data);

        p = p->next;

    }

    

    printf("\n");

}
int LinkListDelete(LinkList& L,int n) {

   

    int cnt = 0;

    

    LinkList p = L;



    while (p) {

        cnt++;

        if (cnt == n&&p->next)

        {

            p->next = (p->next)->next;

        }

        

        p = p->next;

    }



   /* if (n > --cnt || n <= 0)

        printf("输入的删除元素位序不合法!\n");

        */

    return cnt;                          



}

int main()

{

LinkList L=NULL;

int x;

int cnt;



while (1) {


printf("1.头插法建立链表 2.打印 3.删除某一节点\n"); 
scanf("%d", &x);



switch (x) {



case 1:

InitLinkList1(L);

break;
case 2:
LinkListOut(L);
break;
case 3:

int n;

printf("请输入要删除的位序:\n");

scanf("%d", &n);

cnt=LinkListDelete(L,n);



if (n > --cnt || n <= 0)

printf("输入的删除元素位序不合法!\n");

break;


case 0:

return 0;

}
}
}
