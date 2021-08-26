#include<bits/stdc++.h>
using namespace std;
void merge(int a[], int low, int mid, int high)//��·�鲢����
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[100], R[100];

    for (i = 0; i < n1; i++) //ǰ���ת�浽L����
        L[i] = a[low + i];
    for (j = 0; j < n2; j++) //����ת�浽L����
        R[j] = a[mid + 1 + j];
    i = 0;
    j = 0;
    k = low;
    while (i < n1 && j < n2) //�鲢�ؼ�����
    {
        if (R[j] >= L[i])
            a[k] = L[i++];
        else
            a[k] = R[j++];
        k++;
    }
    while (i < n1) //���κ�һ����ʣ�����ֵ�����ȫ�����β���
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



        cout << "һ�˺�Ľ��:";

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

	cout << "������Ԫ�ظ���:\n";
	cin >> n;

	cout << "������Ԫ�أ�\n";
	for (int i = 0; i <n; i++)
		cin >> a[i];
			cnt = 0;
			mergeSort(a,0,n-1,n,cnt);


			cout << "������������\n";

			for (int i = 0; i < n; i++)
				cout << a[i] << " ";

			cout << "\n";

			cout << "������" << cnt << "��������������\n";
			return 0;
}
//��·�鲢�����С���� 
