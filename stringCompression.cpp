#include <vector>
#include <string>

class Solution {
public:
    int compress(std::vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while (i < n) {
            // Initialize j to the next index
            int j = i + 1;

            // Find the consecutive repeated characters
            while (j < n && chars[i] == chars[j]) {
                j++;
            }

            // Add the current character to the compressed vector
            chars[ansIndex++] = chars[i];
            
            // Calculate the count of repetitions
            int count = j - i;

            // If count is greater than 1, add the count as characters to the compressed vector
            if (count > 1) {
                std::string cnt = std::to_string(count);
                for (char ch : cnt) {
                    chars[ansIndex++] = ch;
                }
            }

            // Move i to the next position after the repeated characters
            i = j;
        }

        return ansIndex;
    }
};
