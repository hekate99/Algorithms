class Solution {
public:
int reverse(int x) {
int sign=x<0?-1:1;

    if(x<INT_MIN+6)
        return 0;
    else if(x> INT_MAX-5)
        return 0;
    
    int ans=0;
    x=x*sign;
    while(x)
    {
        if(ans<INT_MAX/10||(ans==INT_MAX/10 && x%10<=2))
        {
            ans=ans*10+x%10;
            x=x/10;
        }
        else return 0;
    }
    return ans*sign;
    
}
};
