number = int(input())
for i in range(2,number):
	if number%i == 0:
		print("Сложное")
		break
else:
    print("Простое")