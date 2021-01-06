// 210106 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 5. 1차원 배열
// 문제 1546. 평균 -> 성공!


/*
// SOL1) 내 풀이과정

#include <iostream>
using namespace std;

#include <algorithm>


int N, M;
double Score[1000] = { 0, }; // 점수 N개 담은 배열


int main()
{
	// 첫째 줄에 시험 본 과목 갯수 N 입력
	cin >> N;

	double sum = 0.0; // 평균값 소숫점 출력용

	// 둘째 줄에 세준이 현재 성적 입력
	for (int i = 0; i < N; i++)
	{
		cin >> Score[i];
	}

	// 최댓값 맨끝으로 빼기 위해 정렬
	sort(Score, Score + N);
	M = Score[N - 1];
	
	//cout << "최댓값 : " << M << endl;


	// 최댓값 M 제외 나머지 점수 합 sum 구하기
	for (int i = 0; i < N - 1; i++)
	{
		//cout << i << " 번째 값 : " << Score[i] << endl;
		//cout << i << " 번째까지 더하기 이전 : " << sum << endl;
		sum = sum + Score[i];
		//cout << i << " 번째까지 합 : " << sum << endl;
	}
	

	//cout << "최댓값 제외 점수 합 : " << sum << endl;

	// 대충 수학
	// 원래 평균은 (a+b+c+...+z+M) / N
	// 주작 평균은 (100 / M ) * (a+b+...+z+M) /N = 100  * (sum+M) / (M * N)

	//cout << "원래 평균 : " << (sum + M) / N << endl;
	cout << "주작 평균 : " << 100 * (sum + M) / (M * N);
	//printf("%lf\n", 100 * (sum + M) / (M * N));

	return 0;
}
*/


// 2. 인터넷 풀이 - 자료구조

#include <iostream>
using namespace std;

#include <vector> // 배열
#include <algorithm> // sort

int N;

// 점수 N개 담은 배열
vector<double> v; // vector<data type> [변수 이름]으로 vector 선언


int main()
{
	// 첫째 줄에 시험 본 과목 갯수 N 입력
	cin >> N;

	
	double sum = 0.0; // 평균값 소숫점 출력용
	double score = 0.0;

	// 둘째 줄에 세준이 현재 성적 입력
	for (int i = 0; i < N; i++)
	{
		cin >> score;
		v.push_back(score); // v의 끝에 score 추가한다
	}

	// 최댓값 맨끝으로 빼기 위해 정렬
	sort(v.begin(), v.end()); 

	// 최댓값 = v[N-1] 로 문제식 이용 -> 총합 구하기
	for (int i = 0; i < N; i++)
	{
		v[i] = v[i] / v[N - 1] * 100;
		sum += v[i];
	}

	cout << sum / N << endl;

	return 0;
}

	
//// 막힌 part
// 입력 예제 중에서 어떤 test case가 만족을 못함
// sum 구하기부터 오류 -> sum 값이 100으로 설정되어 있어서 하수 바로 위에 0으로 선언해줌
// 소숫점 출력 오류 -> douvle = 0.0 식으로 바꿈 + printf lf식으로 소숫점 조정
//  시간초과 -> 처음에 Score[] 했는데 size 지정해주니 해결 완료! (띠용)