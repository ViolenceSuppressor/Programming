def BMI(weight : float, height : float) -> float:
	return weight / (height * height)

def printBMI(BMI : float) -> float:
	if (BMI < 18.5):
		print("Underweight")
	elif (BMI >= 18.5 and BMI < 25.0):
		print("Normal")
	elif (BMI >=25.0 and BMI < 30.0):
		print("Overweight")
	else:
		print("Obesity")
		
weigt, height = map(float,input().split())
printBMI(BMI(weigt,height / 100))
