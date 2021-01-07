// 210107 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 8. 기본 수학1
// 문제 2292. 벌집 -> 성공!

/*
// SOL1) 내 풀이과정 + 점화식 풀이 인터넷 참고

#include <iostream>
using namespace std;

#include <math.h> // 거듭제곱 -> pow함수

#define MAX 70

//int num;
int a = 0; // 방 갯수

int main()
{
	// 첫째 줄에 마지막 방 N 입력
	int N;
	cin >> N;

	// 규칙을 찾아본다 -> 유사 점화식 체크

	// N값: 지나가는 방 갯수 a
	// 1 : 1개  /  1
	// 2 - 7 : 2개 / 원소 총 6 = 6 * (2-1)
	// 8 - 19 : 3개 / 원소 총 12 = 6 * (3-1)
	// 20 - 37 : 4개 / 원소 총 18 = 6 * (4-1)

	// N=1은 따로 생각
	// 등차 {an}=6n -> 점화식은 2+6 * n(n-1)/2 = 3n^2-3n+2 -> n-1 넣고 정리하면
	// 결론 : 방 갯수가 a 개 일 때 N 값 : 3a^2-9a+8 ~ 3a^2-3a+1 (총 6a-6 개)

	// 점화식 값보다 작으면 이전 단계 방 -> 부등식 조건으로 표현 가능

	if (N == 1)
	{
		cout << 1;

		return 0;
	}

	else
	{
		for (int i = 1;; i++) // 조건식 없으면 ;; 표시?
		{
			if (N <= 3 * pow(i, 2) - 3 * i + 1) // 2-7 8-19 20-37
			{
				// N방까지 최소 방 몇 개를 지나는지 포함 (첫~끝 포함)
				cout << i;
				//a = i + 1;
			
				return 0;
			}
		}
	}
		
		/*
		for (int i = 0; i < 6 * a - 7; i++)
		{
			sum = 3 * i*i - 9 * i + 8;
			//sum++;
			cout << "N값 : " << sum << endl;

			if (sum == N)
				cout << a << endl;
		}
		

	//cout << a << endl;
}
*/



// 2. 인터넷 풀이 

#include <iostream>
using namespace std;

int main()
{
	int N, i = 1, sum = 1;
	cin >> N;

	if (N == 1)
		cout << 1;

	else
	{
		while (true)
		{
			sum += i * 6;

			if (N <= sum)
				break;

			i++;
		}
		cout << i + 1;
	}

	return 0;
}



//// 막힌 part
// else에서 for문 출력이 나오지 않아서 각 조건에 return 0; 넣으니까 실행 완료