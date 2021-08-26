#include<bits/stdc++.h>
using namespace std;
void merge(int a[], int low, int mid, int high)//二路归并排序
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[100], R[100];

    for (i = 0; i < n1; i++) //前半段转存到L数组
        L[i] = a[low + i];
    for (j = 0; j < n2; j++) //后半段转存到L数组
        R[j] = a[mid + 1 + j];
    i = 0;
    j = 0;
    k = low;
    while (i < n1 && j < n2) //归并关键代码
    {
        if (R[j] >= L[i])
            a[k] = L[i++];
        else
            a[k] = R[j++];
        k++;
    }
    while (i < n1) //将任何一个有剩余数字的数组全部依次并入
        a[k++] = L[i++];
    while (j < n2)
        a[k++] = R[j++];
}
void mergeSort(int a[], int low, int high,int n,int &cnt)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid,n,cnt);
        mergeSort(a, mid + 1, high,n,cnt);
        merge(a, low, mid, high);



        cout << "一趟后的结果:";

        for (int k = 0; k < n; k++)
            cout << a[k] << " ";

        cnt++;

        cout << "\n";
        
    }
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
			mergeSort(a,0,n-1,n,cnt);


			cout << "最终排序结果：\n";

			for (int i = 0; i < n; i++)
				cout << a[i] << " ";

			cout << "\n";

			cout << "经历过" << cnt << "趟排序，数组有序\n";
			return 0;
}
//二路归并排序从小到大 
