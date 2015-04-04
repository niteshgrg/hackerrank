import sys
import math

a = int(raw_input())
b = int(raw_input())
total = 1
denominator = 1

if a<25 and b<25:
	print ("0")
elif (a > 25 or b > 25) and abs(a - b) != 2:
	print ("0")
elif (a==24 or b==24) and abs(a - b) !=2:
        print("0")
elif a==b:
        print("0")
elif not(a > 25) or not(b > 25):
	if a > b:
		for i in range(a,a+b):
			total*=i 
		for i in range(1,b+1):
			denominator*=i
	elif b > a:
		for i in range(b,a+b):
			total*=i 
		for i in range(1,a+1):
			denominator*=i
	total = total/denominator
	print total%1000000007
else:
	for i in range(24,49):
		total*=i 
	for i in range(1, 25):
		denominator*=i 
	total = total/denominator
	if a<b:
		total *= 2**(a-24)
		total = total%1000000007
	else:
		total  *= 2**(b-24)
		total = total%1000000007 
	print total%1000000007   