#include<bits/stdc++.h>
using namespace std;
void dichotomysort(int a[], int n) //�۰��������
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

            cout << "һ�˺���:";

            for (int k = 0; k < n; k++)
                cout << a[k]<<" ";


            cout << "\n";

           
    }
   
    cout << "������������\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        
        cout << "\n";

        cout << "������" << n << "��������������\n";


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
    dichotomysort(a,n);
}
/*����֮�۰���������С����*/ 
