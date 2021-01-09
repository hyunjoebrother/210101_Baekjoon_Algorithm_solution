// 210108 백준 단계별로 코테 준비 시작하기 -> 매일 Github 올리기 (11:50PM)
// IUPC 예비소집 문제 -> 문제는 캡처본 저장
// B. 어두운 굴다리 -> 성공! (파이썬 코드 by 승우)

import sys
import math as m
from collections import deque
N = int(sys.stdin.readline())
M = int(sys.stdin.readline())
x = deque(map(int, sys.stdin.readline().split()))
if M == 1:
Max = N
elif x[0] != 0 and x[-1] != N :
	x.appendleft(0)
	x.append(N)
	Max = x[1] - x[0]
	for i in range(1, len(x) - 1) :
		if i != len(x) - 2 :
			blank = m.ceil((x[i + 1] - x[i]) / 2)
		else :
			blank = x[i + 1] - x[i]
			if blank > Max:
Max = blank
elif x[-1] != N :
	x.append(N)
	Max = m.ceil((x[1] - x[0]) / 2)
	for i in range(1, len(x) - 1) :
		if i != len(x) - 2 :
			blank = m.ceil((x[i + 1] - x[i]) / 2)
		else :
			blank = x[i + 1] - x[i]
			if blank > Max:
Max = blank
elif x[0] != 0 :
	x.appendleft(0)
	Max = x[1] - x[0]
	for i in range(1, len(x) - 1) :
		blank = m.ceil((x[i + 1] - x[i]) / 2)
		if blank > Max:
Max = blank
		else :
			Max = m.ceil((x[1] - x[0]) / 2)
			for i in range(1, len(x) - 1) :
				blank = m.ceil((x[i + 1] - x[i]) / 2)
				if blank > Max:
Max = blank
print(Max)