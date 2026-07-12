class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int n = s.size();

        int countS[26] = {};
        int countT[26] = {};
        
        for(int i=0; i<n; i++) {
            countS[s[i] - 'a']++;
            countT[t[i] - 'a']++;
        }
        for(int i=0; i<26; i++) {
            if(countS[i] != countT[i]) {
                return false;
            }
        }
        return true;
    }
};
