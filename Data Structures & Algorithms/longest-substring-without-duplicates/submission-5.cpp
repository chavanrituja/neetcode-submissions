class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
                unordered_map<char, int> lastIndex; // stores last seen index
                        int maxLen = 0;
                                int l = 0;

                                        for (int r = 0; r < s.size(); r++) {
                                                    char c = s[r];

                                                                // if character seen and inside current window
                                                                            if (lastIndex.find(c) != lastIndex.end() && lastIndex[c] >= l) {
                                                                                            l = lastIndex[c] + 1; // move left pointer
                                                                                                        }

                                                                                                                    lastIndex[c] = r; // update last seen index
                                                                                                                                maxLen = max(maxLen, r - l + 1);
                                                                                                                                        }

                                                                                                                                                return maxLen;
                                                                                                                                                    }
                                                                                                                                                    };

