class Solution {
public:
    double Cpow(double x ,long long n){
        if(n==0)return 1;
        if(n==1)return x;
        
        double half = Cpow(x,n/2);
        double res = half * half ;

        if(n%2 == 1){
            res =res * x;
        }
        return res;
    }
    double myPow(double x, int n) {
       long long N = n; // long long to avoid overflow
       if (N < 0) {
        N = -N; 
        double pow1 = Cpow(x, N);
        return 1 / pow1;
       }
        return Cpow(x, N);
   }
};