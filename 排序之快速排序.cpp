#include<bits/stdc++.h>
using namespace std;
void quickSort(int* a, int begin, int end,int n,int &cnt)//��������
{
       
       if (begin < end)
       {
           int temp = a[begin]; //������ĵ�һ������Ϊ��׼��
           int i = begin; 
           int j = end; 
           while (i < j)
           {
               
               //����������ʱ����ѭ������ʱ��j��Ӧ��Ԫ��С�ڻ�׼Ԫ��
               while (i<j && a[j] > temp)
                   j--;
               //���ұ�С�ڵ��ڻ�׼Ԫ�ص��������ұ���Ӧλ��
               a[i] = a[j];
               //����ߵ���С�ڵ��ڻ�׼��ʱ����
         
              
               while (i < j && a[i] <= temp)
                   i++;
           //����������ʱ����ѭ������ʱ��i��Ӧ��Ԫ���Ǵ��ڵ��ڻ�׼Ԫ��
               a[j] = a[i];
           }
         
           a[i] = temp;
           //��ʱ��i��Ϊ��׼Ԫ�ص�λ��
         
           quickSort(a, begin, i - 1,n,cnt);
           quickSort(a, i + 1, end,n,cnt);


           cout << "һ�˺�Ľ��:";

           for (int k = 0; k < n; k++)
               cout << a[k] << " ";

           cnt++;

           cout << "\n";



       }
       //�������ֻ��һ�������򷵻�
       else
           return;
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
			quickSort(a,0,n-1,n,cnt);
			cout << "������������\n";
			for (int i = 0; i < n; i++)
				cout << a[i] << " ";

			cout << "\n";

			cout << "������" << cnt << "��������������\n";

}
//���������С���� 
