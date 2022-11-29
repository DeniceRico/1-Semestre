from math import sqrt

a=10
b=33
c=5

int(input("Dame el valor de a:"))
int(input("Dame el valor de b:"))
int(input("Dame el valor de c:"))

val1=b*b
val2=val1-4*a*c
val3= sqrt(val2)
val4=-b+val3
val5=-b-val3
val6=2*a
val7=val4/val6
val8=val5/val6
res1=val7
res2=val8
print("x1:", res1)
print("x2:", res2)
