#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0;
        int n=x;;
        if(n<0) return false;
        while(n!=0)
        {
            long int ld=n%10;
            rev=(rev*10)+ld;
            n/=10;
        }
        if(rev==x) return true;
        else return false;
    }
};