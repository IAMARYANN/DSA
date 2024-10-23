class Solution {
public:
    long myAtoirec(const string&s,int i,int sign,long ans)
    {
        if(i>=s.length()|| !isdigit(s[i]))
            return ans*sign;
        ans=ans*10+(s[i]-'0');
        if(sign ==1 && ans>INT_MAX) return INT_MAX;
        if(sign ==-1 && -ans<INT_MIN) return INT_MIN;
        return myAtoirec(s,i+1,sign,ans);
    }
    int myAtoi(string s) 
    {
           int i=0;
        int sign=1;
        long ans=0;
        while(i<s.length() && s[i]==' ')
            i++;
        
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
            i++;
       return myAtoirec(s,i,sign,ans); 
        return (ans*sign);
    }
};