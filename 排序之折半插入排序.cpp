#include<bits/stdc++.h>
using namespace std;
void dichotomysort(int a[], int n) //折半插入排序
{

    int cnt = 0;

    int low;
    int high;
    int mid;
    int t;

    for (int i = 0; i <n; i++) {

        low = 0;
        high = i-1;
        t = a[i];

        while (low <= high) {
            mid = (low + high) / 2;

            if ( a[mid]>t )
                high = mid - 1;

            else
                low = mid + 1;
        }
     
 
        for (int j = i; j >low; j--) 
            a[j] = a[j-1];


            a[low] = t;

            cout << "一趟后结果:";

            for (int k = 0; k < n; k++)
                cout << a[k]<<" ";


            cout << "\n";

           
    }
   
    cout << "最终排序结果：\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        
        cout << "\n";

        cout << "经历过" << n << "趟排序，数组有序\n";


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
    dichotomysort(a,n);
}
/*排序之折半插入排序从小到大*/ 
