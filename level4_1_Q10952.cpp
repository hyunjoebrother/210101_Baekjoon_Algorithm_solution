// 210102 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 4. while문
// 문제 10952. A+B-5 -> 성공!

#include <iostream>
using namespace std;

int A, B;

int main()
{
	/* SOL1) 내 풀이과정

	//int A, B;	-> 지역변수 에러
	int C = 1; // while문 실행을 위해 첫번째 시작 조건 만족용

	while (C != 0) // while문 조건식 검사 후 True일 때 문장 반복
	{
		// 두 정수 A와 B 입력	
		cin >> A >> B;
		C = A + B;

		if (A == 0 && B == 0) // 0 아님 조건
		{
			return 0; // 출력 안 나오도록
		}

		cout << C << endl;
	}
	*/

	// SOL2) 인터넷 참고 풀이과정

	while (true)
	{
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;
		cout << A + B << endl;
	}

	return 0;
}


//// 막힌 part
// "초기화되지 않은 A, B 지역변수를 사용" 에러 
// -> main밖에 인수 선언해서 '어느 함수에서도 사용 가능한' <전역변수>로 사용하기