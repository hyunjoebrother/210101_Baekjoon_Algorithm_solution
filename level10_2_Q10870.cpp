// 210110 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 10. ���
// ���� 10870. �Ǻ���ġ �� - 5 -> ����!


// SOL1) �� Ǯ�̰���

#include <iostream>
using namespace std;


// ����Լ��� Ż�� ������ �ʿ��ϴ� -> n�� 0, 1�� �� Ż�� ON

int k = 0;

int fibo(int n)
{
	if (n == 0)
		return k = 0;

	if (n == 1)
		return k = 1;

	else
	{
		k = fibo(n - 1) + fibo(n - 2);
		return k;
	}
}

int main()
{
	// ù° �ٿ� n �Է� (0 or 20�̸� �ڿ���)
	int n;
	cin >> n;
	
	fibo(n);

	cout << k;

	return 0;
}


// 2. ���ͳ� Ǯ�� - �ڷᱸ��


//// ���� part
// ��� x -> �ٷ� ����Լ� ������� ���� �ٸ� ������ ���� �޴´�