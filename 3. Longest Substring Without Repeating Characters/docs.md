# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Using set for checking existing element. but not optiomal

# Approach
<!-- Describe your approach to solving the problem. -->
Using sliding window technique (2 pointers approach)\
for loop to expand the window right side if meet the repeated character then shrink the left window to the next duplicated previous character
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```python
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
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
```

# Best Solution
```python
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        used = defaultdict(int)
        maxlen, start = 0, 0
        for i, c in enumerate(s):
            if c in used and start <= used[c]:
                start = used[c] + 1
            else:
                maxlen = max(maxlen, i - start+1)
            used[c] = i
        return maxlen
```
```python
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = 0
        max_len = 0
        hmap = {}
        for right in range(len(s)):
            if s[right] in hmap:
                left = max(hmap[s[right]], left)

            hmap[s[right]] = right + 1
            max_len = max(max_len, right - left + 1)
        return max_len
```