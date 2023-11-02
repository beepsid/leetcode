class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        return sorted(arr, key=lambda x: (count_ones(x), x))

def count_ones(n):
    count = 0
    while n > 0:
        count += n % 2
        n = n // 2
    return count