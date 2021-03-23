#include <bits/stdc++.h>

using namespace std;

const int N = 2e7 + 13;
int mind[N],val[N];

int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    mind[1] = 1;
    for (int i = 2; i < N; ++i) if (!mind[i])
        for (int j = i; j < N; j += i){
            if(!mind[j]) mind[j]=i;
            val[j]++;
        }

    int t;
    scanf("%d", &t);
    while (t--) {
        int c, d, x;
        scanf("%d%d%d", &c, &d, &x);
        int ans = 0;
        for (int i = 1; i * i <= x; ++i) {
            if (x % i != 0) continue;
            int k1 = x / i + d; 
            if (k1 % c == 0) ans += 1 << val[k1 / c];
            if (i * i == x) continue;
            int k2 = i + d;
            if (k2 % c == 0) ans += 1 << val[k2 / c]; 
        }
        printf("%d\n", ans);
    }
}
