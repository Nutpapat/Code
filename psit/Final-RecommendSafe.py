"""[Final Recommend]Safe"""
def main():
    """ decrypt code to secret box """
    secretbox = input()
    txt = input()
    count = 0
    for i in range(len(secretbox)):
        if secretbox[i] != txt[i]:
            ans1 = ord(secretbox[i]) -  ord(txt[i])
            ans2 = ord(txt[i]) -  ord(secretbox[i])
            if ans1 < 0:
                ans1 += 26
            if ans2 < 0:
                ans2 += 26
            count += (ans1 if ans1 < ans2 else ans2)
    print(count)
main()
