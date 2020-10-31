numbers = [0]
for i in range(0,36):
    numbers.append(0)
red = (1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36)
while (True):
	userinput = int(input())
	if userinput < 0:
		break
	numbers[userinput]+=1
	#Первая строка
	maxNum = max(numbers)
	for i in range(0,37):
		if maxNum == numbers[i]:
			print(i,end = " ")
	print()
	#Вторая строка
	for i in range(0,37):
		if numbers[i] == 0:
			print(i,end = " ")
	print()
	#Третья строка
	redSum = 0
	blackSum = 0
	for i in range(0,37):
		if numbers[i] != 0 and i != 0:
			for number in red:
				if (i == number):
					redSum += numbers[i]
					break
			else:
				blackSum += numbers[i]
	print(redSum,blackSum,"\n")