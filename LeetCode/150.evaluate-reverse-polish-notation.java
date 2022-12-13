import java.util.Stack;

import javax.lang.model.util.ElementScanner14;

/*
 * @lc app=leetcode id=150 lang=java
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution {
    public int evalRPN(String[] tokens) {
        var st = new Stack<Integer>();
        String k = "+-*/";
        for (int i = 0; i < tokens.length; i++) {
            if (!k.contains(tokens[i])) {
                st.push(Integer.parseInt(tokens[i]));
            } else {
                int b = st.pop();
                int a = st.pop();
                if (tokens[i].equals("+")) {
                    st.push(a + b);
                } else if (tokens[i].equals("-")) {
                    st.push(a - b);
                } else if (tokens[i].equals("*")) {
                    st.push(a * b);
                } else {
                    st.push(a / b);
                }

            }

        }
        return st.pop();

    }
}
// @lc code=end
