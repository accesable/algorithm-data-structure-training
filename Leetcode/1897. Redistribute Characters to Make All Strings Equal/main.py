class Solution:
    def makeEqual(self, words: List[str]) -> bool:
        freq = dict()
        for i in words:
            for j in i:
                freq[j] = freq.get(j,0) + 1
        for k in freq:
            if freq[k] % len(words) != 0:
                return False
        return True
