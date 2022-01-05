t = int(input())
while t>0:
    n = int(input())
    s = input()
    s1 = "code"
    s2 = "chef"
    if s.find(s1) <= s.find(s2):
        print("AC")
    else:
        print("WA")
    t -= 1
