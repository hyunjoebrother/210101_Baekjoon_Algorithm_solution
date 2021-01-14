// 210114 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 10. 재귀
// 문제 2447. 별 찍기 - 10 -> 성공! ... 어렵 (실버1 문제)

/*
// SOL1) 내 풀이과정 + 인터넷

#include <iostream>
using namespace std;

// #define MAX 2500

// char board[MAX][MAX];
// 2차원 배열 : 배열의 요소로 1차원을 가짐, 행/열의 길이로 표현 (열의 길이 필수 명시)

void star(int N, int x, int y) 
{
	if (((x / N) % 3 == 1) && ((y / N) % 3 == 1)) // 가운데 빈 공간
		cout << " ";
	// 3x3 ~ 9x9일 때 (1,1) 공백
	// 그 후에는 공백이 (3,3)(3,4)...(5,5) 달라짐

	else if (N < 3)
		cout << "*"; // 한 줄 짜리

	else
		star(N / 3, x, y);
}

int main()
{
	// 첫째 줄에 3의 거듭제곱인 N 입력
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			star(N, j, i);
		}
		cout << endl; // 다음 줄 진행
	}

	return 0;
}
*/


// 2. 인터넷 풀이 

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


//// 막힌 part
// 그냥 좀 어렵다...