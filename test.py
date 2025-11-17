from math import *
x=input()
y=input()
x1=x.split(",")
y1=y.split(",")
dx = int(x1[0]) - int(y1[0])
dy = int(x1[1]) - int(y1[1])
print(round(sqrt(dx*dx + dy*dy),2))