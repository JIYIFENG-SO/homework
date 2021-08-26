#include<stdio.h>
#include<stdlib.h>

struct Space{
	int car;		
	int into_time;	
	char empty;		 
}space[10];
typedef struct infor{
	char state;		
	int car;		
	int time;		
	struct infor *next;
}Infor;

Infor *creat_infor();
int main(void)
{
	int n;
	scanf("%d",&n);
	
	
	int i;
	for(i=0; i<n; i++){
		space[i].empty = 'Y';
	} 
	
	
	Infor *head = creat_infor();
	int cnt = 0; 		
	int rret = 0;		
	int out_time = 0;	
	
	Infor *p = head;
	while(p){
		if(p->state == 'A'){
			
			for(i=0; i<n; i++){ 
				if(space[i].empty == 'Y'){
					
					if(out_time){
						p->time = out_time;
						out_time = 0;	
					}
					
					space[i].car = p->car;
					space[i].into_time = p->time;
					space[i].empty = 'N';		
					p->state = '0'; 			 
					printf("car#%d in parking space #%d\n",space[i].car,i+1);
					cnt++;						
					break;
				}
			}
			
			if(i == n){
				printf("car#%d waiting\n",p->car);
				rret++;		 
			}
		}else if(p->state == 'D'){
			int ret = 1;		
			for(i=0; i<n; i++){
				if(space[i].car == p->car){
					printf("car#%d out,parking time %d\n",space[i].car,p->time-space[i].into_time);
					 
					if(rret){
						out_time = p->time;
						p->state = '0'; 
						rret--;
						p = head;
					}
					cnt--;
					for(i; i<n-1; i++){
						space[i].car = space[i+1].car;
						space[i].empty = space[i+1].empty;
						space[i].into_time = space[i+1].into_time;
					}
					space[i].empty = 'Y';
					p->state = '0'; 
					ret = 0;
					break;
				}
			}
			if(ret){
				printf("the car not in park\n");
			}
		}
		p = p->next;
	}
	
	
	return 0;
} 


Infor *creat_infor(){
	Infor *head = NULL;
	char state;
	int car;
	int time;
	do{
		fflush(stdin);
		scanf("%c",&state);
		scanf("%d%d",&car,&time);
		if(state != 'E'){
			Infor *p = (Infor*)malloc(sizeof(Infor));
			p->state = state;
			p->car = car;
			p->time = time;
			p->next = NULL;
			Infor *last = head;
			
			if(last != NULL){
				while(last->next){
					last = last->next;
				}
				last->next = p;
			}else{
				head = p;
			}			
		}		
	}while( state != 'E');
	return head;
} /*����һ������ͣ��n������������ͣ��������ֻ��һ�����ſ��Թ���������������������ͣ����ʱ����Ⱥ�������δ�ͣ��������������ſڴ�ͣ�� (�����ȵ���ĵ�һ����ͣ����ͣ������������) �����ͣ�����ѷ���n���������Ժ󵽴�ĳ���ֻ����ͣ����������ı���ϵȴ���һ��ͣ�������г����ߣ������ڱ���ϵĵ�һ�������Խ���ͣ������ͣ����������ĳ����Ҫ���ߣ�������֮�����ͣ�����ĳ����������˳�ͣ����Ϊ����·�����俪��ͣ��������Щ��������ԭ���Ĵ��������ÿ�������뿪ͣ����ʱ����Ӧ��������ͣ������ͣ����ʱ�䳤�̽��ѣ�ͣ���ڱ���ϵĳ�����ͣ���ѡ���д����Ը�ͣ�������й���*/
