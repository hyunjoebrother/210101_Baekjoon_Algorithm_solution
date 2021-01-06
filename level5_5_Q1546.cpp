// 210106 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 5. 1���� �迭
// ���� 1546. ��� -> ����!


/*
// SOL1) �� Ǯ�̰���

#include <iostream>
using namespace std;

#include <algorithm>


int N, M;
double Score[1000] = { 0, }; // ���� N�� ���� �迭


int main()
{
	// ù° �ٿ� ���� �� ���� ���� N �Է�
	cin >> N;

	double sum = 0.0; // ��հ� �Ҽ��� ��¿�

	// ��° �ٿ� ������ ���� ���� �Է�
	for (int i = 0; i < N; i++)
	{
		cin >> Score[i];
	}

	// �ִ� �ǳ����� ���� ���� ����
	sort(Score, Score + N);
	M = Score[N - 1];
	
	//cout << "�ִ� : " << M << endl;


	// �ִ� M ���� ������ ���� �� sum ���ϱ�
	for (int i = 0; i < N - 1; i++)
	{
		//cout << i << " ��° �� : " << Score[i] << endl;
		//cout << i << " ��°���� ���ϱ� ���� : " << sum << endl;
		sum = sum + Score[i];
		//cout << i << " ��°���� �� : " << sum << endl;
	}
	

	//cout << "�ִ� ���� ���� �� : " << sum << endl;

	// ���� ����
	// ���� ����� (a+b+c+...+z+M) / N
	// ���� ����� (100 / M ) * (a+b+...+z+M) /N = 100  * (sum+M) / (M * N)

	//cout << "���� ��� : " << (sum + M) / N << endl;
	cout << "���� ��� : " << 100 * (sum + M) / (M * N);
	//printf("%lf\n", 100 * (sum + M) / (M * N));

	return 0;
}
*/


// 2. ���ͳ� Ǯ�� - �ڷᱸ��

#include <iostream>
using namespace std;

#include <vector> // �迭
#include <algorithm> // sort

int N;

// ���� N�� ���� �迭
vector<double> v; // vector<data type> [���� �̸�]���� vector ����


int main()
{
	// ù° �ٿ� ���� �� ���� ���� N �Է�
	cin >> N;

	
	double sum = 0.0; // ��հ� �Ҽ��� ��¿�
	double score = 0.0;

	// ��° �ٿ� ������ ���� ���� �Է�
	for (int i = 0; i < N; i++)
	{
		cin >> score;
		v.push_back(score); // v�� ���� score �߰��Ѵ�
	}

	// �ִ� �ǳ����� ���� ���� ����
	sort(v.begin(), v.end()); 

	// �ִ� = v[N-1] �� ������ �̿� -> ���� ���ϱ�
	for (int i = 0; i < N; i++)
	{
		v[i] = v[i] / v[N - 1] * 100;
		sum += v[i];
	}

	cout << sum / N << endl;

	return 0;
}

	
//// ���� part
// �Է� ���� �߿��� � test case�� ������ ����
// sum ���ϱ���� ���� -> sum ���� 100���� �����Ǿ� �־ �ϼ� �ٷ� ���� 0���� ��������
// �Ҽ��� ��� ���� -> douvle = 0.0 ������ �ٲ� + printf lf������ �Ҽ��� ����
//  �ð��ʰ� -> ó���� Score[] �ߴµ� size �������ִ� �ذ� �Ϸ�! (���)