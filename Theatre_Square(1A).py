import math
n, m, a=map(int, input().split())

num_by_length=math.ceil(n/a)
num_by_width=math.ceil(m/a)

num_of_stone=num_by_length*num_by_width
print(num_of_stone)