class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();
        int i = 0;
        
        while (i < n) {
            int j = i;
            
            while (j < n && title[j] != ' ') {
                title[j] = tolower(title[j]);
                j++;
            }
            
            if (j - i > 2) {
                title[i] = toupper(title[i]);
            }
            
            i = j + 1;
        }
        
        return title;
    }
};