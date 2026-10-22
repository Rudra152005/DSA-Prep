
class Solution:
    def replaceWords(self, dictionary, sentence):
        roots = set(dictionary)
        words = sentence.split()
        result = []
        for word in words:
            prefix = ""
            for ch in word:
                prefix += ch
                if prefix in roots:
                    result.append(prefix)
                    break
            else:
                result.append(word)

        return " ".join(result)
