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
FILE *fp;   //�ļ�ָ��
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
	end=start;//endָ���������һ��Ԫ�أ�endΪ������Ϊ�� 
	
	while(1){
		printf("1.���ļ��ж���   2.д���ļ�   3.������Ϣ   4.�޸���Ϣ   5.ɾ����Ϣ   6.��ѯ��Ϣ  7.��ʾ��Ϣ  0.�˳�  \n");
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
	printf(">>>>>>>>>>��ʾ:���뽫�����ڴ�������Ϣ���Ƿ��������[Y/N]?      ");
	scanf("%s", &hu);
	switch(hu)
	{
	case 'Y':
	case 'y': break;
	case 'N':
	case 'n': 
	default : return;
	}
	start->next = NULL;   //���뽫����ڴ�����������Ϣ
	Node *p,*q;
	int recordNum;											// ͳ�Ƽ�¼��
	if((fp = fopen("����ϵͳ.txt", "r")) == NULL)		//���ļ�������ļ���������ʾ
	{
		printf("\n�ļ���ʧ�ܣ�������������˵���\n");							//���ܴ�
		getchar();
		getchar();
		return;
	}
	recordNum = 0;
	printf("\t\t\t\t�ļ�����\n");
	printf("����    ����        �Ա�    ����    ��ְʱ��       �Ƿ���ְ    нˮ      ְλ      ��ְʱ��      ��ְԭ��\n");
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

		if(start->next == NULL)   //��¼������ʼλ��
		{
			start->next = p;
			q = (Node*)malloc(sizeof(Node));   //����һ���½ڵ�
			p->next = q;    //ָ���½ڵ�
			end = p;     //��¼ĩβ�ڵ�
			p = q;      //�ƶ����½ڵ�
		}
		else
		{
			end->next = p ;
			q = (Node*)malloc(sizeof(Node));   //����һ���½ڵ�
			p->next = q;    //ָ���½ڵ�
			end = p;     //��¼ĩβ�ڵ�
			p = q;      //�ƶ����½ڵ�
		}
		recordNum++;
	}
	end->next = NULL;   //�����󴴽���һ���ڵ�
	fclose(fp);
	printf("�ļ��ﹲ��%d����¼:\n",recordNum);
	getchar();
	printf("\n������������˵���");
	getchar();
} 
void write()
{
	char hu;
	printf("�Ƿ񸲸�ԭ�ļ���Ϣ[Y/N]?      ");
	scanf("%s", &hu);
	switch(hu)
	{
	case 'Y':
	case 'y': break;
	case 'N':
	case 'n': 
	default : return;
	}
	Node *p;												 //ָ���ļ���ָ��
	if(start->next==NULL)
	{
		printf("�޿ɱ�����Ϣ��������������˵���");
		getchar();
		getchar();
		return;
	}
	else p=start->next;
	if((fp = fopen("����ϵͳ.txt", "w+")) == NULL) //���ļ������жϴ��Ƿ�����
		printf("can not open file\n");					// ���ļ�����
	while(p)
	{
		fprintf(fp,"\r\n%s %s %s %d %s %d %d %s %s %s",&p->E.num,&p->E.name,&p->E.sex,p->E.age,&p->E.intime,p->E.type,p->E.salary,&p->E.position,&p->E.leavetime,&p->E.reason); 
		p=p->next;
	}
	fclose(fp);												//�ر��ļ�
	printf("����ɹ���������������˵���");
	getchar();
	getchar();
}
void input(){
	char cont;//��ʾ�Ƿ���� 
	Node *p;
	do{
		p=(Node*)malloc(sizeof(Node));
		printf("��������ְ���Ĺ��ź�����\n");
		scanf("%s%s",p->E.num,p->E.name);
		printf("������ְ�����Ա�man or woman)\n");
		scanf("%s",p->E.sex);
		printf("������ְ������\n");
		scanf("%d",&p->E.age);
		printf("�������ְ������ְʱ��\n");
		scanf("%s",p->E.intime);
		printf("�������ְ�������ͣ���ְ��Ա������1����ְ��Ա������0\n"); 
		scanf("%d",&p->E.type);
		printf("�������ְ����нˮ�����Ѿ���ְ������0\n"); 
		scanf("%d",&p->E.salary);
		printf("�������ְ����ְλ��������ְ������no\n");
		scanf("%s",p->E.position);
		printf("�������ְ������ְʱ��,��δ��ְ��������no\n");
		scanf("%s",p->E.leavetime);
		printf("�������ְ����ְԭ��,��δ��ְ��������no\n");
		scanf("%s",p->E.reason);
		p->next=NULL; 
		//���뵽����β�� 
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
   printf("������Ҫ�޸ĵ��˵�����");
   scanf("%s",Cname);
   while(p){
   	if(strcmp(Cname,p->E.name)==0){
   		flag=1;
   		printf("��������Ҫ�޸ĵ���Ŀ\n");
		printf("1.����  2.����  3.����  4.��ְʱ��  5.�Ƿ���ְ   6.нˮ  7.ְλ  8.��ְʱ��  9.��ְԭ��  10.�Ա�\n");
		printf("���������ѡ��\n"); 
		scanf("%d",&choice);
   		switch(choice){
   			case 1:printf("��ԭ����Ϊ%s,���������¹���\n",p->E.num);
   			        scanf("%s",p->E.num);
   			        break;
   			case 2:printf("��ԭ����Ϊ%s,��������������\n",p->E.name);
   			        scanf("%s",p->E.name);
   			        break;
		    case 3:printf("��ԭ����Ϊ%d,��������������\n",p->E.age);
   			        scanf("%d",&p->E.age); 
				    break;
		    case 4:printf("��ԭ��ְʱ��Ϊ%s,����������ְʱ��\n",p->E.intime);
   			        scanf("%s",p->E.intime);
   			        break;
   			case 5:printf("��ԭ��ְ���Ϊ%d,������������ְ���\n",p->E.type);
   			        scanf("%d",&p->E.type);
   			        break;
		    case 6:printf("��ԭнˮΪ%d,����������нˮ\n",p->E.salary);
   			        scanf("%d",&p->E.salary); 
				    break;
		    case 7:printf("��ԭְλΪ%s,����������ְλ\n",p->E.position);
   			        scanf("%s",p->E.position);
   			        break;
   			case 8:printf("��ԭ��ְʱ��Ϊ%s,������������ְʱ��\n",p->E.leavetime);
   			        scanf("%s",p->E.leavetime);
   			        break;
		    case 9:printf("��ԭ��ְԭ����Ϊ%s,������������ְԭ��\n",p->E.reason);
   			        scanf("%s",p->E.reason); 
				    break;    
			case 10:printf("��ԭ�Ա�%s,�����������Ա�\n",p->E.sex);
   			        scanf("%s",p->E.sex); 
				    break;                    
   			}
   			printf("�޸ĳɹ�\n");
   		}
    
   	p=p->next;
   }
   if(flag==0)
   printf("���޴���\n"); 
}
void deletefile(){
	Node *p,*q;
   char Cname[20];
   p=start->next;
   printf("������Ҫɾ�����˵�����");
   scanf("%s",Cname);
   while(p){
   	if(strcmp(Cname,p->E.name)==0){
   		printf("��ɾ��%s����Ϣ\n",p->E.name);//ɾ���ü�¼ 
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
   printf("������Ҫ���ҵ��˵�����");
   scanf("%s",Cname);
   while(p){
   	if(strcmp(Cname,p->E.name)==0){
   		flag=1;
   		printf("��������Ҫ���ҵ���Ŀ\n");
		printf("1.����  2.����  3.����  4.��ְʱ��  5.�Ƿ���ְ   6.нˮ  7.ְλ  8.��ְʱ��  9.��ְԭ��  10.�Ա�\n");
		printf("���������ѡ��\n"); 
		scanf("%d",&choice);
   		switch(choice){
   			case 1:printf("�乤��Ϊ%s\n",p->E.num);
   			        break;
   			case 2:printf("������Ϊ%s\n",p->E.name);
   			        break;
		    case 3:printf("������Ϊ%d\n",p->E.age); 
				    break;
		    case 4:printf("����ְʱ��Ϊ%s\n",p->E.intime);
   			        break;
   			case 5:if(p->E.type==1) 
   			       printf("��ְ������ְ\n");
			       else
			       printf("��ְ������ְ\n");
   			       break;
		    case 6:printf("��нˮΪ%d\n",p->E.salary);
				   break;
		    case 7:printf("��ְλΪ%s\n",p->E.position);
   			        break;
   			case 8:printf("����ְʱ��Ϊ%s\n",p->E.leavetime);
   			        break;
		    case 9:printf("����ְԭ����Ϊ%s\n",p->E.reason); 
				    break;    
			case 10:printf("���Ա�%s\n",p->E.sex);
				    break;                    
   			}
   		}
    
   	p=p->next;
   }
   if(flag==0)
   printf("���޴���\n"); 
}
void display(){
	Node *p;
	p=start->next;
	printf("����    ����        �Ա�    ����    ��ְʱ��       �Ƿ���ְ    нˮ      ְλ      ��ְʱ��      ��ְԭ��\n");
	                       
	while(p){
		printf("%-7s %-11s %-8s ",p->E.num,p->E.name,p->E.sex);
	    printf("%-7d %-16s %-8d ",p->E.age,p->E.intime,p->E.type);
	    printf("%-9d %-11s %-15s ",p->E.salary,p->E.position,p->E.leavetime);
	    printf("%-9s ",p->E.reason);
		printf("\n");
		p=p->next;
	} 
}
