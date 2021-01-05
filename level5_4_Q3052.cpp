// 210105 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 5. 1차원 배열
// 문제 3052. 나머지 -> 성공!


/*
// SOL1) 내 풀이과정 + 인터넷 풀이

#include <iostream>
using namespace std;

int num, output;
//int Array[10] = { 0, }; // 입력값 넣은 배열
int Output[42] = { 0, }; // 나머지 값 넣은 배열
//int Count[10] = { 0, }; // 카운팅 값 넣은 배열

int main()
{
	int count = 0;

	// 1000보다 작은 숫자 10개가 한 줄에 하나씩 입력
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		//Array[i] = num;
		//output = num % 42;
		Output[num % 42]++; // 나머지 갯수 저장 -> 0~41 사이 값 저장
	}


	//cout << i << " 번 index : " << Output[num%42] << endl;
	//cout << i << " 번 index : " << Array[i] << endl;
	//cout << "결과값 나머지 : " << Output[i] << endl;


	/*
	for (int j = 0; j < 42; j++)
	{
		if (j == Output[i]) // 나머지 종류 중복 체크용
		{
			Count[i]++;
		}

		else
			Count[i] = 0; // 이렇게 하면 모두 다른 나머지일 때도 제로..
			//cout << j << " 가 나머지인 카운팅 수 : " << Count[i] << endl;
	}
	*/

	/*
	for (int i = 0; i < 10; i++)
	{
		if (Count[i] == Count[i]) // 나머지값 카운트
		{
			count++;
			cout << count << endl;
		}
	}
	*/
/*
	// 서로 다른 나머지 갯수
	for (int i = 0; i < 42; i++)
	{
		if (Output[i] != 0)
			count++;
	}

	cout << "카운팅 수 : " << count << endl;

	return 0;
}
*/

// 2. 인터넷 문제 풀이 - 자료구조

#include <iostream>
using namespace std;

#include <vector> // vector ADT : 동적 배열 구조 클래스
#include <algorithm> // sort

int main()
{
	vector<int> v; // vector<data type> [변수 이름]으로 vector 선언
	int n, a;
	int num = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> a; // 1000보다 작은 숫자 10개가 한 줄에 하나씩 입력 -> v에 담는다
		v.push_back(a); // v의 끝에 a를 추가한다
		v[i] = v[i] % 42; // 나머지 값으로 구성된 v
	}

	sort(v.begin(), v.end()); // sort(시작점, 끝점+1) 함수로 오름차순 정렬
							  // v.begin() : v의 첫 원소를 가르키는 반복자
							  // v.end() : v의 끝을 표시하는 반복자

	for (int i = 0; i < 10; i++)
		cout << v[i] << endl;

	cout << "unique 함수 실행" << endl;

	v.erase(unique(v.begin(), v.end()), v.end()); // v.erase(p) : p가 가르키는 원소 제거
			// unique 함수 : vector 배열에서 중복되지 않는 원소들을 앞부터 채워나감
							// 그 후 중복 빼고 자신이 바꾼 vector의 end()부분을 반환

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

	cout << v.size(); // v.size() : v의 원소 갯수

	return 0;
}



//// 막힌 part
// 카운팅 횟수 구하는 것이 막힘 -> 같은 for문 2개 따로 나눠주자
// 중복값 세는 것에 막힘