class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        unordered_map<string, vector<string>> mp;
        for(int i=0; i<strings.size(); i++) {
            string s = strings[i];
            string key = "";
            for(int j=1; j<s.size(); j++) {
                int diff = (s[j] - s[j-1] + 26) % 26;
                key += to_string(diff) + '#';
            }  
            mp[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            ans.push_back(it -> second);
        }
        return ans;
    }
};
