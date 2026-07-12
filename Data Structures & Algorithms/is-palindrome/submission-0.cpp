class Solution {
public:
    bool isPalindrome(string s) {
    string clean = "";
    for (char c : s) {
        if (isalnum(c))  
            clean += tolower(c);
    }

    string dup = clean;          
    reverse(clean.begin(), clean.end()); 

    if (dup == clean) {
        cout << "True" << endl;
        return true;
    } else {
        cout << "False" << endl;
        return false;
    }
    }
    
};