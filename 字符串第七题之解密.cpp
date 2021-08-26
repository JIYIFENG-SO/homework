#include<stdio.h>
int main(void){
    char a[60];
    int n,i;
    scanf("%d",&n);
    scanf("%s",a);
    n=n%26;
    for(i=0;a[i]!='\0';i++){
        if(a[i]+n<='z')
            a[i]=a[i]+n;
        else
            a[i]=a[i]-26+n;
        printf("%c",a[i]);
    }
    return 0;
}

/*某蒟蒻迷上了“小书童”，有一天登陆时忘记密码了（他没绑定邮箱or手机），于是便把问题抛给了神犇你。

题目描述
蒟蒻虽然忘记密码，但他还记得密码是由一个字符串组成。密码是由原文字符串（由不超过 50 个小写字母组成）中每个字母向后移动 nn 位形成的。z 的下一个字母是 a，如此循环。他现在找到了移动前的原文字符串及 nn，请你求出密码。*/
