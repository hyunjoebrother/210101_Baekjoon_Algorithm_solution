// 210103 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 5. 1���� �迭
// ���� 2562. �ִ� -> ����!


// SOL1) �� Ǯ�̰���

#include <iostream>
using namespace std;

#include <algorithm>

// 9���� ���� �ٸ� �ڿ��� �Է� -> �迭��
int Array[9] = { 0, }; // sort �� �迭, 9�� ���� ����
int Before[9] = { 0, }; // sort �� ���� �迭

int i, p; // �ݺ����� // index�� position


int main()
{
	int max = 0; // �ִ�

	for (i = 0; i < 9; i++)
	{
		cin >> Array[i];
		cout << "�迭 ���� ���� : " << Array[i] << endl;

		Before[i] = Array[i]; // ���� �Ŀ� ���� �迭 �����

		// �ִ밪 ��ġ ���ϱ�
		if (max < Before[i])
		{
			max = Before[i];
			p = i + 1; // �� ��° �����̹Ƿ� �迭���� �ϳ� ���� �� ����
		}
	}

	// �ִ밪 ���ϱ�
	sort(Array, Array + 9); // sort(������, ����+1) �Լ��� �������� ����
	max = Array[8];
	cout << "�ִ� : " << max << endl;

	//cout << "���� �� �迭 ó���� ������ �� : " << Array[0] << " " << Array[8] << endl;

	//cout << "Before �迭 : " << Before[1] << endl; // ����!
	//cout << "max : " << max << endl; // ����!

	cout << "��ġ : " << p << endl;
	

	return 0;
}



/*
// SOL2) ���ͳ� Ǯ�̰��� No �ڷᱸ��

#include <iostream>
using namespace std;

int Array[100];
int MAX, num;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		cin >> Array[i]; // �迭 �Է�

		if (MAX < Array[i]) // ������ �ƴϰ� �׳� ũ�� �񱳸� ����
		{
			MAX = Array[i];
			num = i; // index ��ġ ����
		}
	}
	cout << MAX << endl << num;

	return 0;
}
*/


//// ���� part
// �ִ��� index ���ϴ� ������ ���� + ��ġ�� ��� 8�� ����
// -> if���� for�� �ۿ� �Ἥ i=9 -> p = i - 1 = 8 ���� �� ���� -> ������ ����
// �ִ� ���� �� if�� �� check