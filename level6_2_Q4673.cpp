// 210107 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 6. �Լ�
// ���� 4673. ���� �ѹ� (( -> ����!

/*
// SOL1) �� Ǯ�̰��� + ���ͳ� Ǯ��


// ���� �ѹ� d(n) -> n + �� �ڸ��� 

#include <iostream>
using namespace std;

#define MAX 10000


int d(int n) // ������ ���ϴ� �Լ� -> int�� n�� �ް� int�� ��ȯ
{
	int dnumber = n;

	while (true)
	{
		if (n == 0)
			break;

		// ������ ��� : dnumber=n+(n/10)+(n/100)+...
		dnumber += (n % 10);
		n /= 10;
	}

	return dnumber;
}


int main(void) // ������ dnumber�� selfnum ������
{
	bool check[MAX] = { false }; // true&false�� ���� �޶���

	for (int i = 1; i < MAX; i++)
	{
		int num = d(i); // �������� num ����

		if (num < MAX)
		{
			check[num] = true; // ������ �ڸ��� true�� �ٲ���
		}
	}

	for (int i = 1; i < MAX; i++)
	{
		// check �迭���� ������ true ó��
		// selfnum�� �����ڰ� ���� ������ -> false ����
		if (check[i] == false)
		{
			cout << i << endl;
		}
	}

	return 0;
}
*/



// 2. ���ͳ� Ǯ�� 

#include <iostream>
using namespace std;


int main()
{
	// �����ڰ� ����ִ� �迭
	int Arr[10001] = { 0, };

	// Arr[i] ��, �����ڰ� 0�̸� selfnum
	for (int i = 1; i < 10001; i++)
	{
		if (Arr[i] == 0)
			cout << i << endl;

		int sum = i; // �ڱ� �ڽŵ� ���ؾ� ��
		int temp = i; // temp��� �ӽ� ������ ����

		while (temp > 0) // �ڸ��� ���
		{
			sum += temp % 10;
			temp /= 10;
		}

		// selfnum ���ϱ�
		if (sum <= 10000)
			Arr[sum]++;
	}

	return 0;
}


//// ���� part
// ������ �ݺ����� for�� 2���� ������
// printf�� cout���� ����ð��� ����