#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;



typedef struct LNode {

ElemType data;

struct LNode* next;

}LNode,* LinkList;

void InitLinkList2(LinkList& L) {

    int n;

    int x;

    LinkList p;

    LinkList q;



    printf("�����뵥����ĳ��ȣ�\n");

    scanf("%d", &n);



    L = new LNode;

    L->next = NULL;

    q = L;

    p = L->next;

    printf("����������Ԫ�أ�\n");



    for (int i = 1; i <= n; i++)

    {

        p = new LNode;

        scanf("%d", &x);

        p->data = x;

        p->next = NULL;

        q->next = p;

        q = q->next;



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
void LinkListInsert(LinkList& L) {

    int n, x;

    int cnt = 0;

    printf("����������λ��\n");

    scanf("%d", &n);



    printf("����������Ԫ�أ�\n");

    scanf("%d", &x);



    LinkList q = L;

    LinkList p;//�½ڵ�

    



    for (; q; q = q->next) {

        

        if (++cnt== n) {

            p = new LNode;

            p->data = x;

            p->next = q->next;

            q->next = p;



            break;

        }



        

    }



}
int main()

{

LinkList L=NULL;

int x;

int cnt;



while (1) {


printf("1.β�巨�������� 2.��ӡ 3.����Ԫ��\n"); 
scanf("%d", &x);



switch (x) {



case 1:

InitLinkList2(L);

break;
case 2:
LinkListOut(L);
break;
case 3:

LinkListInsert(L);

break;



case 0:

return 0;

}
}
}
