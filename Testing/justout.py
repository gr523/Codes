from math import ceil,sqrt

for _ in range(int(input())):
    n=int(input())
    ans=ceil((-1+sqrt(1+8*n))/2) 
    print(ans+(ans*(ans+1)/2-n==1))

