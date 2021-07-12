#-*- coding:UTF-8 -*-
import string 
import collections

def caeserCipher(n,s,k):
    ans = []
    upr = string.ascii_uppercase
    lwr = string.ascii_lowercase
    a = collections.deque([i for i in upr])
    b = collections.deque([i for i in lwr])
    exceptions = string.punctuation + string.digits

    for x in range(k):
        a.rotate(-1)
        b.rotate(-1)
    for y in s:
        if y in exceptions:
            ans.append(y)
        elif y.isupper():
            ans.append(a[upr.index(y)])
        elif y.islower():
            ans.append(b[lwr.index(y)])
    
    print(''.join(ans))

n = int(input())
s = [i for i in input()]
k = int(input())
caeserCipher(n,s,k)
