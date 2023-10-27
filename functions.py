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
