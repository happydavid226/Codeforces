t = int(input())
for _ in range(t):
    n = int(input())
    a = input()
    b = input()
    
    total_balance = 0
    ok = True
    
    for i in range(n):
        # Count ( as +1, ) as -1, across BOTH strings
        total_balance += (1 if a[i] == '(' else -1)
        total_balance += (1 if b[i] == '(' else -1)
        
        if total_balance < 0:
            ok = False
            break
    
    # Also check total is 0 (equal number of ( and ) across both)
    if total_balance != 0:
        ok = False
    
    print("YES" if ok else "NO")