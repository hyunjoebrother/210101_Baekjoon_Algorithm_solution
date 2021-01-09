// 210109 IUPC contest
// 3번 C번 문제 - 받아쓰기

#include <iostream>
using namespace std;

#include <vector>
#include <string> // string 문자열 변수 선언 가능

int n, m;
string answer, correct;

int main()
{
	// 첫째 줄에 작성 답안 길이 n, 정답 길이 m 입력
	cout << "작성 답안 길이와 정답 길이 입력 : " << endl;
	cin >> n >> m;

	// 둘째 줄에 작성 답안, 셋째 줄에 정답 입력
	cout << "작성 답안과 정답 길이 입력 : " << endl;
	cin >> answer >> correct;

	for (int i = 0; i < correct.size(); i++)
	{
		// 수정 3단계 ON
		if (answer[i] != correct[i])
		{
			// 추가

		}


		
	}




	// 수정횟수 (점수) 출력




}