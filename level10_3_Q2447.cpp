// 210114 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 10. ���
// ���� 2447. �� ��� - 10 -> ����! ... ��� (�ǹ�1 ����)

/*
// SOL1) �� Ǯ�̰��� + ���ͳ�

#include <iostream>
using namespace std;

// #define MAX 2500

// char board[MAX][MAX];
// 2���� �迭 : �迭�� ��ҷ� 1������ ����, ��/���� ���̷� ǥ�� (���� ���� �ʼ� ���)

void star(int N, int x, int y) 
{
	if (((x / N) % 3 == 1) && ((y / N) % 3 == 1)) // ��� �� ����
		cout << " ";
	// 3x3 ~ 9x9�� �� (1,1) ����
	// �� �Ŀ��� ������ (3,3)(3,4)...(5,5) �޶���

	else if (N < 3)
		cout << "*"; // �� �� ¥��

	else
		star(N / 3, x, y);
}

int main()
{
	// ù° �ٿ� 3�� �ŵ������� N �Է�
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			star(N, j, i);
		}
		cout << endl; // ���� �� ����
	}

	return 0;
}
*/


// 2. ���ͳ� Ǯ�� 

#include <iostream>
using namespace std;

#define MAX 7000

char star[MAX][MAX];

void putSpace(int N, int y, int x)
{
	for (int i = y; i < y + N; i++)
	{
		for (int j = x; j < x + N; j++)
		{
			star[i][j] = ' ';
		}
	}
}

void setStar(int N, int y, int x)
{
	if (N == 1)
		star[y][x] = '*';
	else
	{
		int div = N / 3;
		for (int i = y; i < y + div * 3; i += div)
		{
			for (int j = x; j < x + div * 3; j += div)
			{
				if (i == y + div && j == x + div)
					putSpace(div, i, j);
				else
					setStar(div, i, j);
			}
		}
	}
}

void printStar(int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << star[i][j];
		}
		cout << endl;
	}
}

int main()
{
	int N;
	cin >> N;

	setStar(N, 0, 0);
	printStar(N);

	return 0;
}


//// ���� part
// �׳� �� ��ƴ�...