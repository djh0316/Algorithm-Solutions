N = int(input());
arr = list(map(int, input().split()));

result = 0;

for i in range(2 * N - 1):
    num = 0;
    meet = 0;
    for j in range(i + 1, 2 * N):
      if(arr[i] != arr[j]) :
        num+= 1;
      else :
        meet = 1;
        break;
    if(meet == 1): result = max(result, num);

print(result);