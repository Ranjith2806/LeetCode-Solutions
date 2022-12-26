class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n= s.length();
        int start=0,end=n-1;
        while(start<end){
            if(!(s[start]>='A' && s[start]<='Z') && !(s[start]>='a' && s[start]<='z'))
            {
                start++;
            }
            else if(!(s[end]>='A' && s[end]<='Z') && !(s[end]>='a' && s[end]<='z'))
            {
                end--;
            }
            else{
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};
