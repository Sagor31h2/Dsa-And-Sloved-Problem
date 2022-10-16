class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        ln = len(temperatures)

        res = [0]*ln
        st = []
        for pos, val in enumerate(temperatures):

            while st and temperatures[st[-1]] < val:
                p = st.pop()
                res[p] = pos-p

            st.append(pos)
        return res
