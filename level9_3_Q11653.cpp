// 210109 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 9. 기본 수학2
// 문제 11653. 소인수분해 -> 성공!

/*
// SOL1) 내 풀이과정

#include <iostream>
using namespace std;

//#include <vector>

int main()
{
	int N;
	cin >> N;

	// 소인수분해 -> 어떤 수로 나눠질 때 각각 배열에 넣는다
	//vector<int> v; // 소인수 넣는 배열
	//int div = 0; // 소인수


	while (N > 1) // 문제 조건에서 N이 1이면 출력 X
	{
		for (int i = 2; i <= N; i++)
		{
			if (N%i == 0) // 나눠 떨어질 때
			{
				//div = v[i];
				cout << i << endl;
				//cout << div << " 는" << i << " 번째 배열 index에 들어간 약수이다" << endl;

				N /= i;
				//i = j; // 다음 소인수를 찾기 위해서 N을 몫으로, 시작점을 다음 i로 변경

				break;
			}
		}
	}
	
	return 0;
}
*/



// 2. 인터넷 풀이 - 자료구조

#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

int main()
{
	int N;
	cin >> N;

	// 소인수분해 -> 어떤 수로 나눠질 때 각각 배열에 넣는다
	vector<int> v; // 소인수 넣는 배열
	int div = 0; // 소인수

	while (N > 1) // 문제 조건에서 N이 1이면 출력 X
	{
		for (int i = 2; i*i <= N; ++i)
		{
			while (N%i == 0)
			{
				v.push_back(i);
				N /= i;
			}
		}

		if (N > 1)
			v.push_back(N);


		sort(v.begin(), v.end());

		for (int i = 0; i < N; i++)
		{
			cout << v[i] << endl;
		}

		break;

	}
	
	return 0;	
}



//// 막힌 part
// 