class Solution {
public:
    bool isPalindrome(string s) {
        int i{0};
        int j{static_cast<int>(s.size())-1};

        for (char &c : s){
            c = std::tolower(static_cast<unsigned char>(c));
        }
        while (i <= j){
            if (!isalnum(s[i])){
                i++;
            } else if (!isalnum(s[j])){
                j--;
            } else if (s[i]==s[j]){
                i++;
                j--;
            } else {
                return false;
            }

        }
        return true;
    }
};
