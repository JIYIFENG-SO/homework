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



    printf("�����뵥����ĳ��ȣ�\n");

    scanf("%d", &n);



    L = new LNode;

    L->next = NULL;



    



    printf("����������Ԫ�أ�\n");

    for (int i = 1; i <= n; i++)

    {

        p = new LNode;

        scanf("%d", &x);

        

        p->data = x;

        p->next = L->next;//ͷ�ڵ���Զָ��ԭ����ͷ���

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

        printf("�����ɾ��Ԫ��λ�򲻺Ϸ�!\n");

        */

    return cnt;                          



}

int main()

{

LinkList L=NULL;

int x;

int cnt;



while (1) {


printf("1.ͷ�巨�������� 2.��ӡ 3.ɾ��ĳһ�ڵ�\n"); 
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

printf("������Ҫɾ����λ��:\n");

scanf("%d", &n);

cnt=LinkListDelete(L,n);



if (n > --cnt || n <= 0)

printf("�����ɾ��Ԫ��λ�򲻺Ϸ�!\n");

break;


case 0:

return 0;

}
}
}
