list = []
print "nothing in list.."
print list

for i in range(1,1000):
	if ((i % 3 == 0) | (i % 5 == 0)):
		list.append(i)

sum = 0

print sum

for i in list:
	sum = sum + i

print sum