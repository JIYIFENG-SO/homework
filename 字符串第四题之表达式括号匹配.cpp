#include<stdio.h>
int main(void){
    char a[300];
    int i,count=0,flag=1;
    gets(a);
    for(i=0;a[i]!='@';i++){
        if(a[i]=='(')
            count++;
        if(a[i]==')')
            count--;
        if(count<0)
        flag=0;
    }
    if(count==0&&flag==1)
        printf("YES");
    else
        printf("NO");
    return 0;
    
}
//Æ¥ÅäÀ¨ºÅ 
