try:
    print(eval(input()))
except SyntaxError:
    print("Неверно введены данные")
except  ZeroDivisionError:
    print("Нельзя делить на ноль")