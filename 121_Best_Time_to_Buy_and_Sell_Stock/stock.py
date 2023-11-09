class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        if n <= 1:
            return 0

        maxProfit = 0
        minprice = prices[0]

        for i in range(1, n):
            if prices[i] < minprice:
                minprice = prices[i]
            else:
                profit = prices[i] - minprice
                if profit > maxProfit:
                    maxProfit = profit

        return maxProfit
