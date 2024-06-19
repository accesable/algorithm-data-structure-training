# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->

# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> umap1;
        unordered_map<char, int> umap2;
        for(size_t i = 0 ; i < s.length();i++)
        {
            char c1 = s[i],c2=t[i];
            if (umap1.count(c1) > 0 && umap1[c1] != c2 || 
                umap2.count(c2) > 0 && umap2[c2] != c1) {
                return false;
            }
            else{
                umap1[c1] = c2;
                umap2[c2] = c1;
            }
            // cout << umap[s[i]] << " |";
        }
        return true;
    }
};
```
