# https://www.codechef.com/LOCJUN17/problems/HHMGN

for _ in range(int(input())):
	n, s = map(int, input().split())

	c = list(map(int, input().strip().split()))
	c.sort()
	
	flag = 0
	residue = 0
	i = 0
		
	for i in range(n):
		if c[0] * len(c) + residue == s:
			print(c[0])
			flag = 0
			break
		else:
			residue += c[0]
			c.pop(0)
			flag = 1
		
	if flag == 1:	
		print('-1')
	
			
		
		