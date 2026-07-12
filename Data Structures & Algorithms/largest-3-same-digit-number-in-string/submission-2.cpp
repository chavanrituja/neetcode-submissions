class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        int count = 1;

        for(int i=1; i<num.size(); i++) {
            if(num[i] == num[i-1]) {
                count++;
            }
            else {
                count = 1;
            }
            if(count == 3) {
                string res = num.substr(i-2,3);
                if(res > ans) {
                    ans = res;
                }
            }
        }
        return ans;
    }
};