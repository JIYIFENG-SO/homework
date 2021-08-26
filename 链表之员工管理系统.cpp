#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
struct employer{
	char num[20];
	char name[20];
	char sex[10];
	int  age;
	int  type;
	int  salary;
	char intime[20];
	char position[20];
	char leavetime[20];
	char reason[100];
};

typedef struct node{
	struct employer E;
	struct node *next;
}Node;

Node *start=(Node*)malloc(sizeof(Node));
Node *end=NULL;
FILE *fp;   //文件指针
void readfile();
void write();
void input();
void change();
void deletefile();
void query();
void display();
int main(){
	int selection;
	start->next=NULL;
	end=start;//end指向链表最后一个元素，end为空链表即为空 
	
	while(1){
		printf("1.从文件中读入   2.写入文件   3.输入信息   4.修改信息   5.删除信息   6.查询信息  7.显示信息  0.退出  \n");
		printf("Please select :");
		scanf("%d",&selection);
		
		switch(selection){
			case 0:exit(0);
			case 1:readfile();
			printf("\n");
			break;
			case 2:write();
			printf("\n");
			break;
			case 3:input();
			printf("\n");
			break;
			case 4:change();
			printf("\n");
			break;
			case 5:deletefile();
			printf("\n");
			break;
			case 6:query();
			printf("\n");
			break;
			case 7:display();
			printf("\n");
			break;
			default:printf("ERROR!\n");break;
		}
	}
	
	return 0;
}

void readfile(){
	char hu;
	printf(">>>>>>>>>>提示:载入将覆盖内存现有信息，是否继续载入[Y/N]?      ");
	scanf("%s", &hu);
	switch(hu)
	{
	case 'Y':
	case 'y': break;
	case 'N':
	case 'n': 
	default : return;
	}
	start->next = NULL;   //载入将清空内存现有链表信息
	Node *p,*q;
	int recordNum;											// 统计记录数
	if((fp = fopen("管理系统.txt", "r")) == NULL)		//打开文件，如果文件不存在提示
	{
		printf("\n文件打开失败！按任意键回主菜单。\n");							//不能打开
		getchar();
		getchar();
		return;
	}
	recordNum = 0;
	printf("\t\t\t\t文件资料\n");
	printf("工号    姓名        性别    年龄    入职时间       是否在职    薪水      职位      离职时间      离职原因\n");
	p = (Node*)malloc(sizeof(Node));
	p->next = NULL;
	while(!feof(fp))
	{
		fscanf(fp, "%s %s %s %d %s %d %d %s %s %s ",p->E.num,p->E.name,p->E.sex,&p->E.age,p->E.intime,&p->E.type,&p->E.salary,p->E.position,p->E.leavetime,p->E.reason);
		printf("%-7s %-11s %-8s ",p->E.num,p->E.name,p->E.sex);
	    printf("%-7d %-16s %-8d ",p->E.age,p->E.intime,p->E.type);
	    printf("%-9d %-11s %-15s ",p->E.salary,p->E.position,p->E.leavetime);
	    printf("%-9s ",p->E.reason);
		printf("\n");

		if(start->next == NULL)   //记录链表起始位置
		{
			start->next = p;
			q = (Node*)malloc(sizeof(Node));   //开辟一个新节点
			p->next = q;    //指向新节点
			end = p;     //记录末尾节点
			p = q;      //移动至新节点
		}
		else
		{
			end->next = p ;
			q = (Node*)malloc(sizeof(Node));   //开辟一个新节点
			p->next = q;    //指向新节点
			end = p;     //记录末尾节点
			p = q;      //移动至新节点
		}
		recordNum++;
	}
	end->next = NULL;   //清除最后创建的一个节点
	fclose(fp);
	printf("文件里共有%d条记录:\n",recordNum);
	getchar();
	printf("\n按任意键回主菜单。");
	getchar();
} 
void write()
{
	char hu;
	printf("是否覆盖原文件信息[Y/N]?      ");
	scanf("%s", &hu);
	switch(hu)
	{
	case 'Y':
	case 'y': break;
	case 'N':
	case 'n': 
	default : return;
	}
	Node *p;												 //指向文件的指针
	if(start->next==NULL)
	{
		printf("无可保存信息，按任意键回主菜单。");
		getchar();
		getchar();
		return;
	}
	else p=start->next;
	if((fp = fopen("管理系统.txt", "w+")) == NULL) //打开文件，并判断打开是否正常
		printf("can not open file\n");					// 打开文件出错
	while(p)
	{
		fprintf(fp,"\r\n%s %s %s %d %s %d %d %s %s %s",&p->E.num,&p->E.name,&p->E.sex,p->E.age,&p->E.intime,p->E.type,p->E.salary,&p->E.position,&p->E.leavetime,&p->E.reason); 
		p=p->next;
	}
	fclose(fp);												//关闭文件
	printf("保存成功，按任意键回主菜单。");
	getchar();
	getchar();
}
void input(){
	char cont;//表示是否继续 
	Node *p;
	do{
		p=(Node*)malloc(sizeof(Node));
		printf("请你输入职工的工号和姓名\n");
		scanf("%s%s",p->E.num,p->E.name);
		printf("请输入职工的性别（man or woman)\n");
		scanf("%s",p->E.sex);
		printf("请输入职工年龄\n");
		scanf("%d",&p->E.age);
		printf("请输入该职工的入职时间\n");
		scanf("%s",p->E.intime);
		printf("请输入该职工的类型，在职人员请输入1，离职人员请输入0\n"); 
		scanf("%d",&p->E.type);
		printf("请输入该职工的薪水，如已经离职，输入0\n"); 
		scanf("%d",&p->E.salary);
		printf("请输入该职工的职位，如已离职，输入no\n");
		scanf("%s",p->E.position);
		printf("请输入该职工的离职时间,如未离职，请输入no\n");
		scanf("%s",p->E.leavetime);
		printf("请输入该职工离职原因,如未离职，请输入no\n");
		scanf("%s",p->E.reason);
		p->next=NULL; 
		//加入到链表尾部 
		end->next=p;
		end=p;
		printf("Continue?(y/n):");
		scanf(" %c",&cont);
	} while(cont=='Y'||cont=='y');
	printf("input!\n");
}
void change(){
   int flag=0;
   Node *p;
   int choice; 
   char Cname[20];
   p=start->next;
   printf("请输入要修改的人的姓名");
   scanf("%s",Cname);
   while(p){
   	if(strcmp(Cname,p->E.name)==0){
   		flag=1;
   		printf("请输入你要修改的项目\n");
		printf("1.工号  2.姓名  3.年龄  4.入职时间  5.是否在职   6.薪水  7.职位  8.离职时间  9.离职原因  10.性别\n");
		printf("请输入你的选择\n"); 
		scanf("%d",&choice);
   		switch(choice){
   			case 1:printf("其原工号为%s,请输入其新工号\n",p->E.num);
   			        scanf("%s",p->E.num);
   			        break;
   			case 2:printf("其原姓名为%s,请输入其新姓名\n",p->E.name);
   			        scanf("%s",p->E.name);
   			        break;
		    case 3:printf("其原年龄为%d,请输入其新年龄\n",p->E.age);
   			        scanf("%d",&p->E.age); 
				    break;
		    case 4:printf("其原入职时间为%s,请输入其入职时间\n",p->E.intime);
   			        scanf("%s",p->E.intime);
   			        break;
   			case 5:printf("其原在职情况为%d,请输入其新在职情况\n",p->E.type);
   			        scanf("%d",&p->E.type);
   			        break;
		    case 6:printf("其原薪水为%d,请输入其新薪水\n",p->E.salary);
   			        scanf("%d",&p->E.salary); 
				    break;
		    case 7:printf("其原职位为%s,请输入其新职位\n",p->E.position);
   			        scanf("%s",p->E.position);
   			        break;
   			case 8:printf("其原离职时间为%s,请输入其新离职时间\n",p->E.leavetime);
   			        scanf("%s",p->E.leavetime);
   			        break;
		    case 9:printf("其原离职原因因为%s,请输入其新离职原因\n",p->E.reason);
   			        scanf("%s",p->E.reason); 
				    break;    
			case 10:printf("其原性别%s,请输入其新性别\n",p->E.sex);
   			        scanf("%s",p->E.sex); 
				    break;                    
   			}
   			printf("修改成功\n");
   		}
    
   	p=p->next;
   }
   if(flag==0)
   printf("查无此人\n"); 
}
void deletefile(){
	Node *p,*q;
   char Cname[20];
   p=start->next;
   printf("请输入要删除的人的姓名");
   scanf("%s",Cname);
   while(p){
   	if(strcmp(Cname,p->E.name)==0){
   		printf("已删除%s的信息\n",p->E.name);//删除该记录 
   		q=start;
		while(q->next!=p)
		 q=q->next;
		 q->next=p->next;
		 if(p==end){
		 	end=q;
		 	end->next=NULL;
		 }
		  
		  free(p);
		  return ;
	}
    
   	p=p->next;
   }
	
}
void query(){
   int flag=0;
   Node *p;
   int choice; 
   char Cname[20];
   p=start->next;
   printf("请输入要查找的人的姓名");
   scanf("%s",Cname);
   while(p){
   	if(strcmp(Cname,p->E.name)==0){
   		flag=1;
   		printf("请输入你要查找的项目\n");
		printf("1.工号  2.姓名  3.年龄  4.入职时间  5.是否在职   6.薪水  7.职位  8.离职时间  9.离职原因  10.性别\n");
		printf("请输入你的选择\n"); 
		scanf("%d",&choice);
   		switch(choice){
   			case 1:printf("其工号为%s\n",p->E.num);
   			        break;
   			case 2:printf("其姓名为%s\n",p->E.name);
   			        break;
		    case 3:printf("其年龄为%d\n",p->E.age); 
				    break;
		    case 4:printf("其入职时间为%s\n",p->E.intime);
   			        break;
   			case 5:if(p->E.type==1) 
   			       printf("该职工仍在职\n");
			       else
			       printf("该职工已离职\n");
   			       break;
		    case 6:printf("其薪水为%d\n",p->E.salary);
				   break;
		    case 7:printf("其职位为%s\n",p->E.position);
   			        break;
   			case 8:printf("其离职时间为%s\n",p->E.leavetime);
   			        break;
		    case 9:printf("其离职原因因为%s\n",p->E.reason); 
				    break;    
			case 10:printf("其性别%s\n",p->E.sex);
				    break;                    
   			}
   		}
    
   	p=p->next;
   }
   if(flag==0)
   printf("查无此人\n"); 
}
void display(){
	Node *p;
	p=start->next;
	printf("工号    姓名        性别    年龄    入职时间       是否在职    薪水      职位      离职时间      离职原因\n");
	                       
	while(p){
		printf("%-7s %-11s %-8s ",p->E.num,p->E.name,p->E.sex);
	    printf("%-7d %-16s %-8d ",p->E.age,p->E.intime,p->E.type);
	    printf("%-9d %-11s %-15s ",p->E.salary,p->E.position,p->E.leavetime);
	    printf("%-9s ",p->E.reason);
		printf("\n");
		p=p->next;
	} 
}
