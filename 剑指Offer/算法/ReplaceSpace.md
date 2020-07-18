### 字符串替换

 **请实现一个函数，把字符串 `s` 中的每个空格替换成"%20".**

* 因为在循环里拼接字符串消耗大（需要new 一个新的string）， 所以使用StringBuilder



```java
class Solution {
    public String replaceSpace(String s) {
        StringBuilder stbd = new StringBuilder();
        char[] chars = s.toCharArray();
        for(int i = 0 ;i<chars.length;i++){
            if(chars[i] ==  ' '){
                stbd.append("%20");
            }
            else{
                stbd.append(chars[i]);
            }
        }
        return stbd.toString();
    }

```

