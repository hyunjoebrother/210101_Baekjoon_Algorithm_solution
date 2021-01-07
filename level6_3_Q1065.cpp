// 210107 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 6. 함수
// 문제 1065. 한수 -> 성공!


/*

// SOL1) 내 풀이과정

#include <iostream>
using namespace std;

#define MAX 1000


int hansu(int n) // 한수 구하는 함수 (한수인지 아닌지)
{
	int hnumber = 0;

	// n이 한 자리, 두 자리면 자기 자신 출력
	if (n < 100)
	{
		hnumber = n;
	}

	else
	{
		// 백-십 = 십-일의 자리 체크
		int a = n / 100;
		int b = (n / 10) % 10;
		int c = n % 10;

		if (a - b == b - c)
		{
			cout << "백-십 : " << a - b << endl;
			cout << "십-일 : " << b - c << endl;

			hnumber = n;
		}
	}

	cout << "한수 값 : " << hnumber << endl;
	return hnumber;
}


// 한수의 갯수 출력용
int main()
{
	int N;
	cout << "N 입력 :" << endl;
	cin >> N;

	int count = 0;
	for (int i = 1; i <= N; i++)
	{
		cout << "hansu : " << hansu(i) << endl;

		if (hansu(i) > 0)
		{
			count++;
		}
	}

	cout << "갯수 : " << endl;
	cout << count << endl;

	return 0;
}

*/

/* 
// 1.5 배열 풀이

#include <iostream>
using namespace std;

int han(int n)
{
	int result = 0;
	int arr[3];

	for (int i = 1; i <= n; i++)
	{
		if (i < 100)
			result++;
		else
		{
			if (i == 1000)
				break;

			arr[0] = i / 100;
			arr[1] = (i / 10) % 10;
			arr[2] = i % 10;

			if (arr[0] = arr[1] == arr[1] - arr[2])
				result++;
		}
	}

	return result;
}

int main()
{
	int n;
	cin >> n;
	cout << han(n);

	return 0;
}
*/

// 2. 인터넷 풀이 - 자료구조

#include <iostream>
using namespace std;

#include <vector>

bool checkHan(int num)
{
	vector<int> v; // num의 각 자릿수를 뽑아서 저장
	int q, r, d;

	for (int i = 0; i < 2; ++i)
	{
		q = num / 10;
		r = num % 10;

		// 100보다 작으면 무조건 한수 (자기 자신)
		if (q == 0)
			return true; // bool형 data type

		else
		{
			v.push_back(r);
			num = q;
		}
	}

	// 공차
	d = v[1] - v[0];

	while (1)
	{
		q = num / 10;
		r = num % 10;

		// r만 남을 때
		if (q == 0)
		{
			if (r - v[v.size() - 1] == d) // 새로 뽑은 r과 v의 마지막 원소
				return true;
			else
				return false;
		}

		// q가 아직 남았을 때
		else
		{
			if (r - v[v.size() - 1] == d)
			{
				v.push_back(r);
				num = q;
			}
			else
				return false;
		}
	}
}

int main()
{
	int n, count = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		if (checkHan(i + 1) == true)
			count++;
	}
	cout << count;

	return 0;
}


//// 막힌 part
// 왜 a-b랑 b-c가 항상 같게 나오죠 -> hnumber = 0으로 초기화해줌