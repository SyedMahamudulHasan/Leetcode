class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0;
        long ori = x;
        
        if(x < 0) return false;
        
        while(x){
            rev = rev*10 + x%10;
            x /= 10;
        }
        
        if(rev == ori ) return true;
        else return false;
        
    }
};