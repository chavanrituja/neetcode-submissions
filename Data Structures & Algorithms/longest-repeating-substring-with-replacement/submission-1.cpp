class Solution {
    public:
        int characterReplacement(string s, int k) {
                int left = 0;
                        int maxFreq = 0;
                                int ans = 0;

                                        vector<int> count(26, 0);

                                                for (int right = 0; right < s.size(); right++) {
                                                            count[s[right] - 'A']++;

                                                                        // maximum frequency character in current window
                                                                                    maxFreq = max(maxFreq, count[s[right] - 'A']);

                                                                                                // characters to replace = window size - maxFreq
                                                                                                            while ((right - left + 1) - maxFreq > k) {
                                                                                                                            count[s[left] - 'A']--;
                                                                                                                                            left++;
                                                                                                                                                        }

                                                                                                                                                                    ans = max(ans, right - left + 1);
                                                                                                                                                                            }

                                                                                                                                                                                    return ans;
                                                                                                                                                                                        }
                                                                                                                                                                                        };

