class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> countS;
        unordered_map<char,int> countT;
        for (char c: s){
            if (countS.find(c) != countS.end()){
                countS[c] +=1;
            } else{
                countS[c] = 1;
            }
        }
        for (char c: t){
            if (countT.find(c) != countT.end()){
                countT[c] +=1;
            } else {
                countT[c] = 1;
            }
        }
        return countS == countT;
    }
};
