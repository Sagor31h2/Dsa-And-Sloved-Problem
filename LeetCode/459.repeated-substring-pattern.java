/*
 * @lc app=leetcode id=459 lang=java
 *
 * [459] Repeated Substring Pattern
 */

// @lc code=start
class Solution {
    public boolean repeatedSubstringPattern(String s) {
        int ln = s.length();

        for (int i = ln / 2; i > 0; i--) {
            if (ln % i == 0) {
                int total_repeat = ln / i;

                var subStr = s.substring(0, i);

                var sb = new StringBuilder();
                for (int j = 0; j < total_repeat; j++) {
                    sb.append(subStr);
                }
                if (sb.toString().equals(s)) {
                    return true;
                }
            }
        }

        return false;
    }
}
// @lc code=end
