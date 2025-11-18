class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        discarded = 0
        for word in words:
            for ch in word:
                if ch not in allowed:
                    discarded += 1
                    break

        return len(words) - discarded