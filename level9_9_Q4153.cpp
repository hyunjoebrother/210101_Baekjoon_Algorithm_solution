// 210109 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 9. �⺻ ����2
// ���� 4153. �����ﰢ�� -> ����!


// SOL1) �� Ǯ�̰���

#include <iostream>
using namespace std;

#include <math.h> // pow�Լ�
#include <vector>
#include <algorithm>

int main()
{
	//int N;
	//cin >> N;
	
	//�ϳ��� �־
	int a, b, c;

	vector<int> v(3);

	for (int i = 0;; i++)
	{
		//v.push_back(N); // �迭�� �ְ� 
		cin >> a >> b >> c;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);

		if (a == 0 && b == 0 && c == 0)
			break;

		sort(v.begin(), v.end()); // ���̸� ���� ������ ���� �Ŀ�

		if (pow(v[2], 2) == pow(v[0], 2) + pow(v[1], 2))
		{
			cout << "right" << endl;
		}

		else
		{
			cout << "wrong" << endl;
		}

		v.clear(); //���� ���� ����
	}

	return 0;
}



// 2. ���ͳ� Ǯ�� - �ڷᱸ��




//// ���� part
// ����� ���� �� -> vector�� ũ�� ���� (3) �ϴϱ� ���� ������
// �ϳ��� push������
// while���� ������� ���̹Ƿ� clear�� ���� �����ϰ� ���ο� ���� �־��ش�