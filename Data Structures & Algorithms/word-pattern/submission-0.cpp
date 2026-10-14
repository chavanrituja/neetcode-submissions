class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        while (ss >> word) {
            words.push_back(word);
        }
        if (pattern.size() != words.size())
            return false;
        map<char, string> m1;
        map<string, char> m2;
        for (int i = 0; i < pattern.size(); i++) {
            if (m1.count(pattern[i]) && m1[pattern[i]] != words[i])
                return false;
            if (m2.count(words[i]) && m2[words[i]] != pattern[i])
                return false;
            m1[pattern[i]] = words[i];
            m2[words[i]] = pattern[i];
        }
        return true;
    }
};