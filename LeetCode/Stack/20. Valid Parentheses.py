class Solution:
    def isValid(self, s: str) -> bool:
        l = []
        for i in s:
            if i == "(" or i == "{" or i == "[":
                l.append(i)
            else:
                if not l:
                    return False
                cv = l.pop()
                if cv == "(" and i != ")":
                    return False
                if cv == "{" and i != "}":
                    return False
                if cv == "[" and i != "]":
                    return False
        if l:
            return False
        else:
            return True
