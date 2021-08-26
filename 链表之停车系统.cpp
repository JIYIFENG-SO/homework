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
} /*设有一个可以停放n辆汽车的狭长停车场，它只有一个大门可以供车辆进出。车辆按到达停车场时间的先后次序依次从停车场最里面向大门口处停放 (即最先到达的第一辆车停放在停车场的最里面) 。如果停车场已放满n辆车，则以后到达的车辆只能在停车场大门外的便道上等待，一旦停车场内有车开走，则排在便道上的第一辆车可以进入停车场。停车场内如有某辆车要开走，则在它之后进入停车场的车都必须先退出停车场为它让路，待其开出停车场后，这些车辆再依原来的次序进场。每辆车在离开停车场时，都应根据它在停车场内停留的时间长短交费，停留在便道上的车不收停车费。编写程序对该停车场进行管理。*/
