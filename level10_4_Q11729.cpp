// 210125 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 10. 재귀
// 문제 11729. 하노이 탑 이동 순서 -> 성공! 


// SOL1) 내 풀이과정 + 인터넷

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
// 1 2 // 원판은 항상 내림차순 배열
// 3 2
// 1 3
// 2 1
// 2 3
// 1 3

// 1번 기둥의 n-1개를 2번으로 이동 -> 1번에는 제일 큰 원판만 남음
// 1번 기둥의 제일 큰 원판을 3번으로 이동
// 2번 기둥의 n-1개를 모두 3번으로 이동

/*
#include <iostream>
using namespace std;

void hanoi(int N, int start, int mid, int end)
{
	if (N == 1)
		cout << start << " " << end << '\n';
	else
	{
		hanoi(N - 1, start, end, mid); // 1번 기둥의 n-1개는 2번으로
		cout << start << " " << end << '\n'; // 1번 기둥 -> 3번으로
		hanoi(N - 1, mid, start, end); // 2번 기둥 -> 3번으로
	}
}

int main()
{
	// 첫째 줄에 첫 번째 장대에 쌓인 원판의 개수 N (1<= N <= 20) 입력
	int N;
	cin >> N;

	// 총 횟수 : 2^N - 1
	cout << (1 << N) - 1 << '\n'; // pow()처리는 실수형이라 에러 뜸

	hanoi(N, 1, 2, 3);

	return 0;

	// 옯긴 횟수 K 출력, 수행 과정 A, B 출력
	// A번째 탑의 가장 위에 있는 원판을 B번째 탑의 가장 위로 옮긴다는 뜻
}
*/

// 2. 인터넷 풀이 

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
	// 첫째 줄에 첫 번째 장대에 쌓인 원판의 개수 N (1<= N <= 20) 입력
	int n;
	cin >> n;

	hanoi(n, 1, 3, 2);

	// 옯긴 횟수 K 출력, 수행 과정 A, B 출력
	printf("%d\n", cnt);

	hanoi_print(n, 1, 3, 2);
}



//// 막힌 part
// 그냥 좀 어렵다...