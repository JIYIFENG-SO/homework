#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define ElemType int
#define  KeyType int
/* 二叉排序树的节点结构定义 */
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
	printf("输入节点数量"); 
	scanf("%d",&n);
	printf("输入各个节点的数据\n");
	for (i = 0; i < n; i++) {
		scanf("%d",&e);
	    InsertBST(&T,e);
	}
}
int SearchBST(BiTree T,KeyType key,BiTree f,BiTree *p){
    //如果 T 指针为空，说明查找失败，令 p 指针指向查找过程中最后一个叶子结点，并返回查找失败的信息
    if (!T){
        *p=f;
        return FALSE;
    }
    //如果相等，令 p 指针指向该关键字，并返回查找成功信息
    else if(key==T->data){
        *p=T;
        return TRUE;
    }
    //如果 key 值比 T 根结点的值小，则查找其左子树；反之，查找其右子树
    else if(key<T->data){
        return SearchBST(T->lchild,key,T,p);
    }else{
        return SearchBST(T->rchild,key,T,p);
    }
}
int InsertBST(BiTree *T,ElemType e){
    BiTree p=NULL;
    //如果查找不成功，需做插入操作
    if (!SearchBST((*T), e,NULL,&p)) {
        //初始化插入结点
        BiTree s=(BiTree)malloc(sizeof(BiTree));
        s->data=e;
        s->lchild=s->rchild=NULL;
        //如果 p 为NULL，说明该二叉排序树为空树，此时插入的结点为整棵树的根结点
        if (!p) {
            *T=s;
        }
        //如果 p 不为 NULL，则 p 指向的为查找失败的最后一个叶子结点，只需要通过比较 p 和 e 的值确定 s 到底是 p 的左孩子还是右孩子
        else if(e < p->data){
            p->lchild=s;
        }else{
            p->rchild=s;
        }
        return TRUE;
    }
    //如果查找成功，不需要做插入操作，插入失败
    return FALSE;
}



void midtravel(BiTree t)//中序输出
{
    if(t == NULL){
        return ;
    }
    midtravel(t->lchild);
    printf("%d ", t->data);
    midtravel(t->rchild);
}

int main(int argc, char** argv) {
	int n,e;//n表示你的选择，e是后面使用 
    BiTree T = NULL;
	while(1){
  printf("1.创建二叉排序树  2.删除二叉排序树的节点\n");
	printf("请输入你的选择\n"); 
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

