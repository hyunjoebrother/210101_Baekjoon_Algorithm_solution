// 210102 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 4. while��
// ���� 10952. A+B-5 -> ����!

#include <iostream>
using namespace std;

int A, B;

int main()
{
	/* SOL1) �� Ǯ�̰���

	//int A, B;	-> �������� ����
	int C = 1; // while�� ������ ���� ù��° ���� ���� ������

	while (C != 0) // while�� ���ǽ� �˻� �� True�� �� ���� �ݺ�
	{
		// �� ���� A�� B �Է�	
		cin >> A >> B;
		C = A + B;

		if (A == 0 && B == 0) // 0 �ƴ� ����
		{
			return 0; // ��� �� ��������
		}

		cout << C << endl;
	}
	*/

	// SOL2) ���ͳ� ���� Ǯ�̰���

	while (true)
	{
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;
		cout << A + B << endl;
	}

	return 0;
}


//// ���� part
// "�ʱ�ȭ���� ���� A, B ���������� ���" ���� 
// -> main�ۿ� �μ� �����ؼ� '��� �Լ������� ��� ������' <��������>�� ����ϱ�