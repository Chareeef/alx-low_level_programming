# Find the largest palindrome made from the product of two 3-digit numbers.

def is_palindrome(strNum):
    i = 0
    j = len(strNum) - 1
    
    while (i < j):
        if (strNum[i] != strNum[j]):
            return 0
        i += 1
        j -= 1

    return 1



def find_palindrom_number():
    largest_pal = 0

    for x in range(100, 1000):
        for y in range(100, 1000):
            if (is_palindrome(str(x * y))):
                num = x * y
                if (largest_pal <= num):
                    largest_pal = num
                    print(f'{x} * {y} = {largest_pal}')
    print('The largest palindrome is:', largest_pal)
    return largest_pal

find_palindrom_number()
