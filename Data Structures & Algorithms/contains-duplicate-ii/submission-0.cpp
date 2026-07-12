class Solution {
    public:
        bool containsNearbyDuplicate(vector<int>& nums, int k) {
                unordered_set<int> s;

                        for (int i = 0; i < nums.size(); i++) {
                                    // Check duplicate
                                                if (s.find(nums[i]) != s.end()) {
                                                                return true;
                                                                            }

                                                                                        // Add current element
                                                                                                    s.insert(nums[i]);

                                                                                                                // Maintain window size of k
                                                                                                                            if (s.size() > k) {
                                                                                                                                            s.erase(nums[i - k]);
                                                                                                                                                        }
                                                                                                                                                                }

                                                                                                                                                                        return false;
                                                                                                                                                                            }
                                                                                                                                                                            };
