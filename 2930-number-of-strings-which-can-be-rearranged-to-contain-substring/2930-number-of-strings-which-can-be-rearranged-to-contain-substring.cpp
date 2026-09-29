class Solution {
public:
#define ll long long int
    ll mod = 1000000007;
    ll pow(int x, int p) {
        if (p == 0)
            return 1;
        if (p == 1)
            return x;
        ll half = pow(x, p / 2);
        ll currPow = (half * half) % mod;
        if (p % 2)
            currPow = (currPow * x) % mod;
        return currPow;
    }
    int stringCount(int n) {

        ll total = pow(26, n);
        ll noL = pow(25, n); 
        ll oneE = (n * pow(25, n - 1)) % mod;
        ll noLE = pow(24, n); 
        ll noLET = pow(23, n);
        ll oneENoL = (n * pow(24, n - 1)) % mod; 
        ll oneENoLT = (n * pow(23, n - 1)) % mod;
        ll res = (total - 3 * noL % mod - oneE + 3 * noLE % mod - noLET +
                  2 * oneENoL % mod - oneENoLT) %
                 mod;
        return (res + mod) % mod;
    }
};