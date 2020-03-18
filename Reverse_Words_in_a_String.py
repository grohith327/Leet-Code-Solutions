class Solution:
    def reverseWords(self, s: str) -> str:
        words = list(s.split(' '))
        words_space_removed = []
        for word in words:
            if(len(word) > 0):
                words_space_removed.append(word)
        words_space_removed.reverse()
        return ' '.join(words_space_removed)
