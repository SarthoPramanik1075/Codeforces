t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    iterations = 0
    
    while True:
        dec_index = -1
        for i in range(n):
            if a[i] > b[i]:
                dec_index = i
                break
        
        if dec_index == -1:
            iterations += 1
            break
                
        a[dec_index] -= 1 
        
        for i in range(n):
            if a[i] < b[i]:
                a[i] += 1
                break
        
        iterations += 1
    
    print(iterations)
