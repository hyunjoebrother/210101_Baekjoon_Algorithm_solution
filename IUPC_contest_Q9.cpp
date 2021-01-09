// 210109 IUPC contest
// 9번 I번 문제 - 신입생 청원이

#include <iostream>
using namespace std;

#include <string>
#include <vector> // 시간을 쪼개서 시/분 따로 계산용'

int m, h;

void getTime(int& min, int& hour) {
	string str;
	getline(std::cin, str); // get the input of the time

	// find the points to split the string in
	size_t splitA = str.find(':');
	size_t splitB = str.find(' ');

	// split and convert the string as necessary
	hour = stoi(str.substr(0, splitA));
	min = stoi(str.substr(splitA + 1, splitB - splitA));
}


int main()
{
	int N, M;
	char a, b; // 시간 시와 분
	int hour1, hour2, min1, min2;
	string lecture, time1, time2, time3;

	//char clock[5] = { 0, }; // 시간과 분 나태내는 배열
	vector<char> clock;

	// 첫째 줄에 하루 강의 갯수 N, 강의실 이동 시간 소요 목록 갯수 M
	cin >> N >> M;
	// 강의 N개의 줄에 대해 강의 이름 S, 시작시간 X, 끝시간 Y 입력


	for (int i = 0; i < N; i++)
	{
		cin >> lecture >> time1 >> time2;

		getTime(min1, hour1);
		getTime(min2, hour2);

		int startHour = hour1;
		int startMin = min1;
		int endHour = hour2;
		int endMin = min2;
	

		cout << "시작 시간 : " << startHour << " 시 " << startMin << " 분 " << endl;
		cout << "시작 시간 : " << endHour << " 시 " << endMin << " 분 " << endl;


		//cout << clock[0] << " 시 " << clock[1] << " 분 " << endl;

	}
	// 시간 M개의 줄에 대해 강의 이름 A, B, 이동 간 소요 시간 Z 입력
	for (int i = 0; i < M; i++)
	{
		cin >> lecture >> lecture >> time3;
	}

	// 최대 강의 총 시간 출력

	return 0;


}