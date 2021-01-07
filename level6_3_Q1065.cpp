// 210107 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 6. �Լ�
// ���� 1065. �Ѽ� -> ����!


/*

// SOL1) �� Ǯ�̰���

#include <iostream>
using namespace std;

#define MAX 1000


int hansu(int n) // �Ѽ� ���ϴ� �Լ� (�Ѽ����� �ƴ���)
{
	int hnumber = 0;

	// n�� �� �ڸ�, �� �ڸ��� �ڱ� �ڽ� ���
	if (n < 100)
	{
		hnumber = n;
	}

	else
	{
		// ��-�� = ��-���� �ڸ� üũ
		int a = n / 100;
		int b = (n / 10) % 10;
		int c = n % 10;

		if (a - b == b - c)
		{
			cout << "��-�� : " << a - b << endl;
			cout << "��-�� : " << b - c << endl;

			hnumber = n;
		}
	}

	cout << "�Ѽ� �� : " << hnumber << endl;
	return hnumber;
}


// �Ѽ��� ���� ��¿�
int main()
{
	int N;
	cout << "N �Է� :" << endl;
	cin >> N;

	int count = 0;
	for (int i = 1; i <= N; i++)
	{
		cout << "hansu : " << hansu(i) << endl;

		if (hansu(i) > 0)
		{
			count++;
		}
	}

	cout << "���� : " << endl;
	cout << count << endl;

	return 0;
}

*/

/* 
// 1.5 �迭 Ǯ��

#include <iostream>
using namespace std;

int han(int n)
{
	int result = 0;
	int arr[3];

	for (int i = 1; i <= n; i++)
	{
		if (i < 100)
			result++;
		else
		{
			if (i == 1000)
				break;

			arr[0] = i / 100;
			arr[1] = (i / 10) % 10;
			arr[2] = i % 10;

			if (arr[0] = arr[1] == arr[1] - arr[2])
				result++;
		}
	}

	return result;
}

int main()
{
	int n;
	cin >> n;
	cout << han(n);

	return 0;
}
*/

// 2. ���ͳ� Ǯ�� - �ڷᱸ��

#include <iostream>
using namespace std;

#include <vector>

bool checkHan(int num)
{
	vector<int> v; // num�� �� �ڸ����� �̾Ƽ� ����
	int q, r, d;

	for (int i = 0; i < 2; ++i)
	{
		q = num / 10;
		r = num % 10;

		// 100���� ������ ������ �Ѽ� (�ڱ� �ڽ�)
		if (q == 0)
			return true; // bool�� data type

		else
		{
			v.push_back(r);
			num = q;
		}
	}

	// ����
	d = v[1] - v[0];

	while (1)
	{
		q = num / 10;
		r = num % 10;

		// r�� ���� ��
		if (q == 0)
		{
			if (r - v[v.size() - 1] == d) // ���� ���� r�� v�� ������ ����
				return true;
			else
				return false;
		}

		// q�� ���� ������ ��
		else
		{
			if (r - v[v.size() - 1] == d)
			{
				v.push_back(r);
				num = q;
			}
			else
				return false;
		}
	}
}

int main()
{
	int n, count = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		if (checkHan(i + 1) == true)
			count++;
	}
	cout << count;

	return 0;
}


//// ���� part
// �� a-b�� b-c�� �׻� ���� ������ -> hnumber = 0���� �ʱ�ȭ����