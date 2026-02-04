class Solution:
    def toLowerCase(self, s: str) -> str:
        lower_lst=[]
        for i in s:
            if i.isupper():
                lower_lst.append(i.lower())
            else:
                lower_lst.append(i)
        return "".join(lower_lst)