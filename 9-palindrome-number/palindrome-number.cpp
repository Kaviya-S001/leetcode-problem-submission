class Solution {
public:
    bool isPalindrome(int x) {
        int rem;
        int long rev=0;
        int temp=x;
        if(x<0)return false;
        while(temp!=0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp/=10;
        }
        return x==rev;
    }
};