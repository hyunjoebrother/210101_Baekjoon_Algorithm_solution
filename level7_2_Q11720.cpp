// 210107 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 7. ���ڿ�
// ���� 11720. ������ �� -> ����!


// SOL1) �� Ǯ�̰���

#include <iostream>
using namespace std;

#define MAX 100

int main()
{
	int N;
	char c;

	// ù° �ٿ� ������ ���� N �Է�
	cin >> N;

	int sum = 0;

	// ��° �ٿ� ���� N���� ������� �Է� -> ���ڿ� ���
	for (int i = 0; i < N; i++)
	{
		cin >> c;
		int temp = c; // ���ڿ� a�� int�� �ٲ�
		sum += temp - 48; // '0'=48�� ��
	}

	cout << sum;
}





// 2. ���ͳ� Ǯ�� - �ڷᱸ��




//// ���� part
// 