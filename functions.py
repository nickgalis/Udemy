def is_palindrome(string):
    s = ""
    for char in string:
        if char.isalnum():
            s += char
    return s[::-1].lower() == s.lower()

phrase = input("Enter phrase to check: ")
if is_palindrome(phrase):
    print("'{}' is a palindrome".format(phrase))
else:
    print("'{}' is not a palindrome".format(phrase))

def sum_eo(n, t):
    sum = -1
    
    if t == 'o':
        sum = 0
        for i in range(0, n):
            if i % 2 == 1:
                sum += i
        
    if t == 'e':
        sum = 0
        for i in range(0, n):
            if i % 2 == 0:
                sum += i
    
    return sum
