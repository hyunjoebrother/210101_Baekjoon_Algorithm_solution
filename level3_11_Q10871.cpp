// 210101 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// ���� 10871. X���� ���� �� -> ����!

#include <iostream>
using namespace std;

int main()
{
	int N, i, X;
	int A;

	// ù° �ٿ� N(���� ����) �� X(����) �Է�
	cout << "N�� X�� ���� �Է�" << endl;
	cin >> N;
	cin >> X;
	cout << "N : " << N << endl;
	cout << "X : " << X << endl;


	// ���� A�� �̷�� ���� N���� �ϳ��� �Է�
	cout << "���� A�� �̷�� ���� N�� �� ���� �Է�" << endl;

	for (i = 1; i <= N; i++)
	{

		cin >> A;
		//cout << "���� A : " << A << endl;

		// X���� ���� ����
		//cout << "X���� ���� �� ���" << endl;
		if (A < X)
		{
			// �Է¹��� ������� �������� ������ ���
			cout << "X���� ���� �� A : " << A << endl;
		}
	} 

	return 0;
}

//// ���� part
// for�� �� 2���� ���ư��� -> for������ A�� �ƴ϶� i��� �� -> ok
