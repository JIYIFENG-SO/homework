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
/*���ַ�������ʽ����һ�ö��������������У����ַ��ǡ�#��, ��ʾ�ö������ǿ�����������ַ�����Ӧ��������Ԫ�ء�������Ӧ�������У�����������ʽ�洢�ṹ�Ķ�������Ȼ����������ö����������������ݡ�

�����ʽ:
�ַ�����ʽ���������У���������������Ϊ�����ַ���

�����ʽ:
����������*/
