// 210107 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 6. 함수
// 문제 4673. 셀프 넘버 (( -> 성공!

/*
// SOL1) 내 풀이과정 + 인터넷 풀이


// 셀프 넘버 d(n) -> n + 각 자릿수 

#include <iostream>
using namespace std;

#define MAX 10000


int d(int n) // 생성자 구하는 함수 -> int형 n을 받고 int형 반환
{
	int dnumber = n;

	while (true)
	{
		if (n == 0)
			break;

		// 수학적 계산 : dnumber=n+(n/10)+(n/100)+...
		dnumber += (n % 10);
		n /= 10;
	}

	return dnumber;
}


int main(void) // 생성자 dnumber로 selfnum 구하자
{
	bool check[MAX] = { false }; // true&false에 따라 달라짐

	for (int i = 1; i < MAX; i++)
	{
		int num = d(i); // 생성자인 num 생성

		if (num < MAX)
		{
			check[num] = true; // 생성자 자리를 true로 바꿔줌
		}
	}

	for (int i = 1; i < MAX; i++)
	{
		// check 배열에는 생성자 true 처리
		// selfnum은 생성자가 없는 숫자임 -> false 갯수
		if (check[i] == false)
		{
			cout << i << endl;
		}
	}

	return 0;
}
*/



// 2. 인터넷 풀이 

#include <iostream>
using namespace std;


int main()
{
	// 생성자가 들어있는 배열
	int Arr[10001] = { 0, };

	// Arr[i] 즉, 생성자가 0이면 selfnum
	for (int i = 1; i < 10001; i++)
	{
		if (Arr[i] == 0)
			cout << i << endl;

		int sum = i; // 자기 자신도 더해야 함
		int temp = i; // temp라는 임시 변수에 저장

		while (temp > 0) // 자릿수 계산
		{
			sum += temp % 10;
			temp /= 10;
		}

		// selfnum 구하기
		if (sum <= 10000)
			Arr[sum]++;
	}

	return 0;
}


//// 막힌 part
// 복잡한 반복문은 for문 2개로 나누자
// printf가 cout보다 실행시간이 적다