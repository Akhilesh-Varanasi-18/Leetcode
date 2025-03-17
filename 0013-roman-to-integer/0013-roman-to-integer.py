class Solution:
    def romanToInt(self, s: str) -> int:
        l=list(s)
        print(l)
        c=0
        for o in range(len(l)):
            if l[o]=='I':
                c+=1
            elif l[o]=='V':
                c+=5
            elif l[o]=='X':
                c+=10
            elif l[o]=='L':
                c+=50
            elif l[o]=='C':
                c+=100
            elif l[o]=='D':
                c+=500
            elif l[o]=='M':
                c+=1000
        for f in range(len(l)):
            if  (l[f]=='I' and f==len(l)-1):
                continue
            elif l[f]=='I'  and l[f+1] == 'V':
                c-=2
            elif  l[f]=='I'  and l[f+1] == 'X':
                c-=2
            if  (l[f]=='X' and f==len(l)-1):
                continue
            elif l[f]=='X'  and l[f+1] == 'L':
                c-=20
            elif  l[f]=='X'  and l[f+1] == 'C':
                c-=20
            if  (l[f]=='C' and f==len(l)-1):
                continue
            elif l[f]=='C'  and l[f+1] == 'D':
                c-=200
            elif  l[f]=='C'  and l[f+1] == 'M':
                c-=200
        return c