// 210109 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 9. �⺻ ����2
// ���� 11653. ���μ����� -> ����!

/*
// SOL1) �� Ǯ�̰���

#include <iostream>
using namespace std;

//#include <vector>

int main()
{
	int N;
	cin >> N;

	// ���μ����� -> � ���� ������ �� ���� �迭�� �ִ´�
	//vector<int> v; // ���μ� �ִ� �迭
	//int div = 0; // ���μ�


	while (N > 1) // ���� ���ǿ��� N�� 1�̸� ��� X
	{
		for (int i = 2; i <= N; i++)
		{
			if (N%i == 0) // ���� ������ ��
			{
				//div = v[i];
				cout << i << endl;
				//cout << div << " ��" << i << " ��° �迭 index�� �� ����̴�" << endl;

				N /= i;
				//i = j; // ���� ���μ��� ã�� ���ؼ� N�� ������, �������� ���� i�� ����

				break;
			}
		}
	}
	
	return 0;
}
*/



// 2. ���ͳ� Ǯ�� - �ڷᱸ��

#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

int main()
{
	int N;
	cin >> N;

	// ���μ����� -> � ���� ������ �� ���� �迭�� �ִ´�
	vector<int> v; // ���μ� �ִ� �迭
	int div = 0; // ���μ�

	while (N > 1) // ���� ���ǿ��� N�� 1�̸� ��� X
	{
		for (int i = 2; i*i <= N; ++i)
		{
			while (N%i == 0)
			{
				v.push_back(i);
				N /= i;
			}
		}

		if (N > 1)
			v.push_back(N);


		sort(v.begin(), v.end());

		for (int i = 0; i < N; i++)
		{
			cout << v[i] << endl;
		}

		break;

	}
	
	return 0;	
}



//// ���� part
// 