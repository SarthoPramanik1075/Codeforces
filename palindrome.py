n=input().lstrip("0")
reverse_n=n[::-1].lstrip("0")
print(reverse_n)

if n==reverse_n:
    print("YES")
else:
    print("NO")
