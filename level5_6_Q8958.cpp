// 210106 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 5. 1���� �迭
// ���� 8958. OX���� -> ����!



// SOL1) �� Ǯ�̰��� + ���ͳ� ����

#include <iostream>
using namespace std;

#include <vector>
//#include <algorithm>

#include <string> // string ���ڿ� ���� ���� ����

//char Answer[80] = { 0, }; // �� O/X �ִ� 80�� ���� �迭
//#define MAX 81

int N;
string answer;

//vector<string> v;

int main()
{
	// ù° �ٿ� test case ���� N �Է�
	cin >> N;

	// ��° �ٺ��� �� ���� test case �Է�, ���̴� 0���� ũ�� 80���� ���� ���ڿ�
	// ������ O or X


	//char end = 0;

	while (N--)
	{
		//cin >> Answer[i];
		cin >> answer;
		//v.push_back(answer); // v�� ���� answer �߰��Ѵ�


		// vector�� �ؼ� ���� X�� remove�ؼ� size ũ�⸦ ���ұ�

		// ���� �����ϰ� �ǳ��� �ִ� ���� X�� ������ -> ������ ���ڿ� ���� �Ұ� ����
		// sort(v.begin(), v.end())

		int count = 0;
		int score = 0;

		for (int i = 0; i < answer.size(); i++) // N���� test case
		{
			//  ���� O ������ ������
			if (answer[i] == 'O')
			{
				count++; // O ���� ī��Ʈ
				score += count;
			}
			else
			{
				count = 0;
			}


			//v.erase(v.end()); // �̰� �ش� ��ġ ���Ҹ� �����ϴ� ����

			//cout << i << " ��° �� : " << v[i] << endl;

			//cout << v.size() << endl;
		}
	cout << score << endl;
	}


	return 0;
}



// 2. ���ͳ� Ǯ�� - �ڷᱸ��




//// ���� part
// v[i]�� ��µ��� �ʴ´� -> ���ڿ��� char (�� ����)���� string
// �Լ� ������ 0���� �ʱ�ȭ����� ���߿� ���� �� ���δ�