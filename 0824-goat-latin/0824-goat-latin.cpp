class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    string toGoatLatin(string sentence) {
        string word, result;
        int index = 1;

        for (int i = 0; i <= sentence.size(); i++) {
            if (i == sentence.size() || sentence[i] == ' ') {
                if (isVowel(word[0])) {
                    word += "ma";
                } else {
                    word = word.substr(1) + word[0] + "ma";
                }

                word += string(index, 'a');
                result += word;

                if (i != sentence.size()) result += " ";

                word = "";
                index++;
            } else {
                word += sentence[i];
            }
        }

        return result;
    }
};