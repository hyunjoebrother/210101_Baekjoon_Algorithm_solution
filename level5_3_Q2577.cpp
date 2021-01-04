// 210103 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 5. 1���� �迭
// ���� 2577. ������ ���� -> ����!


/*
// SOL1) �� Ǯ�̰���

#include <iostream>
using namespace std;

#include <math.h> // �ŵ����� -> pow�Լ�
#include <algorithm> // sort

int a, b, c, multi;
int Array[100]; // abc �� ��� �� ���� ��¿� �迭

int N, num;
int j;


int main()
{
	// ù° �ٿ� A, B, C �Է� (100<= <1000)
	cin >> a >> b >> c;
	
	// a, b, c �� ���
	multi = a * b * c;
	//cout << "�� : " << multi << endl;

	// multi ���� �� �ڸ����� 10�� �ŵ��������� ���� �������� �迭�� �ֱ�
	int i;
	int multi1;


	// multi�� �� �ڸ��� num (N) ���ϱ�
	for (i = 0; i <= 9; i++) // 999 3�� ���ϸ� 9�ڸ�
	{
		multi1 = multi / pow(10, i);
		//cout << "�߰� multi : " << multi1 << endl;
		//cout << "i�� : " << i << endl;

		if ((multi1 < 10))
		{
			//cout << "if�� �߰� multi : " << multi1 << endl;
			num = i + 1;
			//cout << "num : " << num << endl << endl; // i+1�� ���� Ƚ���� �ִ� �ڸ���

			break;
		}
	}
	
	// multi �� �� �ڸ����� �迭�� �� ĭ�� ����
	for (i = num; i >= 0; i--) // ex. 123*456*789 �� �� 8�ڸ� ����
	{
		//cout << "������ �� �� : " << multi << endl;
		Array[i] = multi / pow(10, i); 

		//cout << "�迭 �� : " << Array[i] << "\n" << "index : " << i << endl;

		multi = multi - Array[i] * pow(10, i); // ������ ���� multi�� �ٽ� ������
		//cout << "������ �� ��: " << multi << endl;
	}
	

	// �� �ڸ� �� ���� ī�����ϱ� 0 �� ��, 1 �� ��,...
	sort(Array, Array + num); // sort(������, ����+1) �Լ��� �������� ����

	int Count[10] = { 0, }; // Ƚ�� ī��Ī ����� �迭
	// sort �� �迭 Ȯ�ο�
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < num; j++) // �ִ� �ڸ��� ������ 0�� ��µǴµ� ���� counting ������
		{
			if (i == Array[j])
			{
				Count[i]++; // �� ������ ������ Ƚ���� �迭�� ����
			}
		}
		
		//cout << "i ��° : " << i << "\n" << "sort�� �迭 �� : " << Array[i] << endl;
		// cout << "Count �迭 �� : " << Count[i] << endl;
		cout << Count[i] << endl;
	}

	return 0;
}
*/

// 2. ���ͳ� ������ Ǯ�̰���

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int multi;
	int x[10] = { 0, };

	cin >> a >> b >> c;
	multi = a * b * c;

	while (multi > 0)
	{
		// 10���� ���� ������ ����
		x[multi % 10]++;

		// ���� ���� 10���� ������ ũ�⸦ ����
		multi /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << x[i] << endl;
	}

	return 0;
}


//// ���� part
// ^ �� ��Ʈ �����ڶ� �ŵ������� �ƴϴ� -> <math.h>�� pow�Լ� �̿�

// ���������� counting ���� -> i�� �迭 ���� �� ���� ī���õǴ� �ݷ� check �ʿ�