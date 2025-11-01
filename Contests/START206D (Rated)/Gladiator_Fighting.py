def func():
    t = int(input().strip())
    for _ in range(t):
        N = int(input().strip())
        
        # min
        if N == 2:
            min_ent = 0
        else:
            min_ent = N - 2
        
        # max
        max_ent = (N - 1) * (N - 2) // 2
        
        print(min_ent, max_ent)
        
        
func()