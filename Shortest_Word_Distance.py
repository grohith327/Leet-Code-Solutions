class Solution:
    def shortestDistance(self, words: List[str], word1: str, word2: str) -> int:
        dict_pos = {}
        for i, word in enumerate(words):
            if(word in dict_pos):
                dict_pos[word].append(i)
            else:
                dict_pos[word] = [i]
        dist1 = dict_pos[word1]
        dist2 = dict_pos[word2]
        min_dist = -1
        for i in range(len(dist1)):
            for j in range(len(dist2)):
                curr_dist = abs(dist1[i] - dist2[j])
                if(min_dist == -1):
                    min_dist = curr_dist
                if(min_dist > curr_dist):
                    min_dist = curr_dist
        return min_dist
