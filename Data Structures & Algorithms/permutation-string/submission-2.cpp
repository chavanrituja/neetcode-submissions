class Solution {
    public:
        bool checkInclusion(string s1, string s2) {
                if (s1.size() > s2.size()) return false;

                        vector<int> s1Count(26, 0), windowCount(26, 0);

                                // Count frequency of characters in s1
                                        for (char c : s1) {
                                                    s1Count[c - 'a']++;
                                                            }

                                                                    int left = 0;

                                                                            for (int right = 0; right < s2.size(); right++) {

                                                                                        // Add current character to window
                                                                                                    windowCount[s2[right] - 'a']++;

                                                                                                                // Maintain window size equal to s1 length
                                                                                                                            if (right - left + 1 > s1.size()) {
                                                                                                                                            windowCount[s2[left] - 'a']--;
                                                                                                                                                            left++;
                                                                                                                                                                        }

                                                                                                                                                                                    // Compare both frequency arrays
                                                                                                                                                                                                if (s1Count == windowCount) {
                                                                                                                                                                                                                return true;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                            return false;
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                };
