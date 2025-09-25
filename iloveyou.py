# love me?
# ILoveYou
# I Love You
# เขียนโดยพี่ภูมิ
b=-1
a=input()
c=-(len(a))+1
for i in range(len(a)):
  T1=a[i]#ตัวปัจจุบัน
  T2=a[c]#ตัวอนาคต
  T3=a[b]#ตัวอดีต
  if T1==T1.upper() and T1!=',':
    if T1==T1.upper() and T2==T2.upper() and T1!=',':
      print(T1,end=' ')
    elif b==-1 and T1!=',':
      print(T1,end='')
    elif T1 != ',':
      print(T1,end='')
  else:
    if T1 == T1.lower() and T2 == T2.upper() and T1!=',' and T2!="'":
      print(T1, end=' ')
    elif T1!=',':
      print(T1,end='')
  c+=1
  b+=1