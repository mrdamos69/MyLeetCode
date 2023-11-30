#include <iostream>
#include <string>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int count = 0;
        bool check = false;
        if(s.size() == 1 && s[s.size() - 1] != ' ') return s.size();
        for (size_t i = s.size() - 1; i >= 0; i--) {
            if(s[i] == ' ' && check == false) {}
            else {
                check = true;
                if(s[i] == ' ') return count;
                if(i == 0) return count + 1;
                count ++;
            }
        }
        return count;
    }
};