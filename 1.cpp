class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0)
        return false;

    int num=x;
    long sum=0;
    while(x)
    {
        sum=sum*10 + x%10;
        x=x/10;
    }
    if(sum==num)
        return true;
    else
        return false;
    }
};
