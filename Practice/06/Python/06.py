a = float(input("Введите переменную a"))
b = float(input("Введите переменную b"))
c = float(input("Введите переменную c"))

if a == 0 and b == 0 and c == 0:
	print("x - любое число")
elif a == 0 and b == 0:
	print("корней нет")
elif b == 0:
	if ((-c / a) >= 0):
		print("x = " , sqrt(-c / a))
	else:
		print("корней нет")
elif a == 0:
	print("x = ",-c/b)
else:
	D = b * b - 4 * a * c
	if D < 0:
	    print("корней нет")
	elif D == 0:
		print("x = "<<-b/(2*a))
	else:
		print("x1 = ", (-b + sqrt(D)) / (2 * a), "x2 = ", (-b - sqrt(D)) / (2 * a),sep = "\n");
input("\n\nPress the enter key to exit.")