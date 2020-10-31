a = int(input("Введите переменную a"))
b = int(input("Введите переменную b"))
c = a
a = b
b = c
print("a = ",a)
print("b = ",b)
a += b
b = a - b
a = a - b
print("a = ",a)
print("b = ",b)
input("\n\nPress the enter key to exit.")