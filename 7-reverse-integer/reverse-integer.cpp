class Solution {
public:
    int reverse(int x) {
        if(x>INT_MAX || x<INT_MIN)return 0;
        long long int sum=0;
        while(x!=0){
            int digit = x%10;
            if(sum * 10>INT_MAX || sum * 10<INT_MIN)return 0;
            sum = sum * 10 + digit;
            x=x/10;
        }
        return sum;
    }
};