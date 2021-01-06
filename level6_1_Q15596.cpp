// 210106 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 6. 함수
// 문제 15596. 정수 N개의 합 -> 성공!


// SOL1) 내 풀이과정 + 인터넷 풀이

// 정수 n개 주어졌을 때 합을 구하는 함수를 작성하시오
//long long sum(std::vector<int> &a); 함수 작성

#include <iostream>
using namespace std;

#include <vector>

int n; // 합을 구해야 하는 정수 n개
vector<int> a; // 합을 구해야 하는 정수 n개가 저장되어 있는 배열

// long long은 8byte integer data type

// 함수 작성
long long sum(vector<int> &a)
{
	int sum = 0;

	for (int i = 0; i < a.size(); i++)
		sum = sum + a[i];

	return sum;
}



// 2. 인터넷 풀이 - 자료구조




//// 막힌 part
// 