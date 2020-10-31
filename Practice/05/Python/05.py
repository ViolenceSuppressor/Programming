x_zero = float(input("Введите x_zero"))
v_zero = float(input("Введите v_zero"))
t = float(input("Введите t"))
g = 9.8

print(v_zero * abs(v_zero) / (2 * g) + g * ((t - v_zero / g) * abs(t - v_zero / g)) / 2)

input("\n\nPress the enter key to exit.")