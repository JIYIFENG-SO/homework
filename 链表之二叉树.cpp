#include<bits/stdc++.h>
using namespace std;
typedef struct BiTNode{
	char data;
	struct BiTNode *Lchild,*Rchild;
	int Ltag,Rtag; 
}BiTNode,*BiTree;
void CreateBitree(BiTree &T){
	char ch;
	cin>>ch;
	T=(BiTree)malloc(sizeof(BiTNode));
	if(ch=='#')
	T=NULL;
	else{
		T->data=ch;
		CreateBitree(T->Lchild);
		CreateBitree(T->Rchild);
    }
}
void Midtravel(BiTree T){
	if (T==NULL)
	return  ;
	else{
		Midtravel(T->Lchild);
		printf("%c",T->data);
		Midtravel(T->Rchild);
	}
}
int main(void){
    BiTree T;
	CreateBitree(T);
    Midtravel(T);
    return 0;
}
/*以字符串的形式定义一棵二叉树的先序序列，若字符是‘#’, 表示该二叉树是空树，否则该字符是相应结点的数据元素。读入相应先序序列，建立二叉链式存储结构的二叉树，然后中序遍历该二叉树并输出结点数据。

输入格式:
字符串形式的先序序列（即结点的数据类型为单个字符）

输出格式:
中序遍历结果*/
