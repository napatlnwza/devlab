num=[]
while True:
    a=int(input("Enter Num : "))
    if a == 0:
        break
    num.append(a)
num.sort(reverse=True)
print(num[0])