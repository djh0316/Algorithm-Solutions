M, H = map(int, input().split())
N = int(input())

result = 0

for i in range(N) : 
    C, B = map(int, input().split())
    if (C * M > B * H): result += C * M
    else: result += B * H

print(result) 

