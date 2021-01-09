// 210109 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 10. 재귀
// 문제 10872. 팩토리얼 -> 성공!

/*
// SOL1) 내 풀이과정

#include <iostream>
using namespace std;

// 재귀 함수 : 함수가 내부에서 자기 자신을 호출

int fact(int n)
{
	if (n <= 1) // 0! = 1
		return 1;
	else
		return n * fact(n - 1);
}

int main()
{
	// 첫째 줄에 정수 N 입력
	int N;
	cin >> N;

	// 팩토리얼 출력
	cout << fact(N);

	return 0;
}
*/

// 2. 인터넷 풀이 

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


//// 막힌 part
// 시간 초과 에러 뜸 -> n == 1을 <=로 고치니 해결