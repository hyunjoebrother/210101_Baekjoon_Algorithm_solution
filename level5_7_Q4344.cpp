// 210106 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 5. 1차원 배열
// 문제 4344. 평균은 넘겠지 -> 성공!


// SOL1) 내 풀이과정 + 인터넷 풀이

#include <iostream>
using namespace std;

//#include <vector>

int C, N;
// 학생 점수 배열
double Score[1001] = { 0, };
//vector<double> v;
//double Sum[] = { 0, }; // 각 case별 총합

// 점수 평균보다 넘는 학생 수 카운팅 & 최종 결과값, 비율
double count, sum, result;


int main()
{
	// 첫째 줄에 test case 갯수 C 입력
	cin >> C;

	// 둘째 줄에는 각 test case마다 학생수 N 그리고 N 명의 점수 하나씩 주어짐
	for (int i = 0; i < C; i++)
	{
		cin >> N; //학생 수

		// sum 값이 계속 쌓이는 걸 방지		
		sum = 0;
		double count = 0;

		for (int j = 0; j < N; j++)
		{
			// N명의 점수 하나씩 입력
			cin >> Score[j]; // i번째 case에서 N개의 점수들을 j 인덱스에 넣기
			sum = sum + Score[j]; // i번째 case에서 N개의 점수 총합		
			//cout << i << "번 째 test case 학생들 점수 : " << Score[j] << endl;
		}

		//cout << i << "번 째 test case 학생들 점수 합 : " << sum << endl;
		//cout << i << "번 째 test case 학생들 점수 평균 : " << sum / N << endl;

		for (int j = 0; j < N; j++)
		{
			if (Score[j] > (sum / N)) // 평균 : Sum[i]/N
			{
				count++;
			}
		}
		//cout << count << endl;

		// 비율값 = 100 * (특정 학생 수 / 전체 수)
		result = (count / N) * 100;
		//printf("%.3f%%\n", result); //소숫점 3번째 자리까지 출력
		cout.precision(5);
		cout << result << "%" << endl;
	}

	return 0;
}



// 2. 인터넷 풀이 - 자료구조




//// 막힌 part
// 총합 값이 다음 test case에도 계속 쌓인다 -> for문 안에 sum=0.0으로 초기화시킨다
// 변수 data type 잘 확인하기