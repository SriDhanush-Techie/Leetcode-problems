class Solution(object):
    def candy(self, ratings):
        length=len(ratings)
        count=0
        candies=[1]*length
        for i in range(1,length):
            if ratings[i-1]<ratings[i]:
                candies[i]=candies[i-1]+1
        for i in range(length-1,0,-1):
            if ratings[i]<ratings[i-1]:
                candies[i-1]=max(candies[i]+1,candies[i-1])
            count += candies[i-1]
        return count+candies[length-1]
