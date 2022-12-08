class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() <= 1) return true;
        int a=0;
        int b= s.length()-1;
	    while(a<b)
	    {
	        while(a<b && !isalnum(s[a])) a++;
            while(a<b && !isalnum(s[b])) b--;
            if(a<b && tolower(s[a]) != tolower(s[b])) return false;
            a++;
            b--;
	    }
        return true;
	       
    }
};
