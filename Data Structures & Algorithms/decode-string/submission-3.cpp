class Solution {
    public:
        string decodeString(string s) {
                stack<string> st;

                        for (char ch : s) {
                                    if (ch != ']') {
                                                    st.push(string(1, ch));
                                                                } else {
                                                                                string str = "";
                                                                                                while (!st.empty() && st.top() != "[") {
                                                                                                                    str = st.top() + str;
                                                                                                                                        st.pop();
                                                                                                                                                        }

                                                                                                                                                                        st.pop();

                                                                                                                                                                                        string num = "";
                                                                                                                                                                                                        while (!st.empty() && isdigit(st.top()[0])) {
                                                                                                                                                                                                                            num = st.top() + num;
                                                                                                                                                                                                                                                st.pop();
                                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                                                int k = stoi(num);
                                                                                                                                                                                                                                                                                                string temp = "";
                                                                                                                                                                                                                                                                                                                while (k--) temp += str;
                                                                                                                                                                                                                                                                                                                                st.push(temp);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                                                                                            string ans = "";
                                                                                                                                                                                                                                                                                                                                                                    while (!st.empty()) {
                                                                                                                                                                                                                                                                                                                                                                                ans = st.top() + ans;
                                                                                                                                                                                                                                                                                                                                                                                            st.pop();
                                                                                                                                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                                                                                                                                            return ans;
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                };
