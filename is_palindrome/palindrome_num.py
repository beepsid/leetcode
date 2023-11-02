def isPalindrome(x: int) -> bool:
    a=x
    if x<10 and x>0:
        return True
    elif x < 0:
        return False

    reversed_x = 0
    while a > 0:
        reversed_x = reversed_x * 10 + a % 10
        a //= 10

    return x == reversed_x

print(isPalindrome(123))