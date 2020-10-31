import math
inputType = int(input());
if inputType==1:
	a = float(input())
	b = float(input())
	c = float(input())
	if (a >= b + c or b >=a + c or c >= a + b):
	    print("Такого треугольника не существует")
	else:
        p = (a + b + c) / 2
        print("S = " , math.sqrt(p * ((p - a) * (p - b) * (p - c))))
elif inputType == 2:
    aX,aY = map(float,input().split())
    bX,bY = map(float,input().split())
    cX,cY = map(float,input().split())
    
    a = math.sqrt(math.pow(bX - aX,2) + math.pow(bY - aY,2))
    b = math.sqrt(math.pow(cX - bX,2) + math.pow(cY - bY,2))
    c = math.sqrt(math.pow(aX - cX,2) + math.pow(aY - cY,2))
    if a >= b + c or b >=a + c or c >= a + b:
	    print("Такого треугольника не существует")
    else:
        p = (a + b + c) / 2
        print("S = " , math.sqrt(p * ((p - a) * (p - b) * (p - c))))
else:
	print("Неверный ввод");
input("\n\nPress the enter key to exit.")