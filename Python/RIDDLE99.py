#https://www.codechef.com/LOCJUN17/problems/RIDDLE99/

	
for _ in range(int(input())):
	a, b, m = map(int, input().split())
	if a % m == 0:
		print(b // m - a // m + 1)
	else:
		print( b // m - a // m )
