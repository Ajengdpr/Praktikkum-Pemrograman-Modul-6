k = int(input())
nilai = list(map(int, input().split()))
matriks = []
a = 0
for i in range(0, k):
    matriks.append(nilai[a : a + k])
for i in range(0, k):
    print(matriks[0][i] * (i + 1), end=' ')