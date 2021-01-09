// 210109 IUPC contest
// 5번 E번 문제 - 공룡게임

#include <iostream>
using namespace std;

#include <math.h>

int main()
{
	int N;
	cin >> N;

	int y = N - 1;

	int total = y + (y * ((pow(2, y) + 3 + y)));
	cout << total/2;
}