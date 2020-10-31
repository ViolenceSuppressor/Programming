import random
random.seed()
userinput = 1;
while (userinput == 1):
	n = random.randrange(0,101)
	for i in range(0,5):
		userinput = int(input())
		if n < userinput:
			print("Загаданное число меньше.")
		elif n > userinput:
			print("Загаданное число больше.")
		else:
			print("Поздравляю!Вы угадали.")
			break
	else:
	    print("Вы проиграли.Было загадано :",n)
	print("Хотите начать сначала? (1 - ДА )")
	userinput = int(input())