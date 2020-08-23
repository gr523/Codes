from sys import stdin

first=1
for c in stdin:
    c=list(map(int,c.split()))
    x=list(map(int,input().split()))
    ans=[]
    l=len(c)-1
    for x0 in x:
        i=l
        s=0
        for c0 in c:
            s=s+c0*x0**i
            i-=1
            if i<0:
                break
        ans.append(s)
    for ind,value in enumerate(ans):
        if ind<len(ans)-1:
            print(value,end=" ")
        else:
            print(value,end="")
    print("")