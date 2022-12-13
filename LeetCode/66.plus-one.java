import java.util.ArrayList;
import java.util.Arrays;

/*
 * @lc app=leetcode id=66 lang=java
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
    public int[] plusOne(int[] digits) {
        int ln = digits.length;

        for (int i = ln - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        int[] newNum = new int[ln + 1];
        System.out.println(newNum);
        newNum[0] = 1;
        return newNum;

    }
}
// @lc code=end
