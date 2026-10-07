class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
                unordered_map<int, int> freq;

                
                                for (int num : nums) {
                                            freq[num]++;
                                                    }


                                                                    vector<pair<int, int>> v;
                                                                            for (auto it : freq) {
                                                                                        v.push_back({it.second, it.first});
                                                                                                }

                                                                                                        
                                                                                                                sort(v.begin(), v.end(), greater<>());

                                                                                                                        
                                                                                                                                vector<int> result;
                                                                                                                                        for (int i = 0; i < k; i++) {
                                                                                                                                                    result.push_back(v[i].second);
                                                                                                                                                            }

                                                                                                                                                                    return result;
                                                                                                                                                                        }
                                                                                                                                                                        };

