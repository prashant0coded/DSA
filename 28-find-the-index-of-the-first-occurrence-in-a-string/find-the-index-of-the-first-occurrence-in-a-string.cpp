class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        int i = 0;
        int j = 0;
        int match = needle.size();

        while (i < haystack.size()) {

            if (haystack[i] != needle[j]) {
                i = i - j + 1;
                j = 0;
                match = needle.size();
            }
            else {
                i++;
                j++;
                match--;
            }

            if (match == 0)
                return i - needle.size();
        }

        return -1;
    }
};