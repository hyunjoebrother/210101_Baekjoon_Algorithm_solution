// 210109 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 9. 기본 수학2
// 문제 4153. 직각삼각형 -> 성공!


// SOL1) 내 풀이과정

#include <iostream>
using namespace std;

#include <math.h> // pow함수
#include <vector>
#include <algorithm>

int main()
{
	//int N;
	//cin >> N;
	
	//하나씩 넣어봄
	int a, b, c;

	vector<int> v(3);

	for (int i = 0;; i++)
	{
		//v.push_back(N); // 배열에 넣고 
		cin >> a >> b >> c;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);

		if (a == 0 && b == 0 && c == 0)
			break;

		sort(v.begin(), v.end()); // 길이를 숫자 순으로 정렬 후에

		if (pow(v[2], 2) == pow(v[0], 2) + pow(v[1], 2))
		{
			cout << "right" << endl;
		}

		else
		{
			cout << "wrong" << endl;
		}

		v.clear(); //벡터 내용 삭제
	}

	return 0;
}



// 2. 인터넷 풀이 - 자료구조




//// 막힌 part
// 디버깅 에러 뜸 -> vector에 크기 지정 (3) 하니까 에러 없어짐
// 하나씩 push해주자
// while문에 결과값이 쌓이므로 clear로 내용 삭제하고 새로운 값을 넣어준다