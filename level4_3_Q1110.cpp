// 210102 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 4. while문
// 문제 1110. 더하기 사이클 -> 성공!

#include <iostream>
using namespace std;

int N;
int a, b, c;

int cycle; // cycle 반복 횟수

int main()
{
	// 첫째 줄에 N 입력 (0<=N<=99)
	cout << "N을 입력하세요" << endl;
	cin >> N;

	// N 십의 자리 a, 일의 자리 b -> 10보다 작아도 a=0, 나머지는 b 그대로
	a = N / 10;
	b = N % 10;

	cout << "a = " << a << "\n" << "b = " << b << endl;

	while (true) // true는 무한 루프 반복문 on
	{
		// 더하면 a+b -> 오른쪽 2개 각각 합치면 b~(a+b)%10 = c라 하자
		c = 10 * b + (a + b) % 10;

		a = c / 10;
		b = c % 10;

		cout << "c = " << c << endl;
		cycle++; // 반복할 때마다 cycle 횟수 1씩 증가 ㄷㄷㄷㄷ

		if (N == c)
		{
			cout << cycle << "번 사이클 완료!" << endl;
			break;
			// 사이클 횟수를 어떻게 구할까요?.?
		}

		/*for (i = 1; i <= cycle; i++)
		{
			
		}*/
	}

	return 0;
}

//// 막힌 part
// count 변수가 모호하다는 E0266 에러
// -> using namespace std에 count라는 변수가 있어서 다른 이름으로 바꾸면 해결

// 알고리즘은 유도했는데 cycle 반복 횟수를 못 구하겠음 -> cycle++ 로 해결