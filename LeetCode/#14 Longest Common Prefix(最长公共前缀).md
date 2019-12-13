Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"

初始想到的方法是任选一个串，暴力它的每一个前缀与其他串比较，时间复杂度是O(m*n*m) 

后面得出解决方案：

方法1 横向检查： 

先比较前两个串，然后将得到的该两个串的最长前缀与下一个串再去判断。时间复杂度O（n*m）
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==0) return "";    
        string temp = strs[0] ;
        for (int i = 1 ; i<strs.size();i++)
        {
            int j = i + 1 ;
            while (strs[i].find(temp)!= 0)
            {
                temp = temp.substr(0 , temp.length()-1) ;
                if (temp.empty()) return "" ;
            }
        }
        return temp;
    }
};

方法2 纵向检查：

依次判断每一个串的第一个下标，若相同则比较第二个下标，以此类推。
class Solution {
public:
    string longestCommonPrefix(string [] strs) {
      for (int i = 0 ; i<strs[0].length();i++)
      {
          char c = strs[0][i];
          for (int j = 1 ; j <strs.size();j++)
          {
              if(strs[j][i] != c || strs[j].length() == i) 
              {
                  return strs[0].substr(0,i-1);
              }
          }
      }
};
