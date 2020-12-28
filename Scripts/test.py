t = int(input())

while t>0:
    t = t - 1
    n = int(input())
    if n < 4:
        print(n)
    else:
        n = n - 3
        p = n//7
        ans = p*9+3
        n = n % 7
        if n > 0:
            ans = ans+n+1
        if n >= 2:
            ans = ans+1

        print(ans)