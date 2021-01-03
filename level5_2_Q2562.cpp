// 210103 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 5. 1차원 배열
// 문제 2562. 최댓값 -> 성공!


// SOL1) 내 풀이과정

#include <iostream>
using namespace std;

#include <algorithm>

// 9개의 서로 다른 자연수 입력 -> 배열로
int Array[9] = { 0, }; // sort 할 배열, 9는 원소 갯수
int Before[9] = { 0, }; // sort 전 원본 배열

int i, p; // 반복문용 // index의 position


int main()
{
	int max = 0; // 최댓값

	for (i = 0; i < 9; i++)
	{
		cin >> Array[i];
		cout << "배열 값은 각각 : " << Array[i] << endl;

		Before[i] = Array[i]; // 정렬 후에 이전 배열 저장용

		// 최대값 위치 구하기
		if (max < Before[i])
		{
			max = Before[i];
			p = i + 1; // 몇 번째 순서이므로 배열에서 하나 빼야 함 ㅇㅇ
		}
	}

	// 최대값 구하기
	sort(Array, Array + 9); // sort(시작점, 끝점+1) 함수로 오름차순 정렬
	max = Array[8];
	cout << "최댓값 : " << max << endl;

	//cout << "정렬 후 배열 처음과 마지막 값 : " << Array[0] << " " << Array[8] << endl;

	//cout << "Before 배열 : " << Before[1] << endl; // 성공!
	//cout << "max : " << max << endl; // 성공!

	cout << "위치 : " << p << endl;
	

	return 0;
}



/*
// SOL2) 인터넷 풀이과정 No 자료구조

#include <iostream>
using namespace std;

int Array[100];
int MAX, num;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		cin >> Array[i]; // 배열 입력

		if (MAX < Array[i]) // 정렬은 아니고 그냥 크기 비교만 진행
		{
			MAX = Array[i];
			num = i; // index 위치 숫자
		}
	}
	cout << MAX << endl << num;

	return 0;
}
*/


//// 막힌 part
// 최댓값의 index 구하는 점에서 막힘 + 위치가 계속 8로 나옴
// -> if문을 for문 밖에 써서 i=9 -> p = i - 1 = 8 나온 거 였음 -> 안으로 넣자
// 최댓값 구할 때 if문 식 check