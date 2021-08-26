#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define ElemType int
#define  KeyType int
/* �����������Ľڵ�ṹ���� */
typedef struct BiTNode
{
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;
void CreateBST(BiTree& T);
int SearchBST(BiTree T,KeyType key,BiTree f,BiTree *p);
int InsertBST(BiTree *T,ElemType e);


void CreateBST(BiTree& T)
{
    int n, i,e;
	printf("����ڵ�����"); 
	scanf("%d",&n);
	printf("��������ڵ������\n");
	for (i = 0; i < n; i++) {
		scanf("%d",&e);
	    InsertBST(&T,e);
	}
}
int SearchBST(BiTree T,KeyType key,BiTree f,BiTree *p){
    //��� T ָ��Ϊ�գ�˵������ʧ�ܣ��� p ָ��ָ����ҹ��������һ��Ҷ�ӽ�㣬�����ز���ʧ�ܵ���Ϣ
    if (!T){
        *p=f;
        return FALSE;
    }
    //�����ȣ��� p ָ��ָ��ùؼ��֣������ز��ҳɹ���Ϣ
    else if(key==T->data){
        *p=T;
        return TRUE;
    }
    //��� key ֵ�� T ������ֵС�������������������֮��������������
    else if(key<T->data){
        return SearchBST(T->lchild,key,T,p);
    }else{
        return SearchBST(T->rchild,key,T,p);
    }
}
int InsertBST(BiTree *T,ElemType e){
    BiTree p=NULL;
    //������Ҳ��ɹ��������������
    if (!SearchBST((*T), e,NULL,&p)) {
        //��ʼ��������
        BiTree s=(BiTree)malloc(sizeof(BiTree));
        s->data=e;
        s->lchild=s->rchild=NULL;
        //��� p ΪNULL��˵���ö���������Ϊ��������ʱ����Ľ��Ϊ�������ĸ����
        if (!p) {
            *T=s;
        }
        //��� p ��Ϊ NULL���� p ָ���Ϊ����ʧ�ܵ����һ��Ҷ�ӽ�㣬ֻ��Ҫͨ���Ƚ� p �� e ��ֵȷ�� s ������ p �����ӻ����Һ���
        else if(e < p->data){
            p->lchild=s;
        }else{
            p->rchild=s;
        }
        return TRUE;
    }
    //������ҳɹ�������Ҫ���������������ʧ��
    return FALSE;
}



void midtravel(BiTree t)//�������
{
    if(t == NULL){
        return ;
    }
    midtravel(t->lchild);
    printf("%d ", t->data);
    midtravel(t->rchild);
}

int main(int argc, char** argv) {
	int n,e;//n��ʾ���ѡ��e�Ǻ���ʹ�� 
    BiTree T = NULL;
	while(1){
  printf("1.��������������  2.ɾ�������������Ľڵ�\n");
	printf("���������ѡ��\n"); 
	scanf("%d",&n);
	switch(n) {
		
		case 1:
			CreateBST(T);
	    
		break;
		case 2:
			
		midtravel(T);
		printf("\n");
	
		  break;
	    
	}
  }
   
	return 0;
}

