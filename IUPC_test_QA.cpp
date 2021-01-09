// 210108 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// IUPC 예비소집 문제 -> 문제는 캡처본 저장
// A. 이름 궁합 테스트 -> 성공! (파이썬 코드 by 승우)

import sys
blank_1 = [3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1]
def change(blank: str)->str:
result = ''
for index in range(len(blank)) :
	result += str(blank_1[ord(blank[index]) - 65])
	return result


	n, m = map(int, sys.stdin.readline().split())
	a, b = map(str, sys.stdin.readline().split())
	c = ''
	if len(a) > len(b) :
		for i in range(len(b)) :
			c += a[i] + b[i]
			c += a[len(b):]
	else:
for i in range(len(a)) :
	c += a[i] + b[i]
	c += b[len(a):]
	c.upper()
	c = change(c)
	while len(c) != 2 :
		d = ''
		for i in range(len(c) - 1) :
			d += str((int(c[i]) + int(c[i + 1])) % 10)
			c = d
			print(str(int(c)) + '%')

