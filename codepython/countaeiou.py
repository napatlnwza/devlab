text=input("Enter Alphabet : ")
count=0
for i in text:
    if i.lower() in ['a' ,'e','i','o','u']:
        count+=1
print(count,end="")