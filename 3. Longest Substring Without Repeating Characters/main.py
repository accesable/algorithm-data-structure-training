t1 = "abcabcbb"
t2 = "bbbbb"
t3 = "pwwkew"
t4 = "au"
t5 = " "
t6 = ""
t7 = "dvdf"
def lengthOfLongestSubstring(s: str) -> int:
    left = 0
    # right = 1

    max_value = 1
    if len(s) == 0 : return 0
    for right in range(1,len(s)):
        # print("before : ",left,right)

        for j in range(left,right):
            if s[j] == s[right]:
                # print(" j {} and right : {} : ".format(j,right))
                left = j + 1
        if len(s[left:right+1]) > max_value:
            max_value = len(s[left:right+1])

        # print("after : ",left, right)   
        print(s[left:right+1])
        # print("-----")
    return max_value

print(lengthOfLongestSubstring(t4))