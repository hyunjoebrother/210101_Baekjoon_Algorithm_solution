// 210102 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 4. while��
// ���� 1110. ���ϱ� ����Ŭ -> ����!

#include <iostream>
using namespace std;

int N;
int a, b, c;

int cycle; // cycle �ݺ� Ƚ��

int main()
{
	// ù° �ٿ� N �Է� (0<=N<=99)
	cout << "N�� �Է��ϼ���" << endl;
	cin >> N;

	// N ���� �ڸ� a, ���� �ڸ� b -> 10���� �۾Ƶ� a=0, �������� b �״��
	a = N / 10;
	b = N % 10;

	cout << "a = " << a << "\n" << "b = " << b << endl;

	while (true) // true�� ���� ���� �ݺ��� on
	{
		// ���ϸ� a+b -> ������ 2�� ���� ��ġ�� b~(a+b)%10 = c�� ����
		c = 10 * b + (a + b) % 10;

		a = c / 10;
		b = c % 10;

		cout << "c = " << c << endl;
		cycle++; // �ݺ��� ������ cycle Ƚ�� 1�� ���� ��������

		if (N == c)
		{
			cout << cycle << "�� ����Ŭ �Ϸ�!" << endl;
			break;
			// ����Ŭ Ƚ���� ��� ���ұ��?.?
		}

		/*for (i = 1; i <= cycle; i++)
		{
			
		}*/
	}

	return 0;
}

//// ���� part
// count ������ ��ȣ�ϴٴ� E0266 ����
// -> using namespace std�� count��� ������ �־ �ٸ� �̸����� �ٲٸ� �ذ�

// �˰����� �����ߴµ� cycle �ݺ� Ƚ���� �� ���ϰ��� -> cycle++ �� �ذ�