// 210106 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 5. 1���� �迭
// ���� 4344. ����� �Ѱ��� -> ����!


// SOL1) �� Ǯ�̰��� + ���ͳ� Ǯ��

#include <iostream>
using namespace std;

//#include <vector>

int C, N;
// �л� ���� �迭
double Score[1001] = { 0, };
//vector<double> v;
//double Sum[] = { 0, }; // �� case�� ����

// ���� ��պ��� �Ѵ� �л� �� ī���� & ���� �����, ����
double count, sum, result;


int main()
{
	// ù° �ٿ� test case ���� C �Է�
	cin >> C;

	// ��° �ٿ��� �� test case���� �л��� N �׸��� N ���� ���� �ϳ��� �־���
	for (int i = 0; i < C; i++)
	{
		cin >> N; //�л� ��

		// sum ���� ��� ���̴� �� ����		
		sum = 0;
		double count = 0;

		for (int j = 0; j < N; j++)
		{
			// N���� ���� �ϳ��� �Է�
			cin >> Score[j]; // i��° case���� N���� �������� j �ε����� �ֱ�
			sum = sum + Score[j]; // i��° case���� N���� ���� ����		
			//cout << i << "�� ° test case �л��� ���� : " << Score[j] << endl;
		}

		//cout << i << "�� ° test case �л��� ���� �� : " << sum << endl;
		//cout << i << "�� ° test case �л��� ���� ��� : " << sum / N << endl;

		for (int j = 0; j < N; j++)
		{
			if (Score[j] > (sum / N)) // ��� : Sum[i]/N
			{
				count++;
			}
		}
		//cout << count << endl;

		// ������ = 100 * (Ư�� �л� �� / ��ü ��)
		result = (count / N) * 100;
		//printf("%.3f%%\n", result); //�Ҽ��� 3��° �ڸ����� ���
		cout.precision(5);
		cout << result << "%" << endl;
	}

	return 0;
}



// 2. ���ͳ� Ǯ�� - �ڷᱸ��




//// ���� part
// ���� ���� ���� test case���� ��� ���δ� -> for�� �ȿ� sum=0.0���� �ʱ�ȭ��Ų��
// ���� data type �� Ȯ���ϱ�