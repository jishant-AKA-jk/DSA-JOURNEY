class Solution {
    public:
        int myAtoi(string s) {
            int  multiplier=1,sign=1,flag=0;
            long int res=0;
            for(int i=0;i<s.length();i++)
            {
                if('0'<=s[i] && s[i]<='9')
                {

                    res=res*10;
                    res+=s[i]-'0';
                    if (sign * res >= INT_MAX) return INT_MAX;
                    if (sign * res <= INT_MIN) return INT_MIN;
                    flag=1;
                }
                else if(s[i]=='-' && flag==0)
                {
                    sign*=-1;
                    flag=1;
                }
                else if(s[i]=='+'  && flag==0){
                    flag=1;
                    continue;
                }
                else if(s[i]==' ' || s[i]=='_'){
                    if(flag) return res*sign;
                    continue;
                }
                else{
                    break;
                }
            }
            return (res)*sign;
        }
    };
