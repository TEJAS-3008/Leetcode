class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        output = []
        for each in image:
            each.reverse()
            for i in range(0, len(each)):
                each[i] = each[i] ^ 1
            
            output.append(each)

        return output
            
        
