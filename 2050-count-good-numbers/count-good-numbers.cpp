class Solution {
public:
const int MOD = 1e9 + 7;
    long long modPow(long long base, long long exp) {
        long long result = 1;
        base = base % MOD;
        while(exp>0){
            if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
            base = (base * base) % MOD;
            exp =exp/2;
        }
        return result;
    }
    int countGoodNumbers(long long n){
        long long even = (n+1)/2;
        long long odd = n/2;
        long long pow5 = modPow(5,even);
        long long pow4 = modPow(4,odd);
        long long sum = (pow5 * pow4) % MOD;
        return sum;
    }
};