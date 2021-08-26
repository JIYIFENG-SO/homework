#include<bits/stdc++.h>
using namespace std;
void quickSort(int* a, int begin, int end,int n,int &cnt)//快速排序
{
       
       if (begin < end)
       {
           int temp = a[begin]; //将区间的第一个数作为基准数
           int i = begin; 
           int j = end; 
           while (i < j)
           {
               
               //不满足条件时跳出循环，此时的j对应的元素小于基准元素
               while (i<j && a[j] > temp)
                   j--;
               //将右边小于等于基准元素的数填入右边相应位置
               a[i] = a[j];
               //当左边的数小于等于基准数时跳过
         
              
               while (i < j && a[i] <= temp)
                   i++;
           //不满足条件时跳出循环，此时的i对应的元素是大于等于基准元素
               a[j] = a[i];
           }
         
           a[i] = temp;
           //此时的i即为基准元素的位置
         
           quickSort(a, begin, i - 1,n,cnt);
           quickSort(a, i + 1, end,n,cnt);


           cout << "一趟后的结果:";

           for (int k = 0; k < n; k++)
               cout << a[k] << " ";

           cnt++;

           cout << "\n";



       }
       //如果区间只有一个数，则返回
       else
           return;
   }
int main()
{
	int x;
	int n;
	int a[100];
	int cnt = 0;

	cout << "请输入元素个数:\n";
	cin >> n;

	cout << "请输入元素：\n";
	for (int i = 0; i <n; i++)
		cin >> a[i];
			cnt = 0;
			quickSort(a,0,n-1,n,cnt);
			cout << "最终排序结果：\n";
			for (int i = 0; i < n; i++)
				cout << a[i] << " ";

			cout << "\n";

			cout << "经历过" << cnt << "趟排序，数组有序\n";

}
//快速排序从小到大 
