// 210106 ���� �ܰ躰�� ���� �غ� �����ϱ� -> ���� Github �ø��� (11:50PM)
// Level 6. �Լ�
// ���� 15596. ���� N���� �� -> ����!


// SOL1) �� Ǯ�̰��� + ���ͳ� Ǯ��

// ���� n�� �־����� �� ���� ���ϴ� �Լ��� �ۼ��Ͻÿ�
//long long sum(std::vector<int> &a); �Լ� �ۼ�

#include <iostream>
using namespace std;

#include <vector>

int n; // ���� ���ؾ� �ϴ� ���� n��
vector<int> a; // ���� ���ؾ� �ϴ� ���� n���� ����Ǿ� �ִ� �迭

// long long�� 8byte integer data type

// �Լ� �ۼ�
long long sum(vector<int> &a)
{
	int sum = 0;

	for (int i = 0; i < a.size(); i++)
		sum = sum + a[i];

	return sum;
}



// 2. ���ͳ� Ǯ�� - �ڷᱸ��




//// ���� part
// 