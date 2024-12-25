class Solution {
public:
    double rec(double x,int n,double ans)
    {
        if(n==0)return ans;
        ans=ans*x;
        return rec(x,n-1,ans);
    }
 double myPow(double x, int n) 
    {  
        if(x==1)return x;
       if(x==-1)
       {
           if(n%2==0)return 1;
           else return -1;
       }
        if(n==INT_MIN)return 0;
        int sign=1;
        if(n<0)
        {   
            sign=0;
            n=-(n);
        }
        double ans=1.0;
        ans=rec(x,n,ans);
     if(sign==0)
     {
         ans=1/ans;
         return ans;
     }
     return ans;
        
    }
};