class Solution 
{
public:
    int reverse(int x) {
        long int rev=0;
        int n=x;
        while(n!=0)
        {
            long int ld=n%10;
            rev=(rev*10)+ld;
            n/=10;
        }
        if(rev>INT_MAX||rev<INT_MIN) return 0;
        return rev;
    }
};
