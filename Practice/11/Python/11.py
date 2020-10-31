base = float(input())
index = int(input())
result = 1

if index > 0:
	for i in range(0,index):
		result *= base
else:
	for i in range(index, 0):
		result /= base
print(result)		