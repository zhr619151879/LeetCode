Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Note: For the purpose of this problem, we define empty string as valid palindrome.

**Example 1:
Input: "A man, a plan, a canal: Panama"
Output: true**

```cpp
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0, j = n - 1;
        while (i < j) {
            while (!isdigit(s[i]) && !isalpha(s[i]) && i < j) i++;
            while (!isdigit(s[j]) && !isalpha(s[j]) && i < j) j--;
            if (i < j && tolower(s[i]) != tolower(s[j]))return false;
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};
```
