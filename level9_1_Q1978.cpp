// 210109 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 9. 기본 수학2
// 문제 1978. 소수찾기 -> 성공!

/*
// SOL1) 내 풀이과정

#include <iostream>
using namespace std;

int main()
{
	// 첫째 줄에 수의 갯수 N 입력
	int N, num;
	cin >> N;

	int count = 0;

	while (N--) // 입력한 N개의 숫자 반복
	{
		cin >> num;

		// 2부터 자신-1 까지 나눠 떨어지지 않으면 소수

		// 먼저 2는 소수, 2보다 큰 짝수와 1은 소수 아님
		if (num == 2 || (num % 2 != 0 && num != 1)) // OR|| , AND &&
		{
			count++;
			
			for (int i = 3; i < num; i += 2) // num은 3부터 홀수만 check
			{
				if (num%i == 0)
				{
					count--; // 나눠 떨어지면 소수 아님
					break;
				}
			}
		}
	}

	// 소수의 갯수 출력
	cout << count;

	return 0;
}
*/


// 2. 인터넷 풀이 - 자료구조

#include <iostream>
using namespace std;

#include <vector>

int main()
{
	int N; // 갯수 입력
	cin >> N;

	int num; // 숫자 입력
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	int count = 0, div = 0; // 소수와 약수 갯수

	// 소수는 약수가 2개 (1과 자기 자신)
	for (int i = 0; i < N; i++)
	{
		// 약수 갯수 counting
		for (int j = 1; j <= v[i]; j++)
		{
			if (v[i] % j == 0) // 나눠 떨어지면 약수
				div++;
		}

		// 약수 갯수가 2면 소수
		if (div == 2)
			count++;

		div = 0; // for문을 위해서 함수 끝나고 변수 0으로 초기화 필요!
	}

	cout << count << endl;

	return 0;
}


//// 막힌 part
// while문 조건 check
// 값 쌓이는 걸 막기 위해 함수 끝나고 변수를 0으로 초기화하자