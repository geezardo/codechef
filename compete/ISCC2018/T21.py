t = int(input())

for i in range(t):
    (m, n) = [int(x) for x in input().split()]

    print((n * m) % 3)

