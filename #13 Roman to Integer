Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, two is written as II in Roman numeral, just two one's added together. Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

Example 1:

Input: "III"
Output: 3
Example 2:

Input: "IV"
Output: 4

大意就是将罗马数字转换为整数。这题想明白后就十分简单。一开始可以上手的是可以编写一个哈希表函数将罗马字符转换为整数。接着只需从左到右判断字符串每一位，
若大于等于右边一位则加，否则就减：

class Solution {
public:
    
    int convert(char a)
{
    if(a=='I') return 1;
    if(a=='V') return 5;
    if(a=='X') return 10;
    if(a=='L') return 50;
    if(a=='C') return 100;
    if(a=='D') return 500;
    if(a=='M') return 1000;
    else return -1 ;
}

    
    int romanToInt(string a) {
    
    int sum = 0;
    for(int i = 0 ; i <a.size();i++)
    {
        if(convert(a[i]) >= convert(a[i+1]) )
        {
            sum += convert(a[i]) ;
        }

        else {
            sum-= convert(a[i]);
        }
    }
        return sum ;
    }
};

执行用时 :
16 ms
, 在所有 C++ 提交中击败了
93.59%
的用户
内存消耗 :
8.2 MB
, 在所有 C++ 提交中击败了
95.94%
的用户
