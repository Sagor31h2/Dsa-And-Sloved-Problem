from typing import List


class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        com = []
        i = 0
        s = 0
        ans = []

        self.comSum(candidates, target, i, com, ans, s)
        print("ans", ans)
        return ans

    def comSum(self, c, t, i, com, a, s):
        if s > t:
            return
        if s == t:
            print("in a ", a)
            a.append(com)
            print("af add", a)
            return

        if i < len(c):

            com.append(c[i])

            s += c[i]
            #print (com," ", s," ", t)

            self.comSum(c, t, i, com, a, s)
            com.pop()
            s -= c[i]
            self.comSum(c, t, i+1, com, a, s)
