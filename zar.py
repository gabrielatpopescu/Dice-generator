import random

x = random.randrange(1, 7)
y = random.randrange(1, 7)

if x < y :
	mini = x
	maxi = y
else :
	mini = y
	maxi = x

if x + y == 12 :
	print("Dau cu zaru 6 6 ca mine nu se mai naste")
elif x + y == 11 :
	print("Dau cu zaru", maxi, mini, "n-am nevoie de servici")
else :
	print("Dau cu zaru", x, y)
