# choice=int(input("input"))
# money=float(input("wrgw "))
# wallet=5000.50
# if choice is 1:
#     print(wallet+money)
# if choice is 2:
#     print(wallet-money)
# if choice is 3:
#     print(wallet)

# sum=0
# i=1
# while True:
#     if i>5:
#         break
#     sum+=i
#     i+=1
# print(sum)
# sum=0
# i=0
# while i<=5:
#     sum+=i
#     i+=1
# print(sum) 

# n=int(input())
# for i in range(1,n+1):
#     for j in range(1,i+1):
#         print(j,"|",end="")
#     print()

# for i in range(200,448):
#     if i%2!=0:
#         print(i)

n=int(input())
isprime=True
for i in range(2,n):
    if n % i ==0:
        isprime=False
        break
if isprime:
    print(isprime)
else :
    print(isprime)