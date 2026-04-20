// Return True if a given integer is a palindrome number

class Solution {
    public boolean isPalindrome(int x) {
        if (x<0) {
            return false;
        }
        int digit;
        int rev=0;
        int temp=x;
        while(temp!=0) {
            digit=temp%10;
            rev=rev*10+digit;
            temp/=10;
        }
        return x==rev;
    }
}
