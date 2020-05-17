import math
for e in range(int(input())):
	n=int(input())
	n=2*n
	pi=math.pi
	ans=math.tan(pi/n)
	print(round(1/ans,7))
