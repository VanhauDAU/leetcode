class Solution {
public:
    string reformatNumber(string number) {
        string digits = "";
        for (char c : number) {
            if (isdigit(c)) {
                digits += c;
            }
        }
        string result = "";
        int n = digits.size();
        int i = 0;
    
        while (n - i > 4) {
            result += digits.substr(i, 3);
            result += '-';
            i += 3;
        }
        if (n - i == 4) {
            result += digits.substr(i, 2);
            result += '-';
            result += digits.substr(i + 2, 2);
        } else {
            result += digits.substr(i);
        }
        
        return result;
    }
};