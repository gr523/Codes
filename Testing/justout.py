from bisect import *
a = [1,2,3,4,5,10,23,56,100,156]

a = a*[-1]

v = 55

print(a[bisect(a,v)])
print(a[bisect_left(a,v)])
print(a[bisect_right(a,v)])

