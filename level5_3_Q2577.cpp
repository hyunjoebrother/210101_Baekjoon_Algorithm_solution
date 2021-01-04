// 210103 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 5. 1차원 배열
// 문제 2577. 숫자의 개수 -> 성공!


/*
// SOL1) 내 풀이과정

#include <iostream>
using namespace std;

#include <math.h> // 거듭제곱 -> pow함수
#include <algorithm> // sort

int a, b, c, multi;
int Array[100]; // abc 곱 결과 각 숫자 출력용 배열

int N, num;
int j;


int main()
{
	// 첫째 줄에 A, B, C 입력 (100<= <1000)
	cin >> a >> b >> c;
	
	// a, b, c 곱 계산
	multi = a * b * c;
	//cout << "곱 : " << multi << endl;

	// multi 값의 각 자릿수를 10의 거듭제곱으로 나눈 나머지로 배열에 넣기
	int i;
	int multi1;


	// multi의 총 자릿수 num (N) 구하기
	for (i = 0; i <= 9; i++) // 999 3개 곱하면 9자리
	{
		multi1 = multi / pow(10, i);
		//cout << "중간 multi : " << multi1 << endl;
		//cout << "i값 : " << i << endl;

		if ((multi1 < 10))
		{
			//cout << "if문 중간 multi : " << multi1 << endl;
			num = i + 1;
			//cout << "num : " << num << endl << endl; // i+1번 실행 횟수가 최대 자릿수

			break;
		}
	}
	
	// multi 값 각 자릿수를 배열에 한 칸씩 넣음
	for (i = num; i >= 0; i--) // ex. 123*456*789 일 때 8자리 나옴
	{
		//cout << "나누기 전 곱 : " << multi << endl;
		Array[i] = multi / pow(10, i); 

		//cout << "배열 값 : " << Array[i] << "\n" << "index : " << i << endl;

		multi = multi - Array[i] * pow(10, i); // 나눠진 값이 multi에 다시 들어가도록
		//cout << "나누기 후 곱: " << multi << endl;
	}
	

	// 각 자릿 수 갯수 카운팅하기 0 몇 개, 1 몇 개,...
	sort(Array, Array + num); // sort(시작점, 끝점+1) 함수로 오름차순 정렬

	int Count[10] = { 0, }; // 횟수 카운칭 저장용 배열
	// sort 후 배열 확인용
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < num; j++) // 최대 자릿수 넘으면 0이 출력되는데 같이 counting 빼야함
		{
			if (i == Array[j])
			{
				Count[i]++; // 각 정수가 나오는 횟수를 배열에 저장
			}
		}
		
		//cout << "i 번째 : " << i << "\n" << "sort후 배열 값 : " << Array[i] << endl;
		// cout << "Count 배열 값 : " << Count[i] << endl;
		cout << Count[i] << endl;
	}

	return 0;
}
*/

// 2. 인터넷 간단한 풀이과정

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int multi;
	int x[10] = { 0, };

	cin >> a >> b >> c;
	multi = a * b * c;

	while (multi > 0)
	{
		// 10으로 나눈 나머지 저장
		x[multi % 10]++;

		// 곱한 값을 10으로 나눠서 크기를 줄임
		multi /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << x[i] << endl;
	}

	return 0;
}


//// 막힌 part
// ^ 는 비트 연산자라서 거듭제곱이 아니다 -> <math.h>로 pow함수 이용

// 마지막으로 counting 남음 -> i에 배열 없을 때 같이 카운팅되는 반례 check 필요