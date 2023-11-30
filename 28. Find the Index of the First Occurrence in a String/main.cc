#include <iostream>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int result = -1;
        bool check = false;
        if (haystack.size() >= needle.size()) {
            for (size_t i = 0; i < haystack.size(); i++) {
                if (haystack[i] == needle.front() && !check) {
                    result = i;
                    for (size_t j = 0; j < needle.size(); ++j, ++i) {
                        if (haystack[i] != needle[j]) {
                            result = -1;
                            check = false;
                            if (haystack[i - 1] == needle.front() && haystack[i - 1] != haystack[i] && haystack.front() != needle.front() && i != haystack.size())
                                i -= 2;
                            else if (haystack[i - 1] == haystack[i])
                                i--;
                            break;
                        }
                        else {
                            check = true;
                        }
                    }
                }
            }
        }
        return result;
    }
};