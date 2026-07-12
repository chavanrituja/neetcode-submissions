class Solution {
    public:

        // Encode list of strings to a single string
            string encode(vector<string>& strs) {
                    string res = "";

                            for (string s : strs) {
                                        res += to_string(s.length()) + "#" + s;
                                                }

                                                        return res;
                                                            }

                                                                // Decode single string to list of strings
                                                                    vector<string> decode(string s) {
                                                                            vector<string> res;
                                                                                    int i = 0;

                                                                                            while (i < s.length()) {
                                                                                                        // Find length
                                                                                                                    int j = i;
                                                                                                                                while (s[j] != '#') {
                                                                                                                                                j++;
                                                                                                                                                            }

                                                                                                                                                                        int len = stoi(s.substr(i, j - i));

                                                                                                                                                                                    // Move to start of string
                                                                                                                                                                                                j++;

                                                                                                                                                                                                            // Extract the string
                                                                                                                                                                                                                        string word = s.substr(j, len);
                                                                                                                                                                                                                                    res.push_back(word);

                                                                                                                                                                                                                                                // Move to next part
                                                                                                                                                                                                                                                            i = j + len;
                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                            return res;
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                };
