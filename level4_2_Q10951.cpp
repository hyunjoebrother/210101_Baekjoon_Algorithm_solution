// 210102 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 4. while��
// ���� 10951. A+B-4 -> ����!

#include <iostream>
using namespace std;

int A, B;

int main()
{
	while (true)
	{
		cin >> A >> B;

		if (cin.eof() == true)
			break;

		else
			cout << A + B << "\n";
	}

	return 0; 
}

//// ���� part
// �չ����� �Ȱ��� ���̴µ� ����ʰ�??
// �޸� : �Է��� ���� ������ A+B�� ����ϴ� ����. EOF�� ���� �˾� ������.??

// End Of File (EOF) : �ܼ�â���� ������ ���� ���� �������� ���� (ctrl+Z)
// ���ڿ��� �Է¹��� �� scanf���� int������ eof (ctrl+Z)�� �Է� ���� �� -1 ��ȯ
// ������ ���� �޾Ƶ鿩 ���Ḧ ��ų �� �ִ�
// EOF�� test case�� ������ �������̶�� ���� ������ �� �����ϴ�