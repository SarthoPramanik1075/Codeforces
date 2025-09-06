def max(numbers):

    op = 0
    while all(num % 2 == 0 for num in numbers):
        numbers = [num // 2 for num in numbers]
        op += 1

    return op
n= int(input())
numbers = list(map(int, input().split()))
print(max(numbers))