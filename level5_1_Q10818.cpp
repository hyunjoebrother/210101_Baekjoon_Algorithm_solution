// 210103 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 5. 1���� �迭
// ���� 10818. �ּ�, �ִ� -> ����!


/* SOL1) �� Ǯ�̰���

#include <iostream>
using namespace std;

int N; // �迭 ��� ����
int i; // �ݺ��� index ǥ�ÿ�

//int Array[] = { 1,2,3 }; // �ڵ����� �迭 Array�� ���� �����ϰ� �ʱ�ȭ
int Array[1000000] = { 0, }; // ��� 0���� �ʱ�ȭ


// �迭 : �ټ��� ���� type�� ������ �� ���� ���� �������� ���� ����
// 1���� : �ڷ���, �迭�̸�, ���� ���� check -> int Array[6] �迭 ���̴� 0~5�� 6��

int main()
{
	int min, max; // �ּڰ��� �ִ�

	// ù° �ٿ� ������ ���� N �Է�
	cout << "N�� �Է��ϼ���" << endl;
	cin >> N;
	
	for (int i = 0; i < N; i++) // N���� ���� ���̰� ����
	{
		// ��° �ٿ��� N���� ������ �������� �����ؼ� �Է�
		cin >> Array[i]; // N�� �迭 �Է�
		cout << "��ü �迭 �� : " << Array[i] << endl;
	}
	
	// �迭 ����� �ּڰ��� �ִ� ���
	min = Array[0];
	max = Array[0];

	for (int i = 0; i < N; i++) // N�� ���� �ݺ��ؼ� �� ũ�� ��
	{
		if (Array[i] < min)
		{
			min = Array[i];
		}

		if (Array[i] > max)
		{
			max = Array[i];
		}
	}

	cout << "�ּڰ� : " << min << endl;
	cout << "�ִ� : " << max << endl;

	return 0;
}
*/


// SOL2) ���ͳ� ���� Ǯ�̰��� - �ڷᱸ��

#include <iostream>
using namespace std;

#include <vector>
#include <algorithm> // sort ���

// vector ADT : ������ object�� sequence�� ����, ���� '�迭'���� Ŭ���� (1 type��)
// ���� ���� ���� ���� ���� ����, �ڵ����� �迭�� ũ�� ������ �߰� ������ ����
// ��ҿ� �����ϰų� ��/�� ��Ҹ� �߰�, ���� �� ũ�� üũ ��� �Լ� ����

int main()
{
	int N, num;
	
	// ù° �ٿ� ������ ���� N �Է�
	cin >> N;

	vector<int> v; // vecotr<data type> [���� �̸�]���� vector ����
	for (int i = 0; i < N; i++)
	{
		// ��° �ٿ��� N���� ������ �������� �����ؼ� �Է�
		cin >> num; // N���� �迭 ��� �Է�
		v.push_back(num); // vector�� back�� num�� �ִ´�
	}

	// sort�Լ� -> ������ �ִ� �迭�� ���� ����
	sort(v.begin(), v.end()); // sort(������, ����+1) �Լ��� �������� ����

	// �迭 ����� �ּڰ��� �ִ� ���
	cout << v.front() << " " << v.back() << endl;

	return 0;
}


//// ���� part
// �迭���� min, max ���ϱⰡ ���� -> for���� ���� ����
// -> ��Ÿ�� ���� �߻� : �迭�� index�� ������ �� �ҷ��� �� �ִ� ���� �ҷ��� ��
 // -> [100] �̷� ������ �迭 �����ϴϱ� ����! or �����Ҵ��� �ؾ� �Ѵٰ� ��