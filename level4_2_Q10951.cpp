// 210102 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// Level 4. while문
// 문제 10951. A+B-4 -> 성공!

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

//// 막힌 part
// 앞문제와 똑같아 보이는데 출력초과??
// 메모 : 입력이 끝날 때까지 A+B를 출력하는 문제. EOF에 대해 알아 보세요.??

// End Of File (EOF) : 콘솔창에는 파일의 끝이 따로 존재하지 않음 (ctrl+Z)
// 문자열을 입력받을 때 scanf등은 int형으로 eof (ctrl+Z)를 입력 받을 때 -1 반환
// 파일의 끝을 받아들여 종료를 시킬 수 있다
// EOF는 test case의 갯수가 무제한이라는 것을 가정할 때 유용하다