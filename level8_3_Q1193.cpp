// 210107 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 8. 기본 수학1
// 문제 1193. 분수찾기 -> 성공!

/*
// SOL1) 내 풀이과정


// 규칙 찾기

// 1 / 1			1
// 1 / 2 2 / 1			2 3
// 3 / 1 2 / 2 1 / 3		4 5 6
// 1 / 4 2 / 3 3 / 2 4 / 1		7 8 9 10
// 5 / 1 4 / 2 3 / 3 2 / 4 1 / 5	11 12 13 14 15
// 1 / 6 2 / 5 3 / 4 4 / 3 5 / 2 6 / 1
//
//
// * 먼약 x <= p / (p + 1) / 2
// ->만약
// p 홀수 -> p / 1 p - 1 / 2 p - 2 / 3 .... 1 / p
// p 짝수 -> 1 / p 2 / p - 1 3 / p - 2......p / 1
//
//
// -> a / b 분자 a 분모 b
//
// p홀수
//     a : p p - 1 p - 2 .... 1
//	   b : 1 2 3 ...............p
//	p짝수
//	   a : 1 2 3 .............p
//	   b : p p - 1 p - 2 ...1
//
//	->p 홀짝 나누는 건 마지막 출력할 때
//	a / b or b / a 해도 괜찮을듯 ? ?


#include <iostream>
using namespace std;

#include <math.h> // 거듭제곱 -> pow함수
	
int main()
{
	// 첫째 줄에 N번째 분수의 번호 N 입력 *14
	int N;
	cin >> N;

	int i = 1;
	int sub = 0;
	
	int a = 0, b = 0;

	//분자와 분모
	while (N > ((pow(i, 2) + i) / 2)) // i=p
	{
		i++;
	}

	sub = ((pow(i, 2) + i) / 2) - N; // 5 - N


	a = 1 + sub; // p, p-1, p-2... -> 5 4 3 2 1
	b = i - sub;	 // 1, 2, 3... -> 1 2 3 4 5


	if (i % 2 == 0) // p가 짝수일 때 분수 : b/a
	{
		cout << b << "/" << a;

		return 0;
	}

	else
	{
		cout << a << "/" << b; // 5/1 4/2 ...

		return 0;
	}


return 0;
}

	/*
		//a = i - (N%i - 1); // 마지막은 최대 나머지가 아닌 0임 -> case분류
		if (N = ((pow(i, 2) + i) / 2)) // 마지막 수
		{
			a = 1;
			b = i;


			cout << "a값 : " << a << endl;
			cout << "b값 : " << b << endl;

		}

		if (N < ((pow(i, 2) + i) / 2)) // 대충 i=p 
		{
			a = i - (N%i) + 1; // p, p-1, p-2... -> 5 4 3 2 1
			b = i + 1 - a;	 // 1, 2, 3... -> 1 2 3 4 5
		}

		cout << "i값 : " << i << endl;

		break;

		

*/



// 2. 인터넷 풀이 

#include <iostream>
using namespace std;

int main(void)
{
	int n, cnt = 0;
	cin >> n;

	while (n > 0)
	{
		cnt++;
		n = n - cnt;
	}

	// a = 1 + sub; // p, p-1, p-2... -> 5 4 3 2 1
	// b = i - sub;	 // 1, 2, 3... -> 1 2 3 4 5

	if (cnt % 2 == 0)
		cout << cnt + n << "/" << 1 - n;
	else
		cout << 1 - n << "/" << cnt + n;

	return 0;
}



//// 막힌 part
// a와 b가 0 처리되어 나온다 -> if문 식 위치 제대로 넣고, return 0과 break 처리
// for문 대신 while문 처리