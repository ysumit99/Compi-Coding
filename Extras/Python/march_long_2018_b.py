t = int(input())

for i in range(t):
	n = int(input())
	loss = 0.0
	
	for j in range(n):
		temp = 0.0
		temp2 = 0.0
		string_input = input().split()
		data = [] 
		
		
		
		for single in string_input:
			data.append(int(single))
			
		price = data[0]
		quantity = data[1]
		discount = data[2]
		
		temp = price + (price * (discount / 100))
		temp2 = temp -  (temp * (discount / 100))
		temp = price - temp2
		temp  =  temp*quantity 
		
		loss = loss + temp
		temp = 0.0
		temp2 = 0.0
		
	print(loss)