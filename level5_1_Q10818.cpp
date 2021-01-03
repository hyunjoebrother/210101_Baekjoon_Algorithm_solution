// 210103 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 5. 1차원 배열
// 문제 10818. 최소, 최대 -> 성공!


/* SOL1) 내 풀이과정

#include <iostream>
using namespace std;

int N; // 배열 요소 갯수
int i; // 반복문 index 표시용

//int Array[] = { 1,2,3 }; // 자동으로 배열 Array의 길이 설정하고 초기화
int Array[1000000] = { 0, }; // 모두 0으로 초기화


// 배열 : 다수의 같은 type의 변수를 한 번에 유한 집합으로 선언 가능
// 1차원 : 자료형, 배열이름, 길이 정보 check -> int Array[6] 배열 길이는 0~5로 6개

int main()
{
	int min, max; // 최솟값과 최댓값

	// 첫째 줄에 정수의 갯수 N 입력
	cout << "N을 입력하세요" << endl;
	cin >> N;
	
	for (int i = 0; i < N; i++) // N개의 배일 길이가 나옴
	{
		// 둘째 줄에는 N개의 정수를 공백으로 구분해서 입력
		cin >> Array[i]; // N개 배열 입력
		cout << "전체 배열 값 : " << Array[i] << endl;
	}
	
	// 배열 요소의 최솟값과 최댓값 출력
	min = Array[0];
	max = Array[0];

	for (int i = 0; i < N; i++) // N번 동안 반복해서 값 크기 비교
	{
		if (Array[i] < min)
		{
			min = Array[i];
		}

		if (Array[i] > max)
		{
			max = Array[i];
		}
	}

	cout << "최솟값 : " << min << endl;
	cout << "최댓값 : " << max << endl;

	return 0;
}
*/


// SOL2) 인터넷 참고 풀이과정 - 자료구조

#include <iostream>
using namespace std;

#include <vector>
#include <algorithm> // sort 사용

// vector ADT : 임의의 object의 sequence를 저장, 동적 '배열'구조 클래스 (1 type만)
// 제약 없이 빠른 랜덤 접근 가능, 자동으로 배열의 크기 조절과 추가 삭제가 가능
// 요소에 접근하거나 앞/뒤 요소를 추가, 삭제 및 크기 체크 멤버 함수 제공

int main()
{
	int N, num;
	
	// 첫째 줄에 정수의 갯수 N 입력
	cin >> N;

	vector<int> v; // vecotr<data type> [변수 이름]으로 vector 선언
	for (int i = 0; i < N; i++)
	{
		// 둘째 줄에는 N개의 정수를 공백으로 구분해서 입력
		cin >> num; // N개의 배열 요소 입력
		v.push_back(num); // vector의 back에 num을 넣는다
	}

	// sort함수 -> 묶어져 있는 배열을 쉽게 정렬
	sort(v.begin(), v.end()); // sort(시작점, 끝점+1) 함수로 오름차순 정렬

	// 배열 요소의 최솟값과 최댓값 출력
	cout << v.front() << " " << v.back() << endl;

	return 0;
}


//// 막힌 part
// 배열에서 min, max 구하기가 문제 -> for문을 따로 쓰자
// -> 런타임 에러 발생 : 배열의 index를 참조할 때 불러올 수 있는 값을 불러야 함
 // -> [100] 이런 식으로 배열 선언하니까 성공! or 동적할당을 해야 한다고 함