class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        res, lowest = 0, prices[0]
        for price in prices:
            if price < lowest:
                lowest = price
            res = max(res, price - lowest)
        return res
