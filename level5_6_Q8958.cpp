// 210106 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 5. 1차원 배열
// 문제 8958. OX퀴즈 -> 성공!



// SOL1) 내 풀이과정 + 인터넷 참고

#include <iostream>
using namespace std;

#include <vector>
//#include <algorithm>

#include <string> // string 문자열 변수 선언 가능

//char Answer[80] = { 0, }; // 답 O/X 최대 80개 담은 배열
//#define MAX 81

int N;
string answer;

//vector<string> v;

int main()
{
	// 첫째 줄에 test case 갯수 N 입력
	cin >> N;

	// 둘째 줄부터 한 줄의 test case 입력, 길이는 0보다 크고 80보다 작은 문자열
	// 구성은 O or X


	//char end = 0;

	while (N--)
	{
		//cin >> Answer[i];
		cin >> answer;
		//v.push_back(answer); // v의 끝에 answer 추가한다


		// vector로 해서 원소 X를 remove해서 size 크기를 구할까

		// 먼저 정렬하고 맨끝에 있는 원소 X를 지우자 -> 하지만 문자열 정렬 불가 ㅅㄱ
		// sort(v.begin(), v.end())

		int count = 0;
		int score = 0;

		for (int i = 0; i < answer.size(); i++) // N개의 test case
		{
			//  연속 O 나오면 더해짐
			if (answer[i] == 'O')
			{
				count++; // O 갯수 카운트
				score += count;
			}
			else
			{
				count = 0;
			}


			//v.erase(v.end()); // 이건 해당 위치 원소만 삭제하는 거임

			//cout << i << " 번째 값 : " << v[i] << endl;

			//cout << v.size() << endl;
		}
	cout << score << endl;
	}


	return 0;
}



// 2. 인터넷 풀이 - 자료구조




//// 막힌 part
// v[i]가 출력되지 않는다 -> 문자열은 char (한 문자)말고 string
// 함수 내에서 0으로 초기화해줘야 나중에 값이 안 쌓인다