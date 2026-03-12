# S1, S2, S3 입력
s1, s2, s3 = map(int, input().split())

# 합의 빈도를 저장할 리스트 (최대 합 60까지 가능)
counts = [0] * 81

# 3중 반복문으로 모든 합의 경우의 수를 계산
for i in range(1, s1 + 1):
    for j in range(1, s2 + 1):
        for k in range(1, s3 + 1):
            total = i + j + k
            counts[total] += 1

# 가장 많이 등장한 합(인덱스) 찾기
max_val = 0
result = 0

# 3부터 최대 합까지 순회
for i in range(3, s1 + s2 + s3 + 1):
    if counts[i] > max_val:
        max_val = counts[i]
        result = i

print(result)