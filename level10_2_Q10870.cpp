// 210110 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 10. 재귀
// 문제 10870. 피보나치 수 - 5 -> 성공!


// SOL1) 내 풀이과정

#include <iostream>
using namespace std;


// 재귀함수는 탈출 조건이 필요하다 -> n이 0, 1일 때 탈출 ON

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
	// 첫째 줄에 n 입력 (0 or 20미만 자연수)
	int n;
	cin >> n;
	
	fibo(n);

	cout << k;

	return 0;
}


// 2. 인터넷 풀이 - 자료구조


//// 막힌 part
// 출력 x -> 바로 재귀함수 출력하지 말고 다른 변수로 값을 받는다