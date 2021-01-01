// 210101 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// 문제 10871. X보다 작은 수 -> 성공!

#include <iostream>
using namespace std;

int main()
{
	int N, i, X;
	int A;

	// 첫째 줄에 N(정수 갯수) 와 X(정수) 입력
	cout << "N과 X를 각각 입력" << endl;
	cin >> N;
	cin >> X;
	cout << "N : " << N << endl;
	cout << "X : " << X << endl;


	// 수열 A를 이루는 정수 N개를 하나씩 입력
	cout << "수열 A를 이루는 정수 N개 한 번에 입력" << endl;

	for (i = 1; i <= N; i++)
	{

		cin >> A;
		//cout << "수열 A : " << A << endl;

		// X보다 작은 수를
		//cout << "X보다 작은 수 출력" << endl;
		if (A < X)
		{
			// 입력받은 순서대로 공백으로 구분해 출력
			cout << "X보다 작은 수 A : " << A << endl;
		}
	} 

	return 0;
}

//// 막힌 part
// for문 왜 2번만 돌아가지 -> for문에서 A가 아니라 i라고 씀 -> ok
