// 210109 IUPC contest
// 9�� I�� ���� - ���Ի� û����

#include <iostream>
using namespace std;

#include <string>
#include <vector> // �ð��� �ɰ��� ��/�� ���� ����'

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
	char a, b; // �ð� �ÿ� ��
	int hour1, hour2, min1, min2;
	string lecture, time1, time2, time3;

	//char clock[5] = { 0, }; // �ð��� �� ���³��� �迭
	vector<char> clock;

	// ù° �ٿ� �Ϸ� ���� ���� N, ���ǽ� �̵� �ð� �ҿ� ��� ���� M
	cin >> N >> M;
	// ���� N���� �ٿ� ���� ���� �̸� S, ���۽ð� X, ���ð� Y �Է�


	for (int i = 0; i < N; i++)
	{
		cin >> lecture >> time1 >> time2;

		getTime(min1, hour1);
		getTime(min2, hour2);

		int startHour = hour1;
		int startMin = min1;
		int endHour = hour2;
		int endMin = min2;
	

		cout << "���� �ð� : " << startHour << " �� " << startMin << " �� " << endl;
		cout << "���� �ð� : " << endHour << " �� " << endMin << " �� " << endl;


		//cout << clock[0] << " �� " << clock[1] << " �� " << endl;

	}
	// �ð� M���� �ٿ� ���� ���� �̸� A, B, �̵� �� �ҿ� �ð� Z �Է�
	for (int i = 0; i < M; i++)
	{
		cin >> lecture >> lecture >> time3;
	}

	// �ִ� ���� �� �ð� ���

	return 0;


}