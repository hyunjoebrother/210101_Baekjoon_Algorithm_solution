// 210105 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 5. 1���� �迭
// ���� 3052. ������ -> ����!


/*
// SOL1) �� Ǯ�̰��� + ���ͳ� Ǯ��

#include <iostream>
using namespace std;

int num, output;
//int Array[10] = { 0, }; // �Է°� ���� �迭
int Output[42] = { 0, }; // ������ �� ���� �迭
//int Count[10] = { 0, }; // ī���� �� ���� �迭

int main()
{
	int count = 0;

	// 1000���� ���� ���� 10���� �� �ٿ� �ϳ��� �Է�
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		//Array[i] = num;
		//output = num % 42;
		Output[num % 42]++; // ������ ���� ���� -> 0~41 ���� �� ����
	}


	//cout << i << " �� index : " << Output[num%42] << endl;
	//cout << i << " �� index : " << Array[i] << endl;
	//cout << "����� ������ : " << Output[i] << endl;


	/*
	for (int j = 0; j < 42; j++)
	{
		if (j == Output[i]) // ������ ���� �ߺ� üũ��
		{
			Count[i]++;
		}

		else
			Count[i] = 0; // �̷��� �ϸ� ��� �ٸ� �������� ���� ����..
			//cout << j << " �� �������� ī���� �� : " << Count[i] << endl;
	}
	*/

	/*
	for (int i = 0; i < 10; i++)
	{
		if (Count[i] == Count[i]) // �������� ī��Ʈ
		{
			count++;
			cout << count << endl;
		}
	}
	*/
/*
	// ���� �ٸ� ������ ����
	for (int i = 0; i < 42; i++)
	{
		if (Output[i] != 0)
			count++;
	}

	cout << "ī���� �� : " << count << endl;

	return 0;
}
*/

// 2. ���ͳ� ���� Ǯ�� - �ڷᱸ��

#include <iostream>
using namespace std;

#include <vector> // vector ADT : ���� �迭 ���� Ŭ����
#include <algorithm> // sort

int main()
{
	vector<int> v; // vector<data type> [���� �̸�]���� vector ����
	int n, a;
	int num = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> a; // 1000���� ���� ���� 10���� �� �ٿ� �ϳ��� �Է� -> v�� ��´�
		v.push_back(a); // v�� ���� a�� �߰��Ѵ�
		v[i] = v[i] % 42; // ������ ������ ������ v
	}

	sort(v.begin(), v.end()); // sort(������, ����+1) �Լ��� �������� ����
							  // v.begin() : v�� ù ���Ҹ� ����Ű�� �ݺ���
							  // v.end() : v�� ���� ǥ���ϴ� �ݺ���

	for (int i = 0; i < 10; i++)
		cout << v[i] << endl;

	cout << "unique �Լ� ����" << endl;

	v.erase(unique(v.begin(), v.end()), v.end()); // v.erase(p) : p�� ����Ű�� ���� ����
			// unique �Լ� : vector �迭���� �ߺ����� �ʴ� ���ҵ��� �պ��� ä������
							// �� �� �ߺ� ���� �ڽ��� �ٲ� vector�� end()�κ��� ��ȯ

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

	cout << v.size(); // v.size() : v�� ���� ����

	return 0;
}



//// ���� part
// ī���� Ƚ�� ���ϴ� ���� ���� -> ���� for�� 2�� ���� ��������
// �ߺ��� ���� �Ϳ� ����