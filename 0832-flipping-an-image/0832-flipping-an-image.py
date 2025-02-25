class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        r=[]
        for i in image:
            i.reverse()
            r.append([t^1 for t in i])
        return r
        