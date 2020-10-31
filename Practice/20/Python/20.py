cash = int(input())
number = int(input())
drink = []
price = []
volume = []
sumVolume = 0
bestChoice = 0
for i in range(0,number):
	idrink,iprice,ivolume = input().split()
	drink.append(idrink)
	price.append(int(iprice))
	volume.append(int(ivolume))
while (True):
	canBuy = False
	for i in range(0,number):
	    if cash >= price[i]:
	        canBuy = True
	        if volume[bestChoice] / price[bestChoice] < volume[i] / price[i]:
	            bestChoice = i
	if canBuy == False:
		break;
	print(drink[bestChoice],cash // price[bestChoice])
	sumVolume += cash // price[bestChoice] * volume[bestChoice]
	cash %= price[bestChoice]
	volume[bestChoice] = 0
if sumVolume == 0:
	print("-1")
else:
	print(sumVolume,cash,sep = "\n")
