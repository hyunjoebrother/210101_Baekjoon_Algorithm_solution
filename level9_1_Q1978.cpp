// 210109 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 9. �⺻ ����2
// ���� 1978. �Ҽ�ã�� -> ����!

/*
// SOL1) �� Ǯ�̰���

#include <iostream>
using namespace std;

int main()
{
	// ù° �ٿ� ���� ���� N �Է�
	int N, num;
	cin >> N;

	int count = 0;

	while (N--) // �Է��� N���� ���� �ݺ�
	{
		cin >> num;

		// 2���� �ڽ�-1 ���� ���� �������� ������ �Ҽ�

		// ���� 2�� �Ҽ�, 2���� ū ¦���� 1�� �Ҽ� �ƴ�
		if (num == 2 || (num % 2 != 0 && num != 1)) // OR|| , AND &&
		{
			count++;
			
			for (int i = 3; i < num; i += 2) // num�� 3���� Ȧ���� check
			{
				if (num%i == 0)
				{
					count--; // ���� �������� �Ҽ� �ƴ�
					break;
				}
			}
		}
	}

	// �Ҽ��� ���� ���
	cout << count;

	return 0;
}
*/


// 2. ���ͳ� Ǯ�� - �ڷᱸ��

#include <iostream>
using namespace std;

#include <vector>

int main()
{
	int N; // ���� �Է�
	cin >> N;

	int num; // ���� �Է�
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	int count = 0, div = 0; // �Ҽ��� ��� ����

	// �Ҽ��� ����� 2�� (1�� �ڱ� �ڽ�)
	for (int i = 0; i < N; i++)
	{
		// ��� ���� counting
		for (int j = 1; j <= v[i]; j++)
		{
			if (v[i] % j == 0) // ���� �������� ���
				div++;
		}

		// ��� ������ 2�� �Ҽ�
		if (div == 2)
			count++;

		div = 0; // for���� ���ؼ� �Լ� ������ ���� 0���� �ʱ�ȭ �ʿ�!
	}

	cout << count << endl;

	return 0;
}


//// ���� part
// while�� ���� check
// �� ���̴� �� ���� ���� �Լ� ������ ������ 0���� �ʱ�ȭ����