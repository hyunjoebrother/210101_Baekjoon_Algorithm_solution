// 210125 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 10. ���
// ���� 11729. �ϳ��� ž �̵� ���� -> ����! 


// SOL1) �� Ǯ�̰��� + ���ͳ�

// N = 1 -> 1
//
// 1 3
//
// N = 2 -> 3
//
// 1 2
// 1 3
// 2 3
//
// N = 3 -> 7
//
// 1 3
// 1 2 // ������ �׻� �������� �迭
// 3 2
// 1 3
// 2 1
// 2 3
// 1 3

// 1�� ����� n-1���� 2������ �̵� -> 1������ ���� ū ���Ǹ� ����
// 1�� ����� ���� ū ������ 3������ �̵�
// 2�� ����� n-1���� ��� 3������ �̵�

/*
#include <iostream>
using namespace std;

void hanoi(int N, int start, int mid, int end)
{
	if (N == 1)
		cout << start << " " << end << '\n';
	else
	{
		hanoi(N - 1, start, end, mid); // 1�� ����� n-1���� 2������
		cout << start << " " << end << '\n'; // 1�� ��� -> 3������
		hanoi(N - 1, mid, start, end); // 2�� ��� -> 3������
	}
}

int main()
{
	// ù° �ٿ� ù ��° ��뿡 ���� ������ ���� N (1<= N <= 20) �Է�
	int N;
	cin >> N;

	// �� Ƚ�� : 2^N - 1
	cout << (1 << N) - 1 << '\n'; // pow()ó���� �Ǽ����̶� ���� ��

	hanoi(N, 1, 2, 3);

	return 0;

	// ���� Ƚ�� K ���, ���� ���� A, B ���
	// A��° ž�� ���� ���� �ִ� ������ B��° ž�� ���� ���� �ű�ٴ� ��
}
*/

// 2. ���ͳ� Ǯ�� 

#include <iostream>
using namespace std;

int cnt = 0;

void hanoi(int num, int from, int to, int other)
{
	if (num == 1)
	{
		cnt++;
		return;
	}
	else
	{
		hanoi(num - 1, from, other, to);
		hanoi(1, from, to, other);
		hanoi(num - 1, other, to, from);
	}
}

void hanoi_print(int num, int from, int to, int other)
{
	if (num == 1)
	{
		printf("%d %d\n", from, to);
		return;
	}
	else
	{
		hanoi_print(num - 1, from, other, to);
		hanoi_print(1, from, to, other);
		hanoi_print(num - 1, other, to, from);
	}
}

int main()
{
	// ù° �ٿ� ù ��° ��뿡 ���� ������ ���� N (1<= N <= 20) �Է�
	int n;
	cin >> n;

	hanoi(n, 1, 3, 2);

	// ���� Ƚ�� K ���, ���� ���� A, B ���
	printf("%d\n", cnt);

	hanoi_print(n, 1, 3, 2);
}



//// ���� part
// �׳� �� ��ƴ�...