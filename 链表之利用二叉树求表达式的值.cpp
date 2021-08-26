#include<bits/stdc++.h> 
using namespace std;
typedef struct Node{
	Node(const char &s):data(s),Lchild(0),Rchild(0){}
	char data;
	struct Node *Lchild,*Rchild;
}Node,*Bitree;
stack<Bitree>stdata;
stack<char>stop;
map<char,int> isp,icp;
    
int Calculate(int ldata,int rdata,char op){
	int result;
	switch(op){
		case '+':return ldata+rdata;
		case '-':return ldata-rdata;
		case '*':return ldata*rdata;
		case '/':return ldata/rdata;
	}
}
Bitree creatfuhaotree(){
	string str;
	char numop,first,ding,ch;
	int i=0,num,result;
	Bitree ldata,rdata; 
	printf("输入一个以#结束的字符串:\n");
	cin>>str;
	
	isp['#']=0,icp['#']=0;
	isp['(']=1,icp['(']=10;
	isp['*']=5,icp['*']=4;
	isp['/']=5,icp['/']=4;
	isp['+']=3,icp['+']=2;
	isp['-']=3,icp['-']=2;
	isp[')']=10,icp[')']=1;
	stop.push('#');
	while(!stop.empty()){
		numop=str[i];
		printf("%c",str[i]);
		ding=stop.top();
		if(numop>='0'&&numop<='9'){
			stdata.push(new Node(numop));
			i++;
			continue;
		}
		else if(icp[numop]>isp[ding]){
			stop.push(numop);
			i++; 
		}
		else if(icp[numop]<isp[ding]){
			rdata=stdata.top();
			stdata.pop();
			ldata=stdata.top();
			stdata.pop();	
			first=stop.top();
			stop.pop();
			Bitree p=new Node(first);
			p->Lchild=ldata;
			p->Rchild=rdata;
			//printf("%d",result);
			stdata.push(p);
		}
		else{
			stop.pop();
			i++;
		}
	}
	return stdata.top();
}

void menu(){
	printf("1.构造符号树  2.输出波兰符号  3.输出逆波兰符号  4.递归求树的值  5.还原带括号的中缀表达式\n"); 
}
void pretravel(Bitree T){
	if(T){
		printf("%c",T->data);
		pretravel(T->Lchild);
		pretravel(T->Rchild);
	}
}
void lasttravel(Bitree T){
	if(T){
		lasttravel(T->Lchild);
		lasttravel(T->Rchild);
		printf("%c",T->data);
	}
}
int Eval(Bitree T){
	if(T->Lchild==0&&T->Rchild==0)
	  return (T->data-'0');
	return Calculate(Eval(T->Lchild),Eval(T->Rchild),T->data);
}
int main(void){
	int choice,sum;
	Bitree T;
	while(1){
		menu();
		printf("请输入你的选择");
		scanf("%d",&choice);
		switch(choice){
			case 1:T=creatfuhaotree();
			printf("创建二叉排序树成功\n"); 
			break;
			case 2:pretravel(T);
			printf("\n");
			break;
			case 3:lasttravel(T);
			printf("\n");
			break;
			case 4:
				sum=Eval(T);
				printf("%d\n",sum);
		}
		
	}
	
}
