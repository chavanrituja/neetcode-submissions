class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmails;

        for (string email : emails) {
            int at = email.find('@');

            string local = email.substr(0, at);
            string domain = email.substr(at);

            string cleanedLocal = "";

            for (char ch : local) {
                if (ch == '+')
                    break;

                if (ch != '.')
                    cleanedLocal += ch;
            }

            uniqueEmails.insert(cleanedLocal + domain);
        }

        return uniqueEmails.size();
    }
};