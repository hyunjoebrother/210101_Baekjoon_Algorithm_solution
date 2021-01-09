// 210109 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 10. ���
// ���� 10872. ���丮�� -> ����!

/*
// SOL1) �� Ǯ�̰���

#include <iostream>
using namespace std;

// ��� �Լ� : �Լ��� ���ο��� �ڱ� �ڽ��� ȣ��

int fact(int n)
{
	if (n <= 1) // 0! = 1
		return 1;
	else
		return n * fact(n - 1);
}

int main()
{
	// ù° �ٿ� ���� N �Է�
	int N;
	cin >> N;

	// ���丮�� ���
	cout << fact(N);

	return 0;
}
*/

// 2. ���ͳ� Ǯ�� 

#include <iostream>
using namespace std;

int fact(int n)
{
	int result = 1;

	for (int i = 1; i <= n; i++)
	{
		result = result * i;
	}

	return result;
}

int main()
{
	int n;
	cin >> n;

	cout << fact(n);

	return 0;
}


//// ���� part
// �ð� �ʰ� ���� �� -> n == 1�� <=�� ��ġ�� �ذ�