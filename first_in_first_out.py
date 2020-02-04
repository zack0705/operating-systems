seq = []
while(1):
	a = input("enter new")
	if(int(a)==-1):
		break
	seq.append(a)
store = int(input("enter storage"))
stored = []
for i in range(store):
	stored.append("-")
count = 0
for i in seq:
	if i in stored:
		continue
	stored = stored[1:]
	stored.append(i)
	count += 1
print(count)

