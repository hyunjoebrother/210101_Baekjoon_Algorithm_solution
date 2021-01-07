// 210107 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 7. 문자열
// 문제 11720. 숫자의 합 -> 성공!


// SOL1) 내 풀이과정

#include <iostream>
using namespace std;

#define MAX 100

int main()
{
	int N;
	char c;

	// 첫째 줄에 숫자의 개수 N 입력
	cin >> N;

	int sum = 0;

	// 둘째 줄에 숫자 N개가 공백없이 입력 -> 문자열 취급
	for (int i = 0; i < N; i++)
	{
		cin >> c;
		int temp = c; // 문자열 a를 int로 바꿈
		sum += temp - 48; // '0'=48을 뺌
	}

	cout << sum;
}





// 2. 인터넷 풀이 - 자료구조




//// 막힌 part
// 