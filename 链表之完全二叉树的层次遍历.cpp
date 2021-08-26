#include<bits/stdc++.h>
using namespace std;
int k,n; 
int m[100];
void F(int p , int a[])
{
    if(p > n) return ;
    F(p<<1 , a);
    F(p<<1|1 , a);
    m[p] = a[k++];
}
int main()
{

    cin>>n;
    int locate[36];
    k = 1 ;
    for(int i = 1 ; i <= n ; i++) cin>>locate[i];
    F(1,locate);
    for(int i = 1 ; i <= n ;i++){
        if(i==1) cout<<m[i];
        else cout<<" "<<m[i];
    }
    
    return 0;
}
/*一个二叉树，如果每一个层的结点数都达到最大值，则这个二叉树就是完美二叉树。对于深度为 D 的，有 N 个结点的二叉树，若其结点对应于相同深度完美二叉树的层序遍历的前 N 个结点，这样的树就是完全二叉树。

给定一棵完全二叉树的后序遍历，请你给出这棵树的层序遍历结果。

输入格式：
输入在第一行中给出正整数 N（≤30），即树中结点个数。第二行给出后序遍历序列，为 N 个不超过 100 的正整数。同一行中所有数字都以空格分隔。

输出格式：
在一行中输出该树的层序遍历序列。所有数字都以 1 个空格分隔，行首尾不得有多余空格*/ 
